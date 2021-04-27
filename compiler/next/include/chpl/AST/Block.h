/*
 * Copyright 2021 Hewlett Packard Enterprise Development LP
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

#ifndef CHPL_AST_BLOCK_H
#define CHPL_AST_BLOCK_H

#include "chpl/AST/Exp.h"
#include "chpl/AST/Location.h"

namespace chpl {
namespace ast {

/**
  This class represents a { } block.
 */
class Block final : public Exp {
 private:
  Block(ASTList stmts);
  bool contentsMatchInner(const ASTBase* other) const override;

 public:
  /**
   Create and return a Block containing the passed stmts.
   */
  static owned<Block> build(Builder* builder, Location loc, ASTList stmts);

  /**
   Return the number of statements in the block.
   */
  int numStmts() const {
    return this->numChildren();
  }
  /**
   Return the i'th statement in the block.
   */
  const Exp* stmt(int i) const {
    const ASTBase* ast = this->child(i);
    assert(ast->isExp());
    return (const Exp*)ast;
  }
};

} // end namespace ast
} // end namespace chpl

#endif
