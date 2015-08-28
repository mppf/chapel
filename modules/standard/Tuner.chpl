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
      data = new SessionData(id=chpl_tuner_init());
    }

    inline proc ~TuningSession() {
      chpl_tuner_fini(data.id);
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
      var defaultVal :[varDomain] real;

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

        return if timerStarted
          then chpl_tuner_getVal(id, name :c_string)
          else defaultVal[name];
      }

      // The calling code is beginning a new loop iteration.
      inline proc handleLoopHead {
        if (!timerStarted) {
          // Session setup is complete. Begin timing loop iterations.
          chpl_tuner_start(id);
          startTimer;

        } else if (iterCount >= iterLimit) {
          // Enough iterations have passed. Report elapsed time to the tuner.
          var now :real = getCurrentTime(TimeUnits.microseconds);
          chpl_tuner_loop(id, now - timestamp);
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
          chpl_tuner_stop(id);
          stopTimer;
        }

        defaultVal[name] = initVal;
        chpl_tuner_addVar(id, name :c_string, minVal, maxVal, stepVal);
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
  extern proc chpl_tuner_init() :opaque;
  extern proc chpl_tuner_fini(session :opaque);
  extern proc chpl_tuner_addVar(session :opaque, name :c_string,
                                minVal :real, maxVal :real, stepVal :real);
  extern proc chpl_tuner_getVal(session :opaque, name :c_string) :real;
  extern proc chpl_tuner_start(session :opaque);
  extern proc chpl_tuner_stop(session :opaque);
  extern proc chpl_tuner_loop(session :opaque, performance :real);
}
