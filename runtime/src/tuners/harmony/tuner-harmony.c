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

void chpl_tuner_fini(void* session) {
  ah_leave(session);
  ah_fini(session);
}

void chpl_tuner_addVar(void* session, c_string name, _real64* val_ptr,
                       _real64 min, _real64 max, _real64 step) {
  ah_real(session, name, min, max, step);
  ah_bind_real(session, name, val_ptr);
}

void chpl_tuner_start(void* session) {
  ah_launch(session, NULL, 0, NULL);
  ah_fetch(session);
}

void chpl_tuner_stop(void* session) {
  ah_leave(session);
}

void chpl_tuner_loop(void* session, _real64 performance) {
  ah_report(session, &performance);
  ah_fetch(session);
}
