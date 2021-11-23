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

#include "chpl/types/all-types.h"
#include "chpl/parsing/parsing-queries.h"
#include "chpl/resolution/resolution-queries.h"
#include "chpl/uast/Module.h"

// always check assertions in this test
#ifdef NDEBUG
#undef NDEBUG
#endif

#include <cassert>

using namespace chpl;
using namespace parsing;
using namespace resolution;
using namespace uast;

static const Module* oneModule(const ModuleVec& vec) {
  assert(vec.size() == 1);
  return vec[0];
}

// TODO maybe we want to support something like this
std::vector<ErrorMessage> errors;
static void collectErrors(const ErrorMessage& err) { errors.push_back(err); }

static void test1() {
  Context ctx;
  Context* context = &ctx;

  ctx.setErrorHandler(collectErrors);

  auto path = UniqueString::build(context, "input.chpl");

  {
    errors.clear();
    context->advanceToNextRevision(true);
    std::string contents = "var x:int = 3.14;";
    setFileText(context, path, contents);
    const ModuleVec& vec = parse(context, path);
    for (const Module* mod : vec) {
      ASTNode::dump(mod);
    }
    const Module* m = oneModule(vec);
    resolveModule(context, m->id());

    assert(errors.size() == 1);
    assert(errors[0].location().firstLine() == 1);
  }

  {
    errors.clear();
    context->advanceToNextRevision(true);
    std::string contents = "\n\nvar x:int = 3.14;";
    setFileText(context, path, contents);
    const ModuleVec& vec = parse(context, path);
    for (const Module* mod : vec) {
      ASTNode::dump(mod);
    }
    const Module* m = oneModule(vec);
    resolveModule(context, m->id());

    assert(errors.size() == 1);
    assert(errors[0].location().firstLine() == 3);
  }
}

int main() {
  test1();

  return 0;
}
