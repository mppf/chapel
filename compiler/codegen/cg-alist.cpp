/*
 * Copyright 2020-2023 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "alist.h"
#include "astutil.h"
#include "expr.h"
#include "misc.h"
#include "stmt.h"
#include "stringutil.h"

#include "codegen.h"

#ifdef HAVE_LLVM

static VarLifetimeStatus doGetVariableStatus(void* v) {
  GenInfo* info = gGenInfo;
  auto& blocks = info->currentStackVariables;
  for (auto bIt = blocks.rbegin(); bIt != blocks.rend(); ++bIt) {
    GenVariablesByBlock& vbb = *bIt;
    auto it = vbb.varStatus.find(v);
    if (it != vbb.varStatus.end()) {
      return it->second;
    }
  }
  return VarLifetimeStatus::NONE;
}

static VarLifetimeStatus getVariableStatus(VarSymbol* v) {
  return doGetVariableStatus(v);
}

static VarLifetimeStatus getVariableStatus(GenVariable& v) {
  if (v.var != nullptr) return doGetVariableStatus(v.var);
  else return doGetVariableStatus(v.alloc);
}

static void doNoteVarStatusChange(void* key, VarLifetimeStatus newStatus) {
  GenInfo* info = gGenInfo;
  INT_ASSERT(info->currentStackVariables.size() > 0);
  GenVariablesByBlock& vbb = info->currentStackVariables.back();
  vbb.varStatus[key] = newStatus;
}

static void noteVarStatusChange(GenVariable& v, VarLifetimeStatus newStatus) {
  void* key = v.var != nullptr ? (void*) v.var : (void*) v.alloc;
  doNoteVarStatusChange(key, newStatus);
}
/*static void noteVarStatusChange(VarSymbol* v, VarLifetimeStatus newStatus) {
  doNoteVarStatusChange(v, newStatus);
}*/

void noteAllocaAndLifetimeStartGenerated(llvm::AllocaInst* alloc,
                                         llvm::Type* type,
                                         VarSymbol* var) {
  GenInfo* info = gGenInfo;
  INT_ASSERT(info->currentStackVariables.size() > 0);
  GenVariablesByBlock& vbb = info->currentStackVariables.back();
  vbb.varsDeclaredHere.push_back(GenVariable(alloc, type, var));
  void* key = var != nullptr ? (void*) var : (void*) alloc;
  vbb.declaredHereIdx[key] = vbb.varsDeclaredHere.size()-1;
  noteVarStatusChange(vbb.varsDeclaredHere.back(),
                      VarLifetimeStatus::LIFETIME_START);

}

// request llvm.invariant.start be generated in block containing var decl
void noteInvariantStartShouldBeEmitted(VarSymbol* var) {
  GenInfo* info = gGenInfo;
  INT_ASSERT(info->currentStackVariables.size() > 0);
  GenVariablesByBlock& vbb = info->currentStackVariables.back();
  VarLifetimeStatus existingStatus = getVariableStatus(var);
  if (existingStatus == VarLifetimeStatus::LIFETIME_START) {
    vbb.statusUpdates[var] = VarLifetimeStatus::NEEDS_INVARIANT_START;
  }
}

// generate llvm.invariant.start
void codegenInvariantStart(GenVariable& v) {
  VarLifetimeStatus status = getVariableStatus(v);
  if (status == VarLifetimeStatus::LIFETIME_START ||
      status == VarLifetimeStatus::NEEDS_INVARIANT_START) {
    // ok, we can continue
  } else {
    return; // status is not reasonable for invariant start.
  }

  // cannot do this if we don't have the pointed-to type
  INT_ASSERT(v.type != nullptr);
  // should have a VarSymbol
  INT_ASSERT(v.var);

  GenInfo *info = gGenInfo;
  INT_ASSERT(info->currentStackVariables.size() > 0);
  GenVariablesByBlock& vbb = info->currentStackVariables.back();

  if (vbb.list->parent->getFunction()->hasFlag(FLAG_AUTO_II)) {
    // don't generate invariant start in iterators because the control
    // flow is complex enough that it's hard to get the llvm.invariant.start
    // to dominate the llvm.invariant.end.
    return;
  }

  llvm::Value *addr = v.alloc;

  const llvm::DataLayout& dataLayout = info->module->getDataLayout();

  uint64_t sizeInBytes;
  if (v.type->isSized())
    sizeInBytes = dataLayout.getTypeSizeInBits(v.type)/8;
  else
    return;

  llvm::ConstantInt *size = llvm::ConstantInt::getSigned(
      llvm::Type::getInt64Ty(info->llvmContext), sizeInBytes);

  llvm::Value* ivStart = info->irBuilder->CreateInvariantStart(addr, size);
  v.invariantStartInst = ivStart;
  noteVarStatusChange(v, VarLifetimeStatus::INVARIANT_START);
}
// generate llvm.invariant.end
void codegenInvariantEnd(GenVariable& v) {

  VarLifetimeStatus status = getVariableStatus(v);
  if (status == VarLifetimeStatus::INVARIANT_START) {
    // ok, we can continue
  } else {
    return; // status is not reasonable for invariant end.
  }

  // cannot do this if we don't have an llvm.invariant.start instruction
  // and type as well
  INT_ASSERT(v.invariantStartInst != nullptr && v.type != nullptr);

  llvm::Value *addr = v.alloc;

  GenInfo *info = gGenInfo;
  llvm::Module* M = info->module;
  // Work around lack of IRBuilder::CreateInvariantEnd
  llvm::Type* ObjectPtr[1] = {addr->getType()};
  llvm::Function* f = llvm::Intrinsic::getDeclaration(
                             M, llvm::Intrinsic::invariant_end, ObjectPtr);

  llvm::Type *valType = v.type;
  const llvm::DataLayout& dataLayout = M->getDataLayout();

  int64_t sizeInBytes = -1;
  if (valType->isSized())
    sizeInBytes = dataLayout.getTypeStoreSize(valType);
  else
    return;

  llvm::ConstantInt *size = llvm::ConstantInt::getSigned(
    llvm::Type::getInt64Ty(info->llvmContext), sizeInBytes);

  llvm::Value* Ops[] = {v.invariantStartInst, size, addr};
  info->irBuilder->CreateCall(f, Ops);
  noteVarStatusChange(v, VarLifetimeStatus::INVARIANT_END);
}

// generate llvm.lifetime.end
// (note, llvm.lifetime.start is normally generated at the same time as
//  the alloca in makeAllocaAndLifetimeStart)
void codegenLifetimeEnd(GenVariable& v) {
  VarLifetimeStatus status = getVariableStatus(v);

  if (status == VarLifetimeStatus::NONE ||
      status == VarLifetimeStatus::LIFETIME_END) {
    // nothing to do
    return;
  }

  if (status == VarLifetimeStatus::INVARIANT_START) {
    // generate the invariant end first
    codegenInvariantEnd(v);
    // then proceed with the lifetime end
  }

  // cannot do this if we don't have the pointed-to type or
  // if it's not a local variable
  INT_ASSERT(v.type != nullptr && v.alloc != nullptr);

  llvm::Value *addr = v.alloc;

  // Nothing to do if it's not about a local variable!
  if (addr == nullptr) return;

  llvm::Type *valType = v.type;
  GenInfo *info = gGenInfo;
  const llvm::DataLayout& dataLayout = info->module->getDataLayout();

  int64_t sizeInBytes = -1;
  if (valType->isSized())
    sizeInBytes = dataLayout.getTypeStoreSize(valType);
  else
    return;

  llvm::ConstantInt *size = llvm::ConstantInt::getSigned(
    llvm::Type::getInt64Ty(info->llvmContext), sizeInBytes);

  info->irBuilder->CreateLifetimeEnd(addr, size);
  noteVarStatusChange(v, VarLifetimeStatus::LIFETIME_END);
}


GenVariable* findGenVariable(VarSymbol* var) {
  GenInfo *info = gGenInfo;
  // find the variable, which is hopefully one recently declared
  // Handle each block with innermost blocks first
  auto& blocks = info->currentStackVariables;
  for (auto bIt = blocks.rbegin(); bIt != blocks.rend(); ++bIt) {
    GenVariablesByBlock& vbb = *bIt;
    auto it = vbb.declaredHereIdx.find(var);
    if (it != vbb.declaredHereIdx.end()) {
      size_t idx = it->second;
      return &vbb.varsDeclaredHere[idx];
    }
  }
  return nullptr;
}

static void handleLifetimesForNestedExpressions(Expr* node, AList* list) {
  GenInfo *info = gGenInfo;
  auto& blocks = info->currentStackVariables;
  INT_ASSERT(blocks.size() > 0);
  GenVariablesByBlock& vbb = blocks.back();
  for (auto& pair : vbb.statusUpdates) {
    if (vbb.declaredHereIdx.count(pair.first) > 0 &&
        pair.second == VarLifetimeStatus::NEEDS_INVARIANT_START) {
      // add the llvm.invariant.start if we are at the block containing
      // the variable declaration.
      size_t idx = vbb.declaredHereIdx[pair.first];
      GenVariable& v = vbb.varsDeclaredHere[idx];
      codegenInvariantStart(v);
    } else {
      // otherwise, just update the current status
      vbb.varStatus[pair.first] = pair.second;
    }
  }
  vbb.statusUpdates.clear();
}

#endif

// This function is called for many Block-like constructs
// (including regular blocks and loops).
GenRet AList::codegen(const char* separator) {
  GenInfo* info = gGenInfo;
  GenRet ret;
  if( info->cfile ) {
    // only for C...
    for_alist(node, *this) {
      ret.c += node->codegen().c;
      if (node->next != tail) {
        ret.c += separator;
      }
    }
  } else {
    bool addedToCurrentStackVars = false;

    if (info->currentStackVariables.size() > 0 &&
        info->currentStackVariables.back().list == this) {
      // OK, it's the body block for an FnSymbol, so the
      // currentStackVariables entry was added in processing the FnSymbol
      // to work with any argument processing items.
    } else {
      addedToCurrentStackVars = true;
      info->currentStackVariables.push_back(GenVariablesByBlock(this));
    }

    for_alist(node, *this) {
      node->codegen();
      handleLifetimesForNestedExpressions(node, this);
    }

    // Update the parent GenVariablesByBlock entry to process lifetime
    // statements for variables defined in that block.
    size_t nBlocks = info->currentStackVariables.size();
    if (nBlocks >= 2) {
      GenVariablesByBlock& mine = info->currentStackVariables[nBlocks-1];
      GenVariablesByBlock& parent = info->currentStackVariables[nBlocks-2];

      for (const auto& pair : mine.varStatus) {
        if (mine.declaredHereIdx.count(pair.first) > 0) {
          // it was declared in this block, so no need to propagate,
          // but do go ahead with lifetime end
          size_t idx = mine.declaredHereIdx[pair.first];
          codegenLifetimeEnd(mine.varsDeclaredHere[idx]);
        } else {
          // otherwise, request an update in the parent map.
          parent.statusUpdates[pair.first] = pair.second;
        }
      }
    }

    if (addedToCurrentStackVars) {
      info->currentStackVariables.pop_back();
    }
  }
  return ret;
}
