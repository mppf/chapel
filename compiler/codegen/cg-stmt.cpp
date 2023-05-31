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

#include "stmt.h"

#include "astutil.h"
#include "AstVisitor.h"
#include "codegen.h"
#include "driver.h"
#include "expr.h"
#include "files.h"
#include "ImportStmt.h"
#include "LayeredValueTable.h"
#include "llvmDebug.h"
#include "llvmVer.h"
#include "misc.h"
#include "passes.h"
#include "stlUtil.h"
#include "stringutil.h"

#ifdef HAVE_LLVM
#include "llvm/IR/Module.h"
#endif

#include <algorithm>
#include <cstring>
#include <vector>

void codegenStmt(Expr* stmt) {
  GenInfo* info    = gGenInfo;
  FILE*    outfile = info->cfile;

  info->lineno   = stmt->linenum();
  info->filename = stmt->fname();

  if( outfile ) {
    if (printCppLineno && stmt->linenum() > 0)
        info->cStatements.push_back(zlineToString(stmt));
    if (fGenIDS)
      info->cStatements.push_back(idCommentTemp(stmt));
  } else {
#ifdef HAVE_LLVM
    if (debug_info && stmt->linenum() > 0) {
      // Adjust the current line number, but leave the scope alone.
      llvm::MDNode* scope;

      if(stmt->inTree() && stmt->parentSymbol->astTag == E_FnSymbol) {
        scope = debug_info->get_function((FnSymbol *)stmt->parentSymbol);
      } else {
        scope = info->irBuilder->getCurrentDebugLocation().getScope();
      }

#if HAVE_LLVM_VER >= 120
      info->irBuilder->SetCurrentDebugLocation(
                  llvm::DILocation::get(scope->getContext(), stmt->linenum(),
                                        /*col=*/ 0, scope, nullptr, false));
#else
      info->irBuilder->SetCurrentDebugLocation(
                  llvm::DebugLoc::get(stmt->linenum(),0 /*col*/,scope));
#endif
    }
#endif
  }

  ++gStmtCount;
}


/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

GenRet UseStmt::codegen() {
  GenRet ret;
  INT_FATAL(this, "UseStmt::codegen not implemented");
  return ret;
}

/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

GenRet ImportStmt::codegen() {
  GenRet ret;
  INT_FATAL(this, "ImportStmt::codegen not implemented");
  return ret;
}

/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

#ifdef HAVE_LLVM

// generate llvm.lifetime.end
// (note, llvm.lifetime.start is normally generated at the same time as
//  the alloca in makeAllocaAndLifetimeStart)
void codegenLifetimeEnd(GenVariable& v) {
  // cannot do this if we don't have the pointed-to type or
  // if it's not a local variable
  INT_ASSERT(v.type != nullptr && v.localVariable != nullptr);

  llvm::Value *addr = v.localVariable;

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
}

// generate llvm.invariant.start
void codegenInvariantStart(GenVariable& v) {
  // cannot do this if we don't have the pointed-to type
  INT_ASSERT(v.type != nullptr);
  // should have a VarSymbol
  INT_ASSERT(v.var);

  llvm::Value *addr = v.localVariable;

  GenInfo *info = gGenInfo;
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
}

// generate llvm.invariant.end
void codegenInvariantEnd(GenVariable& v) {
  // cannot do this if we don't have an llvm.invariant.start instruction
  // and type as well
  INT_ASSERT(v.invariantStartInst != nullptr && v.type != nullptr);

  llvm::Value *addr = v.localVariable;

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
}

static
void codegenLifetimeEndInvariantEndForBlock(GenVariablesByBlock& vbb) {
  // Handle each variable in reverse declaration order
  for (auto vIt = vbb.vars.rbegin(); vIt != vbb.vars.rend(); ++vIt) {
    GenVariable& v = *vIt;

    if (v.invariantStartInst != nullptr) {
      codegenInvariantEnd(v);
    }
    if (v.localVariable != nullptr) {
      codegenLifetimeEnd(v);
    }
  }
}

GenVariable* findGenVariable(VarSymbol* var) {
  GenInfo *info = gGenInfo;
  // find the variable, which is hopefully one recently declared
  // Handle each block with innermost blocks first
  auto& blocks = info->currentStackVariables;
  for (auto bIt = blocks.rbegin(); bIt != blocks.rend(); ++bIt) {
    GenVariablesByBlock& vbb = *bIt;
    for (auto vIt = vbb.vars.rbegin(); vIt != vbb.vars.rend(); ++vIt) {
      GenVariable& v = *vIt;
      if (v.var == var) return &v;
    }
  }
  return nullptr;
}

void noteInvariantStartShouldBeEmitted(VarSymbol* var) {
  // find the block containing the variable and record the TODO
  // in the GenVariablesByBlock.needsInvariantStart for that block.
  GenInfo *info = gGenInfo;

  auto& blocks = info->currentStackVariables;
  for (auto bIt = blocks.rbegin(); bIt != blocks.rend(); ++bIt) {
    GenVariablesByBlock& vbb = *bIt;
    ssize_t n = vbb.vars.size();
    for (ssize_t i = n - 1; i >= 0; i--) {
      GenVariable& v = vbb.vars[i];
      if (v.var == var) {
        vbb.needsInvariantStart.push_back(i);
        return;
      }
    }
  }
}

#endif


enum struct ControlFlowType {
  NONE,
  LABEL,
  FUNCTION_EXIT,
  OTHER
};

static ControlFlowType characterizeControlFlow(Expr* expr, BlockStmt*& tgt) {
  if (GotoStmt* g = toGotoStmt(expr)) {
    LabelSymbol* tgtLabel = g->gotoTarget();
    BlockStmt* tgtBlock = toBlockStmt(tgtLabel->defPoint->parentExpr);
    INT_ASSERT(tgtBlock);
    tgt = tgtBlock;

    switch (g->gotoTag) {
      case GOTO_NORMAL:
      case GOTO_BREAK:
      case GOTO_CONTINUE:
      case GOTO_GETITER_END:
      case GOTO_ITER_RESUME:
      case GOTO_ITER_END:
      case GOTO_ERROR_HANDLING:
      case GOTO_BREAK_ERROR_HANDLING:
        return ControlFlowType::OTHER;
      case GOTO_RETURN:
      case GOTO_ERROR_HANDLING_RETURN:
        return ControlFlowType::FUNCTION_EXIT;
    }
  }

  if (DefExpr* def = toDefExpr(expr)) {
    if (isLabelSymbol(def->sym)) {
      BlockStmt* tgtBlock = toBlockStmt(def->parentExpr);
      INT_ASSERT(tgtBlock);
      tgt = tgtBlock;

      return ControlFlowType::LABEL;
    }
  }

  if (CallExpr* call = toCallExpr(expr)) {
    if (call->isPrimitive(PRIM_RETURN)) {
      tgt = call->getFunction()->body;
      return ControlFlowType::FUNCTION_EXIT;
    }
  }

  return ControlFlowType::NONE;
}


GenRet BlockStmt::codegen() {
  GenInfo* info    = gGenInfo;
  FILE*    outfile = info->cfile;
  GenRet   ret;

  codegenStmt(this);

  if (outfile) {
    if (this != getFunction()->body) {
      if (this->blockInfoGet()) {
        if (this->blockInfoGet()->isPrimitive(PRIM_BLOCK_LOCAL)) {
          info->cStatements.push_back("/* local block */\n");
        }
      }
      info->cStatements.push_back("{\n");
    }

    body.codegen("");

    if (this != getFunction()->body) {
      std::string end  = "}";
      CondStmt*   cond = toCondStmt(parentExpr);

      if (!cond || !(cond->thenStmt == this && cond->elseStmt))
        end += "\n";

      info->cStatements.push_back(end);
    }

  } else {
#ifdef HAVE_LLVM
    llvm::Function*   func          = info->irBuilder->GetInsertBlock()->getParent();
    llvm::BasicBlock* blockStmtBody = NULL;

    getFunction()->codegenUniqueNum++;

    blockStmtBody = llvm::BasicBlock::Create(info->module->getContext(), FNAME("blk_body"));

    info->irBuilder->CreateBr(blockStmtBody);

    // Now add the body.
    func->getBasicBlockList().push_back(blockStmtBody);

    info->irBuilder->SetInsertPoint(blockStmtBody);

    info->lvt->addLayer();

    bool handledInvariantEndThisBlock = false;
    bool addedToCurrentStackVars = false;
    bool inIterator = this->getFunction()->hasFlag(FLAG_AUTO_II);

    if (info->currentStackVariables.size() > 0 &&
        info->currentStackVariables.back().block == this) {
      // OK, it's the body block for an FnSymbol, so the
      // currentStackVariables entry was added in processing the FnSymbol
      // to work with any argument processing items.
    } else {
      addedToCurrentStackVars = true;
      info->currentStackVariables.push_back(GenVariablesByBlock(this));
    }

    for_alist(node, this->body) {
      // When exiting a block early (with break, return, continue, etc),
      // emit llvm.invariant.end for any variables declared in blocks
      // that are exited.
      BlockStmt* tgtBlock = nullptr;
      ControlFlowType cfType = characterizeControlFlow(node, tgtBlock);
      if (cfType != ControlFlowType::NONE) {
        if (cfType == ControlFlowType::LABEL ||
            cfType == ControlFlowType::FUNCTION_EXIT)
          handledInvariantEndThisBlock = true;

        // generate llvm.invariant.end for all variables declared
        // in blocks that will be exited on the way to the target block.
        auto& blocks = info->currentStackVariables;
        for (auto bIt = blocks.rbegin(); bIt != blocks.rend(); ++bIt) {
          GenVariablesByBlock& vbb = *bIt;
          if (cfType == ControlFlowType::OTHER && vbb.block == tgtBlock) {
            // stop before we reach the target block for e.g. break
            break;
          }
          for (auto vIt = vbb.vars.rbegin(); vIt != vbb.vars.rend(); ++vIt) {
            GenVariable& v = *vIt;
            if (v.invariantStartInst) {
              codegenInvariantEnd(v);
              if (handledInvariantEndThisBlock) {
                // clear out the invariant start ptr so we don't
                // try to emit more invariant ends later.
                v.invariantStartInst = nullptr;
              }
            }
          }
          if (cfType != ControlFlowType::LABEL && vbb.block == tgtBlock) {
            // stop after reaching the target block for e.g. label end
            break;
          }
        }
      }

      // LLVM 13 documented the semantics of llvm.lifetime.end better,
      // and pointed out that an alloca reaches the end of its lifetime
      // when the function returns. As a result, these llvm.lifetime.end
      // calls might be unnecessary.
      if (CallExpr* call = toCallExpr(node)) {
        if (call->isPrimitive(PRIM_RETURN)) {
          auto& blocks = info->currentStackVariables;
          for (auto bIt = blocks.rbegin(); bIt != blocks.rend(); ++bIt) {
            GenVariablesByBlock& vbb = *bIt;
            for (auto vIt = vbb.vars.rbegin(); vIt != vbb.vars.rend(); ++vIt) {
              GenVariable& v = *vIt;
              codegenLifetimeEnd(v);
            }
          }
        }
      }

      node->codegen();

      if (!inIterator) {
        // control flow in iterators is complex and that makes
        // getting llvm.invariant.start to dominate llvm.invariant.end
        // challenging. So just skip llvm.invariant.start for iterators.
        if (CallExpr* call = toCallExpr(node)) {
          SymExpr* lhsSe = nullptr;
          CallExpr* initOrCtor = nullptr;
          if (isInitOrReturn(call, lhsSe, initOrCtor)) {
            if (VarSymbol* var = toVarSymbol(lhsSe->symbol())) {
              if (var->isConstValWillNotChange()) {
                // Record that the block in which the variable is
                // declared should emit the invariant start once
                // it has emitted whatever contains this statement
                // (e.g. the current BlockStmt could be within a conditional
                //  when the variable is split-inited)
                // It could happen here, but for now we are using a simpler
                // model where the block containing the variable is the
                // one that must include the main llvm.invariant.start
                // and llvm.invariant.end.
                noteInvariantStartShouldBeEmitted(var);
              }
            }
          }
        }
      }

      // if the statement we just generated initialized a const variable
      // owned by this block, we can emit an invariant start.
      // Note that b.needsInvariantStart might contain redundant entries
      // in the event of a conditional with split-init.
      INT_ASSERT(info->currentStackVariables.size() > 0);
      GenVariablesByBlock& b = info->currentStackVariables.back();
      INT_ASSERT(b.block == this);
      for (auto idx : b.needsInvariantStart) {
        INT_ASSERT(0 <= idx && idx < b.vars.size());
        GenVariable& v = b.vars[idx];
        if (v.invariantStartInst == nullptr) {
          codegenInvariantStart(v);
        }
      }
      b.needsInvariantStart.clear();
    }

    INT_ASSERT(info->currentStackVariables.size() > 0 &&
               info->currentStackVariables.back().block == this);

    // If the block didn't contain an unconditional return or label,
    // add llvm.lifetime.end etc at the end of the block.
    if (!handledInvariantEndThisBlock) {
      codegenLifetimeEndInvariantEndForBlock(
          info->currentStackVariables.back());
    }

    if (addedToCurrentStackVars) {
      info->currentStackVariables.pop_back();
    }
    info->lvt->removeLayer();

    INT_ASSERT(blockStmtBody->getParent() == func);
#endif
  }

  return ret;
}

/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

GenRet
CondStmt::codegen() {
  GenInfo* info    = gGenInfo;
  FILE*    outfile = info->cfile;
  GenRet   ret;

  codegenStmt(this);

  if ( outfile ) {
    //here it's very possible that we end up with ( ) around condExpr. Extra
    //parentheses generated warnings from the backend compiler in some cases.
    //It didn't feel very safe to strip them at expr level as it might mess up
    //precedence thus, following conditional -- Engin

    std::string c_condExpr = codegenValue(condExpr).c;

    int numExtraPar = 0;
    //if (c_condExpr[0] == '(' && c_condExpr[c_condExpr.size()-1] == ')') {
    if (c_condExpr[numExtraPar] == '(' &&
        c_condExpr[c_condExpr.size()-(numExtraPar+1)] == ')') {
      numExtraPar++;
    }
    c_condExpr = c_condExpr.substr(numExtraPar,
        c_condExpr.length()-2*numExtraPar);
    info->cStatements.push_back("if (" + c_condExpr  + ") ");

    thenStmt->codegen();

    if (elseStmt) {
      info->cStatements.push_back(" else ");

      // If the first statement is the only statement and itself a
      // conditional, just dive in and codegen it to avoid a potential
      // cascade of curly brackets, striving instead for:
      //
      // ...
      // } else if (...) {
      // } else if (...) {
      // ...
      //
      Expr* firstStmt = elseStmt->body.head;
      if (elseStmt->length() == 1 && isCondStmt(firstStmt)) {
        firstStmt->codegen();
      } else {
        elseStmt->codegen();
      }
    }

  } else {
#ifdef HAVE_LLVM
    llvm::Function* func = info->irBuilder->GetInsertBlock()->getParent();

    getFunction()->codegenUniqueNum++;

    llvm::BasicBlock *condStmtIf = llvm::BasicBlock::Create(
        info->module->getContext(),
        FNAME("cond_if"));

    llvm::BasicBlock *condStmtThen = llvm::BasicBlock::Create(
        info->module->getContext(),
        FNAME("cond_then"));

    llvm::BasicBlock *condStmtElse = NULL;

    llvm::BasicBlock *condStmtEnd = llvm::BasicBlock::Create(
        info->module->getContext(),
        FNAME("cond_end"));

    if (elseStmt) {
      condStmtElse = llvm::BasicBlock::Create(info->module->getContext(),
                                              FNAME("cond_else"));
    }

    info->lvt->addLayer();

    info->irBuilder->CreateBr(condStmtIf);

    func->getBasicBlockList().push_back(condStmtIf);
    info->irBuilder->SetInsertPoint(condStmtIf);

    GenRet condValueRet = codegenValue(condExpr);

    llvm::Value *condValue = condValueRet.val;

    if( condValue->getType() !=
        llvm::Type::getInt1Ty(info->module->getContext()) ) {
      condValue = info->irBuilder->CreateICmpNE(
          condValue,
          llvm::ConstantInt::get(condValue->getType(), 0),
          FNAME("condition"));
    }

    info->irBuilder->CreateCondBr(
        condValue,
        condStmtThen,
        (elseStmt) ? condStmtElse : condStmtEnd);

    func->getBasicBlockList().push_back(condStmtThen);
    info->irBuilder->SetInsertPoint(condStmtThen);

    // Note the current position in initializedInvariantVariables
    //auto nInvariantsBeforeThen = info->initializedInvariantVariables.size();

    info->lvt->addLayer();
    thenStmt->codegen();

    info->lvt->removeLayer();

    // Mark anything declared as invariant within the 'then' block
    // as no longer invariant.
    /*for (size_t i = nInvariantsBeforeThen;
         i < info->initializedInvariantVariables.size();
         i++) {
      VarSymbol* invVar = info->initializedInvariantVariables[i];
      if (GenVariable* g = findGenVariable(invVar)) {
        if (g->invariantStartInst && !g->emittedInvariantEnd) {
          codegenInvariantEnd(*g);
          // for any split-inited outer variables, we will add a new
          // invariant end after the conditional, and additionally
          // we want to ignore the fact this one has been emitted
          // when we handle the 'else' block.
          g->emittedInvariantEnd = false;
          g->invariantStartInst = nullptr;
        }
      }
    }*/

    // branch to the end of the cond statement
    info->irBuilder->CreateBr(condStmtEnd);

    if (elseStmt != nullptr) {
      // handle the else part

      //auto nInvariantsBeforeElse = info->initializedInvariantVariables.size();

      func->getBasicBlockList().push_back(condStmtElse);
      info->irBuilder->SetInsertPoint(condStmtElse);

      info->lvt->addLayer();
      elseStmt->codegen();
      info->lvt->removeLayer();

      // Mark anything declared as invariant within the 'else' block
      // as no longer invariant.
      /*for (size_t i = nInvariantsBeforeElse;
           i < info->initializedInvariantVariables.size();
           i++) {
        VarSymbol* invVar = info->initializedInvariantVariables[i];
        if (GenVariable* g = findGenVariable(invVar)) {
          if (g->invariantStartInst && !g->emittedInvariantEnd) {
            codegenInvariantEnd(*g);
            // forget what we just did so as not to confuse emitting
            // invariant start after the then/else parts.
            g->emittedInvariantEnd = false;
            g->invariantStartInst = nullptr;
          }
        }
      }*/
      // branch to the end of the cond statement
      info->irBuilder->CreateBr(condStmtEnd);
    }

    func->getBasicBlockList().push_back(condStmtEnd);
    info->irBuilder->SetInsertPoint(condStmtEnd);

    // Mark any outer variables initialized by the 'then' or 'else'
    // blocks as invariant if we did that within the 'then' or 'else' block.
    // This only works if the split-init assumptions are checked elsewhere.
    // (Outer variables initialized within a 'then' or an 'else' block
    //  would be split-inited & control flow shouldn't able to proceed
    //  through the function if they are not inited).
    /*for (size_t i = nInvariantsBeforeThen;
         i < info->initializedInvariantVariables.size();
         i++) {
      VarSymbol* invVar = info->initializedInvariantVariables[i];
      if (GenVariable* g = findGenVariable(invVar)) {
        if (g->invariantStartInst == nullptr) {
          codegenInvariantStart(*g);
        }
      }
    }*/

    info->lvt->removeLayer();
#endif
  }
  return ret;
}

/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

GenRet GotoStmt::codegen() {
  GenInfo* info = gGenInfo;
  FILE* outfile = info->cfile;
  GenRet ret;

  codegenStmt(this);
  if( outfile ) {
    info->cStatements.push_back("goto " + label->codegen().c + ";\n");
  } else {
#ifdef HAVE_LLVM
    llvm::Function *func = info->irBuilder->GetInsertBlock()->getParent();

    const char *cname;
    if(isDefExpr(label)) {
      cname = toDefExpr(label)->sym->cname;
    }
    else {
      cname = toSymExpr(label)->symbol()->cname;
    }

    llvm::BasicBlock *blockLabel;
    if(!(blockLabel = info->lvt->getBlock(cname))) {
      blockLabel = llvm::BasicBlock::Create(info->module->getContext(), cname);
      info->lvt->addBlock(cname, blockLabel);
    }

    info->irBuilder->CreateBr(blockLabel);

    getFunction()->codegenUniqueNum++;

    llvm::BasicBlock *afterGoto = llvm::BasicBlock::Create(
        info->module->getContext(), FNAME("afterGoto"));
    func->getBasicBlockList().push_back(afterGoto);
    info->irBuilder->SetInsertPoint(afterGoto);

#endif
  }
  return ret;
}

/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

GenRet ForwardingStmt::codegen() {
  GenRet ret;
  // Should be lowered in resolution
  INT_FATAL(this, "ForwardingStmt codegen called");
  return ret;
}

/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

GenRet ImplementsStmt::codegen() {
  INT_FATAL(this, "ImplementsStmt should have been lowered in resolution");
  GenRet dummy;
  return dummy;
}

/******************************** | *********************************
*                                                                   *
*                                                                   *
********************************* | ********************************/

GenRet ExternBlockStmt::codegen() {
  GenRet ret;
  // Needs to be handled specially by creating a C
  //  file per module..
  INT_FATAL(this, "ExternBlockStmt codegen called");
  return ret;
}
