/*
 * Copyright 2020-2022 Hewlett Packard Enterprise Development LP
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

/*
  Override how locations are computed during reductions.

  Note that the IF branch of this macro is the same as its GNU counterpart.
  It is the ELSE branch which is different. The original GNU definition is:

  ```
  (cur__).first_line \
      = (cur__).last_line \
      = YYRHSLOC(rhs__, 0).last_line; \
  (cur__).first_column \
      = (cur__).last_column \
      = YYRHSLOC(rhs__, 0).last_column; \
  ```

  The else branch defines what occurs for a zero application reduction (as
  far as I can tell this only occurs for null/empty rules). The previous
  behavior would set the location of the entire application to be the
  last line/column of the symbol right before the application occurred.
  This has a strange effect on line positions. Given the following Chapel
  code:

  ```
  module Foo {    // Line 1
    var x: int;   // 2
  }               // 3
  module Bar {    // 4
  // ...
  ```

  The effect is for the productions in front of 'module Bar' (which are
  both null rules for the access specifier and 'prototype' keyword) to
  have the location (3:2), which is the location of the newline right
  before the reduction for the entire module rule occurs.

  If you look at how locations are computed in the IF branch, that means
  that the '@$' for the entire 'module Bar {' ends up being (3:2-...),
  which has an effect on how line numbers appear for _everything_. It's
  basically an off-by-one error for line numbers across the entire program
  (or at least, a program using any `opt_` productions with null rules).

  This wasn't a problem/didn't manifest itself much in the old AST world
  due to how...mutable...everything was. But in the UAST land where we
  have to carry components around until we're done reducing, and then
  finally build our result UAST node, the line numbers being off becomes
  very apparent (in the form of test errors).

  What I've done to fix this is: for zero application reductions, set the
  location of the entire reduction to be the location of the currrent
  lookahead token. In essence, optimistically look 1 forward instead of
  1 back (assume that we will consume some amount of input - which have
  to, because eventually we'll do a reduction over 1+ components).

  Caveats:

    - I'm not sure if it's legal to access yylloc within this macro, but
      it seems to compile, so...
    - I am not sure if it's valid to use the lookahead token value when
      in an error handling state, though the documentation does say that
      when collapsing erroneous reductions the IF branch should be taken.
      That is to say - what happens for error states needs to be tested...
    - TODO: Might have to use 'yyclearin'.
*/

#define CHPL_YYLLOC_DEFAULT(cur__, rhs__, n__) \
do { \
  if (n__) { \
    (cur__).first_line   = YYRHSLOC(rhs__, 1).first_line; \
    (cur__).first_column = YYRHSLOC(rhs__, 1).first_column; \
    (cur__).last_line    = YYRHSLOC(rhs__, n__).last_line; \
    (cur__).last_column  = YYRHSLOC(rhs__, n__).last_column; \
  } else { \
    (cur__) = yylloc; \
  } \
} while (0)

// The macro is not mangled, so just override the YY_ symbol directly.
#define YYLLOC_DEFAULT(cur__, rhs__, n__) \
  CHPL_YYLLOC_DEFAULT(cur__, rhs__, n__)

