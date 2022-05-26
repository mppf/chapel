/*
 * Copyright 2021-2022 Hewlett Packard Enterprise Development LP
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

#ifndef CHPL_UAST_ASTLIST_H
#define CHPL_UAST_ASTLIST_H

#include "chpl/uast/ASTTypes.h"
#include "chpl/uast/AstTag.h"
#include "chpl/util/memory.h"

#include <cassert>
#include <iterator>
#include <vector>

namespace chpl {
class Context;

namespace uast {


/**
  AstList is just a list that owns some AST nodes.
 */
using AstList = std::vector<owned<AstNode>>;

/**
  Create an AstList containing a single ast element, transferring
  ownership of that element to the list.
 */
static inline AstList makeAstList(owned<AstNode> ast) {
  AstList lst;
  lst.push_back(std::move(ast));
  return lst;
}

/**
 Update an AST list with some replacement AST.

 It's kind of like swapping 'keep' and 'addin' but it tries
 to keep old AST nodes when they are the same. This allows
 for more reuse of results in the query framework.

 'keep' is some old AST
 'addin' is some new AST we wish to replace it with

 on exit, 'keep' stores the AST we need to 'keep', and anything
 not kept is stored in 'addin'. On exit, the order of nodes stored
 in 'addin' does not matter.

 The function returns 'true' if anything changed in 'keep'.
 */
bool updateAstList(AstList& keep, AstList& addin);

/**
 Mark UniqueStrings in an AST list.
 */
void markAstList(Context* context, const AstList& keep);

/**
 Defines an iterator over the AST list elements.
 The iterator hides the ownership (it always returns a pointer e.g. AstNode*)
 and casts elements to a particular type and asserts a particular
 range of tags.
 */
template<typename CastToType>
class AstListIterator {
 public:
  using iterator_category = std::random_access_iterator_tag;
  using value_type = const CastToType*;
  using difference_type = AstList::const_iterator::difference_type;
  using pointer = const CastToType**;
  using reference = const CastToType*&;

 private:
  AstList::const_iterator it;
  AstTag startTag = asttags::AST_TAG_UNKNOWN;
  AstTag endTag = asttags::AST_TAG_UNKNOWN;

  bool validTag(AstTag tag) const {
    // use <= to allow leaf nodes to be passed as start and end
    // check for NUM_AST_TAGS to easily allow AstNode
    return endTag == asttags::NUM_AST_TAGS ||
           (startTag <= tag && tag <= endTag);
  }

 public:
  // needs to be default-constructible, copy-constructible,
  // copy-assignable and destructible
  AstListIterator() = default;

  // TODO: add a constructor, if Decl == AstNode, that doesn't take
  // startTag / endTag

  explicit AstListIterator(AstList::const_iterator it,
                           AstTag startTag, AstTag endTag)
    : it(it), startTag(startTag), endTag(endTag) { }

  ~AstListIterator() = default;

  AstListIterator<CastToType>& operator=(const AstListIterator<CastToType>& it) = default;

  // needs to be support == and !=
  bool operator==(const AstListIterator<CastToType> rhs) const {
    return this->it == rhs.it;
  }
  bool operator!=(const AstListIterator<CastToType> rhs) const {
    return this->it != rhs.it;
  }

  // needs to support * and ->
  const CastToType* operator*() const {
    const AstNode* ast = this->it->get();
    assert(validTag(asttags::tagForNode(ast)));
    return (const CastToType*) ast;
  }
  const CastToType* operator->() const {
    const AstNode* ast = this->it->get();
    assert(validTag(asttags::tagForNode(ast)));
    return (const CastToType*) ast;
  }

  // needs to support preincrement and postincrement
  AstListIterator<CastToType>& operator++() {
    ++this->it;
    return *this;
  }
  AstListIterator<CastToType> operator++(int) {
    AstListIterator<CastToType> tmp = *this;
    ++this->it;
    return tmp;
  }

  // needs to support predecrement and postdecrement
  AstListIterator<CastToType>& operator--() {
    --this->it;
    return *this;
  }
  AstListIterator<CastToType> operator--(int) {
    AstListIterator<CastToType> tmp = *this;
    --this->it;
    return tmp;
  }

  // needs to support + and -
  AstListIterator<CastToType> operator+(const difference_type rhs) const {
    return AstListIterator<CastToType>(this->it + rhs);
  }
  AstListIterator<CastToType> operator-(const difference_type rhs) const {
    return AstListIterator<CastToType>(this->it - rhs);
  }
  difference_type operator-(const AstListIterator<CastToType> rhs) const {
    return AstListIterator<CastToType>(this->it - rhs.it);
  }

  // needs to support < > <= >=
  bool operator<(const AstListIterator<CastToType> rhs) const {
    return this->it < rhs.it;
  }
  bool operator>(const AstListIterator<CastToType> rhs) const {
    return this->it > rhs.it;
  }
  bool operator<=(const AstListIterator<CastToType> rhs) const {
    return this->it <= rhs.it;
  }
  bool operator>=(const AstListIterator<CastToType> rhs) const {
    return this->it >= rhs.it;
  }

  // needs to support += and -=
  const AstListIterator<CastToType>& operator+=(const difference_type& rhs) {
    this->it += rhs;
    return *this;
  }
  const AstListIterator<CastToType>& operator-=(const difference_type& rhs) {
    this->it -= rhs;
    return *this;
  }

  // support the [] operator
  const CastToType* operator[](const int rhs) {
    const AstNode* ast = this->it[rhs]; 
    assert(validTag(asttags::tagForNode(ast)));
    return (const CastToType*) ast;
  }

  // must be swappable but that should work with the default impl
};

/**
 Defines an iterator over the AST list elements.
 The iterator hides the ownership (it always returns a pointer e.g. AstNode*)
 and casts elements to a particular type and asserts a particular
 range of tags.
 */
template<typename CastToType>
struct AstListIteratorPair {
  AstListIterator<CastToType> begin_;
  AstListIterator<CastToType> end_;

  AstListIteratorPair(AstList::const_iterator begin,
                      AstList::const_iterator end,
                      AstTag startTag, AstTag endTag)
    : begin_(begin, startTag, endTag), end_(end, startTag, endTag) {
  }
  ~AstListIteratorPair() = default;

  AstListIterator<CastToType> begin() const {
    return begin_;
  }
  AstListIterator<CastToType> end() const {
    return end_;
  }
};


} // end namespace uast
} // end namespace chpl

#endif
