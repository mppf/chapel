/*
 * Copyright 2020-2021 Hewlett Packard Enterprise Development LP
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

#ifndef _AST_LOGGER_H_
#define _AST_LOGGER_H_

#include <cstdio>
#include <map>
#include <vector>

#include "AstVisitor.h"

class AstLogger : public AstVisitor {
public:
                 AstLogger();
  virtual       ~AstLogger();

  //
  // The sub-classes of Type
  //
  virtual bool   enterAggrType       (AggregateType*     node) override;
  virtual void   exitAggrType        (AggregateType*     node) override;

  virtual bool   enterDecoratedClassType(DecoratedClassType*  node) override;
  virtual void   exitDecoratedClassType (DecoratedClassType*  node) override;

  virtual bool   enterEnumType       (EnumType*          node) override;
  virtual void   exitEnumType        (EnumType*          node) override;

  virtual void   visitPrimType       (PrimitiveType*     node) override;

  //
  // The sub-classes of Symbol
  //
  virtual bool   enterArgSym         (ArgSymbol*         node) override;
  virtual void   exitArgSym          (ArgSymbol*         node) override;

  virtual void   visitEnumSym        (EnumSymbol*        node) override;

  virtual bool   enterFnSym          (FnSymbol*          node) override;
  virtual void   exitFnSym           (FnSymbol*          node) override;

  virtual void   visitLabelSym       (LabelSymbol*       node) override;

  virtual bool   enterModSym         (ModuleSymbol*      node) override;
  virtual void   exitModSym          (ModuleSymbol*      node) override;

  virtual bool   enterTypeSym        (TypeSymbol*        node) override;
  virtual void   exitTypeSym         (TypeSymbol*        node) override;

  virtual void   visitVarSym         (VarSymbol*         node) override;

  //
  // The sub-classes of Expr
  //
  virtual bool   enterCallExpr       (CallExpr*          node) override;
  virtual void   exitCallExpr        (CallExpr*          node) override;

  virtual bool   enterContextCallExpr(ContextCallExpr*   node) override;
  virtual void   exitContextCallExpr (ContextCallExpr*   node) override;

  virtual bool   enterDefExpr        (DefExpr*           node) override;
  virtual void   exitDefExpr         (DefExpr*           node) override;

  virtual bool   enterNamedExpr      (NamedExpr*         node) override;
  virtual void   exitNamedExpr       (NamedExpr*         node) override;

  virtual bool   enterIfExpr         (IfExpr*            node) override;
  virtual void   exitIfExpr          (IfExpr*            node) override;

  virtual void   visitSymExpr        (SymExpr*           node) override;

  virtual void   visitUsymExpr       (UnresolvedSymExpr* node) override;

  //
  // The sub-classes of Stmt
  //
  virtual void   visitUseStmt        (UseStmt*           node) override;

  virtual void   visitImportStmt     (ImportStmt*        node) override;

  virtual bool   enterBlockStmt      (BlockStmt*         node) override;
  virtual void   exitBlockStmt       (BlockStmt*         node) override;

  virtual bool   enterForallStmt     (ForallStmt*        node) override;
  virtual void   exitForallStmt      (ForallStmt*        node) override;

  virtual bool   enterWhileDoStmt    (WhileDoStmt*       node) override;
  virtual void   exitWhileDoStmt     (WhileDoStmt*       node) override;

  virtual bool   enterDoWhileStmt    (DoWhileStmt*       node) override;
  virtual void   exitDoWhileStmt     (DoWhileStmt*       node) override;

  virtual bool   enterCForLoop       (CForLoop*          node) override;
  virtual void   exitCForLoop        (CForLoop*          node) override;

  virtual bool   enterForLoop        (ForLoop*           node) override;
  virtual void   exitForLoop         (ForLoop*           node) override;

  virtual bool   enterParamForLoop   (ParamForLoop*      node) override;
  virtual void   exitParamForLoop    (ParamForLoop*      node) override;

  virtual bool   enterCondStmt       (CondStmt*          node) override;
  virtual void   exitCondStmt        (CondStmt*          node) override;

  virtual void   visitEblockStmt     (ExternBlockStmt*   node) override;

  virtual bool   enterGotoStmt       (GotoStmt*          node) override;
  virtual void   exitGotoStmt        (GotoStmt*          node) override;

  virtual bool   enterForwardingStmt (ForwardingStmt*    node) override;
  virtual void   exitForwardingStmt  (ForwardingStmt*    node) override;

  virtual bool   enterDeferStmt      (DeferStmt*         node) override;
  virtual void   exitDeferStmt       (DeferStmt*         node) override;

  virtual bool   enterTryStmt        (TryStmt*           node) override;
  virtual void   exitTryStmt         (TryStmt*           node) override;

  virtual bool   enterCatchStmt      (CatchStmt*         node) override;
  virtual void   exitCatchStmt       (CatchStmt*         node) override;

protected:
  bool outputVector (FILE* fp, std::vector<const char*> vec);

  void outputRenames(FILE*                              fp,
                     std::map<const char*, const char*> renames,
                     bool                               first);
};

#endif
