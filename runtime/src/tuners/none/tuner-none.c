/*
 * Copyright 2004-2015 Cray Inc.
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

#include "chplrt.h"
#include "chpltypes.h"
#include "error.h"

void* chpl_tuner_init(void) {
  chpl_warning("Tuning support disabled:"
               " Program built with CHPL_TUNER=none", 0, NULL);
  return NULL;
}

void chpl_tuner_fini(void* sessionID) {
}

void chpl_tuner_addVar(void* sessionID, c_string name,
                       _real64 min, _real64 max, _real64 step) {
}

_real64 chpl_tuner_getVal(void* sessionID, c_string name) {
  return 0.0;
}

void chpl_tuner_start(void* sessionID) {
}

void chpl_tuner_stop(void* sessionID) {
}

chpl_bool chpl_tuner_loop(void* sessionID, _real64 performance) {
  return false;
}
