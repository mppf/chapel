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
#include "hclient.h"

void* chpl_tuner_init(void) {
  hdesc_t* hd = ah_init();

  if (ah_get_cfg(hd, "HARMONY_HOME") == NULL)
    ah_set_cfg(hd, "HARMONY_HOME", HARMONY_PATH_STRING);

  return hd;
}

void chpl_tuner_fini(void* sessionID) {
  ah_leave(sessionID);
  ah_fini(sessionID);
}

void chpl_tuner_addVar(void* sessionID, c_string name,
                       _real64 min, _real64 max, _real64 step) {
  ah_real(sessionID, name, min, max, step);
}

_real64 chpl_tuner_getVal(void* sessionID, c_string name) {
  return ah_get_real(sessionID, name);
}

void chpl_tuner_start(void* sessionID) {
  ah_launch(sessionID, NULL, 0, NULL);
  while (ah_fetch(sessionID) != 1);
}

void chpl_tuner_stop(void* sessionID) {
  ah_leave(sessionID);
}

chpl_bool chpl_tuner_loop(void* sessionID, _real64 performance) {
  ah_report(sessionID, &performance);
  ah_fetch(sessionID);

  if (ah_converged(sessionID) == 1) {
    ah_best(sessionID);
    return false;
  }
  return true;
}
