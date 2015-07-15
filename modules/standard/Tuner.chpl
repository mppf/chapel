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

module Tuner {

  // Chapel runtime low-level tuner interface.
  pragma "insert line file info"
  extern proc chpl_tuner_session_init(): opaque;

  pragma "insert line file info"
  extern proc chpl_tuner_session_fini(id: opaque);

  extern proc chpl_tuner_session_loop_span(id:   opaque,
                                           span: uint(32));

  pragma "insert line file info"
  extern proc chpl_tuner_get(id:   opaque,
                             min:  real,
                             max:  real,
                             step: real,
                             init: real): real;

  // Class to encapsulate
  class Session {
    var id: opaque;

    proc Session() {
      id = chpl_tuner_session_init();
    }

    proc ~Session() {
      chpl_tuner_session_fini(id);
    }

    proc loop_span(span) {
      chpl_tuner_session_loop_span(id, span: uint(32));
    }
  }

  // Module-level global variables.
  var default_session = new Session();

  // Chapel user tuner interface.
  inline proc tune(min, max, step, init, session = default_session)
  {
    return chpl_tuner_get(session.id,
                          min:  real,
                          max:  real,
                          step: real,
                          init: real);
  }

  inline proc tune(r: range(?), init, session = default_session)
  {
    assert(r.boundedType == BoundedRangeType.bounded);
    var min, max, step: real;

    if (r.stride > 0) {
      min  = r.first:  real;
      max  = r.last:   real;
      step = r.stride: real;
    } else {
      min  =  r.last:   real;
      max  =  r.first:  real;
      step = -r.stride: real;
    }

    return chpl_tuner_get(session.id, min, max, step, init: real): int;
  }
}
