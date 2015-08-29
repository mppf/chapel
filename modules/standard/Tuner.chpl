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

  // Module-level config variables.
  config var tuningEnabled :bool = true;

  // Module-level global variables.
  var default = new TuningSession();

  // Chapel user tuner interface.
  proc tune(minVal: real, maxVal: real, stepVal: real, initVal: real,
            session = default)
  {
    var callerFile = __primitive("_get_user_file");
    var callerLine = __primitive("_get_user_line"): string;
    var callerID = callerFile + ":" + callerLine;

    return session.getValue(callerID, minVal, maxVal, stepVal, initVal);
  }

  proc tune(r: range(?), initVal: real, session = default): int
  {
    assert(r.boundedType == BoundedRangeType.bounded);

    var callerFile = __primitive("_get_user_file");
    var callerLine = __primitive("_get_user_line"): string;
    var callerID = callerFile + ":" + callerLine;

    var minVal: real = min(r.first, r.last);
    var maxVal: real = max(r.first, r.last);
    var stepVal: real = abs(r.stride);

    return session.getValue(callerID, minVal, maxVal, stepVal, initVal): int;
  }

  inline proc tuningGranularity(iterations: uint, session = default) {
    session.setGranularity(iterations);
  }

  // Representation of independent tuning sessions.
  class TuningSession {
    var data: SessionData = nil;

    inline proc TuningSession() {
      data = new SessionData(sessionID=chpl_tuner_init());
    }

    inline proc ~TuningSession() {
      chpl_tuner_fini(data.sessionID);
      delete data;
    }

    inline proc getValue(name: string, minVal: real, maxVal: real,
                         stepVal: real, initVal: real) {
      return data.getValue(name, minVal, maxVal, stepVal, initVal);
    }

    inline proc setGranularity(iterations: uint) {
      data.iterLimit = iterations;
    }

    // Inner class to encapsulate session setup and state.
    class SessionData {

      record Bounds {
        var name: string;
        var minVal, maxVal, stepVal: real;
      }

      var sessionID: opaque;
      var varsByIndex: domain(int);
      var varDef: [varsByIndex] Bounds;
      var varsByName: domain(string);
      var bestVal: [varsByName] real;
      var iterLimit: uint = 1;

      var iterCount: uint = 0;
      var timestamp: real = NAN;
      var converged: bool = false;

      proc getValue(name, minVal, maxVal, stepVal, initVal) {
        if (!varsByName.member(name)) {
          // We've never seen this tuning variable before. Add it to our list.
          addNewVar(name, minVal, maxVal, stepVal, initVal);

        } else if (!tuningEnabled || converged) {
          // Do not invoke the tuner in these cases.
          return bestVal[name];

        } else if (varDef[1].name == name) {
          // Requesting the first variable again indicates a loop head.
          handleLoopHead;
        }

        return if (timerStarted)
          then chpl_tuner_getVal(sessionID, name: c_string)
          else bestVal[name];
      }

      // The calling code is beginning a new loop iteration.
      proc handleLoopHead {
        if (!timerStarted) {
          // Session setup is complete. Begin a new tuning session.
          for i in 1..varsByIndex.size {
            chpl_tuner_addVar(sessionID,
                              varDef[i].name: c_string,
                              varDef[i].minVal,
                              varDef[i].maxVal,
                              varDef[i].stepVal);
          }
          chpl_tuner_start(sessionID);
          startTimer;

        } else if (iterCount >= iterLimit) {
          // Tuning granularity reached.  This was actually the loop tail.
          handleLoopTail;
        }
        iterCount += 1;
      }

      // Enough iterations have passed.  Report elapsed time to the tuner.
      proc handleLoopTail {
        var now: real = getCurrentTime(TimeUnits.microseconds);

        if (chpl_tuner_loop(sessionID, now - timestamp)) {
          // Tuning session has new parameters for testing.
          startTimer;

        } else {
          // Tuning session converged.  Store the best values and stop tuning.
          converged = true;
          for name in varsByName {
            bestVal[name] = chpl_tuner_getVal(sessionID, name: c_string);
          }
          chpl_tuner_stop(sessionID);
          stopTimer;
        }
      }

      proc addNewVar(name, minVal, maxVal, stepVal, initVal) {
        if (timerStarted) {
          // We are adding a tuning variable in the middle of timing
          // the loop. Stop the session before we add a new variable.
          chpl_tuner_stop(sessionID);
          stopTimer;
        }
        converged = false;

        var idx = varsByIndex.size + 1;
        varDef[idx].name = name;
        varDef[idx].minVal = minVal;
        varDef[idx].maxVal = maxVal;
        varDef[idx].stepVal = stepVal;
        bestVal[name] = initVal;
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
  extern proc chpl_tuner_init(): opaque;
  extern proc chpl_tuner_fini(sessionID: opaque);
  extern proc chpl_tuner_addVar(sessionID: opaque, name: c_string,
                                minVal: real, maxVal: real, stepVal: real);
  extern proc chpl_tuner_getVal(sessionID: opaque, name: c_string): real;
  extern proc chpl_tuner_start(sessionID: opaque);
  extern proc chpl_tuner_stop(sessionID: opaque);
  extern proc chpl_tuner_loop(sessionID: opaque, performance: real): bool;
}
