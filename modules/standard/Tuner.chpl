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

  use Time; // For getCurrentTime().
  use Math; // For isnan() and NAN.

  // Module-level global variables.
  var default = new TuningSession();

  // Chapel user tuner interface.
  proc tune(minVal, maxVal, stepVal, initVal, session = default)
  {
    var caller_file = __primitive("_get_user_file");
    var caller_line = __primitive("_get_user_line"): string;
    var caller_id = caller_file + ":" + caller_line;

    return session.getValue(caller_id, minVal, maxVal, stepVal, initVal);
  }

  proc tune(r: range(?), initVal, session = default)
  {
    assert(r.boundedType == BoundedRangeType.bounded);

    var caller_file = __primitive("_get_user_file");
    var caller_line = __primitive("_get_user_line"): string;
    var caller_id = caller_file + ":" + caller_line;

    var minVal = min(r.first, r.last);
    var maxVal = max(r.first, r.last);
    var stepVal = abs(r.stride);

    return session.getValue(caller_id, minVal, maxVal, stepVal, initVal): int;
  }

  inline proc tuningGranularity(iterations :uint, session = default) {
    session.setGranularity(iterations);
  }

  // Representation of independent tuning sessions.
  class TuningSession {
    var data :SessionData = nil;

    inline proc TuningSession() {
      data = new SessionData( id=chpl_tuner_session_init_hook() );
    }

    inline proc ~TuningSession() {
      chpl_tuner_session_fini_hook(data.id);
      delete data;
    }

    inline proc getValue(name, minVal, maxVal, stepVal, initVal) {
      return data.getValue(name, minVal, maxVal, stepVal, initVal);
    }

    inline proc setGranularity(iterations :uint) {
      data.iterLimit = iterations;
    }

    // Inner class to encapsulate session setup and state.
    class SessionData {
      var id :opaque;
      var iterLimit :uint = 1;
      var firstVar :string;
      var varDomain :domain(string);
      var val :[varDomain] real;

      var iterCount :uint = 0;
      var timestamp :real = NAN;

      proc getValue(name, minVal, maxVal, stepVal, initVal) {
        if (!varDomain.member(name)) {
          // We've never seen this tuning variable before. Add it to our list.
          addNewVar(name, minVal, maxVal, stepVal, initVal);

        } else if (firstVar == name) {
          // User is requesting the first variable again. Code is at loop head.
          handleLoopHead;
        }
        return val[name];
      }

      // The calling code is beginning a new loop iteration.
      inline proc handleLoopHead {
        if (!timerStarted) {
          // Session setup is complete. Begin timing loop iterations.
          chpl_tuner_session_start_hook(id);
          startTimer;

        } else if (iterCount >= iterLimit) {
          // Enough iterations have passed. Report elapsed time to the tuner.
          var now :real = getCurrentTime(TimeUnits.microseconds);
          chpl_tuner_session_loop_hook(id, now - timestamp);
          startTimer;
        }
        iterCount += 1;
      }

      inline proc addNewVar(name, minVal, maxVal, stepVal, initVal) {
        if (firstVar.length == 0) {
          // Record the first variable we encounter.
          firstVar = name;
        }

        if (timerStarted) {
          // We are adding a tuning variable in the middle of timing
          // the loop. Stop the session before we add a new variable.
          chpl_tuner_session_stop_hook(id);
          stopTimer;
        }

        val[name] = initVal;
        chpl_tuner_session_newvar_hook(id, name :c_string, val[name],
                                       minVal, maxVal, stepVal);
      }

      inline proc startTimer {
        iterCount = 0;
        timestamp = getCurrentTime(TimeUnits.microseconds);
      }

      inline proc stopTimer {
        iterCount = 0;
        timestamp = NAN;
      }

      inline proc timerStarted {
        return !isnan(timestamp);
      }
    }
  }

  // Chapel runtime third-party tuner interface.
  extern proc chpl_tuner_session_init_hook() :opaque;
  extern proc chpl_tuner_session_newvar_hook(session :opaque,
                                             name :c_string,
                                             ref ptr :real,
                                             minVal :real,
                                             maxVal :real,
                                             stepVal :real);
  extern proc chpl_tuner_session_start_hook(session :opaque);
  extern proc chpl_tuner_session_stop_hook(session :opaque);
  extern proc chpl_tuner_session_fini_hook(session :opaque);
  extern proc chpl_tuner_session_loop_hook(session :opaque,
                                           performance :real);
}
