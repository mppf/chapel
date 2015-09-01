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

/*
   .. note::

      Tuning support is disabled by default.  Unless it is enabled,
      both compile-time and run-time warnings will be issued when a
      program uses this module.  See :ref:`enable-support` for
      instructions on how to enable tuning support.

   Runtime Auto-Tuning Support

   This module provides support for automated tuning of parameter
   values through empirical testing at runtime.  Programs which can
   benefit from this module will have the following components:

   1) Mutable parameters that can affect the performance (but not the
      functional correctness) of the program, referred to as the
      **tuning variables**.

        Functional correctness refers to algorithmic input and output,
        meaning that altering the tuning variables for a given input
        should not affect the program's output.  Examples of tuning
        variables include thread count, buffer sizes, and loop
        tiling/unrolling factors.

        Auto-tuning works best if the underlying performance function
        is continuous, and a valid value range is known for each
        tuning variable.

   2) A major loop that is responsible for a large percentage of the
      total program execution time, referred to as the **work loop**.

        This loop should iterate multiple times during throughout a
        program's execution.

   The space between work loop iterations (or sets of iterations)
   becomes a natural location for performance measurement and tuning
   variable modification.

   Scientific programs written for High Performance Computing (HPC)
   systems (e.g., LULESH or miniMD) tend to have both of these
   properties.

   .. note::

      This module is currently designed for intra-node performance
      optimization.  Future work includes extensions for tuning
      inter-node communication patterns.


   Usage Overview
   ==============

   A tuning loop is inferred from user code through requests for
   tuning values.  Consider the following code snippet:

   .. code-block:: chapel

      use Tuner;
      // The following loop contains two tuning variables:
      // xLength and yLength (determined by file name and line number).

      while (!done) {
        // Because xLength is the first tuning value requested,
        // it becomes the inferred tuning loop head/tail.
        var xLength = tune(16..128 by 8, initVal= 64);
        var yLength = tune(32..256 by 8, initVal=128);

        // Make a 2D stencil domain based on tuned values,
        //   and use it to multiply A and B matrices.
        var tile = {0..xLength, 0..yLength};
        C = tiledMatrixMultiply(A, B, tile);
      }

   This example outlines how the Tuner module might be used to
   optimize the work loop of a program that performs a series of dense
   matrix multiplication.  Hardware architecture properties such as
   cache levels, size, and associativity differ from system to system,
   leading to machine-specific optimal tiling values.

   Such architecture-specific considerations may be ignored using this
   tuning module, in combination with a tiled matrix multiplication
   routine.  Optimal values may be discovered automatically at
   run-time.

   Wall-time is the measured performance metric.  Alternate metrics
   (e.g., cache misses, power draw, etc.) may be added in the future.

   .. _enable-support:

   Enabling Runtime Tuning Support
   ===============================

   An underlying auto-tuner must be selected to enable tuning within
   Chapel.  To get the list of supported:

   .. code-block:: sh

      $CHPL_HOME/util/chplenv/chpl_tuner.py --list

   Then, build Chapel with CHPL_TUNER set to a value from the list of
   valid tuners (other than "none"):

   .. code-block:: sh

      export CHPL_TUNER=harmony
      gmake -C $CHPL_HOME

*/
module Tuner {

  if (ChapelBase.CHPL_TUNER == "none") {
    compilerWarning("Tuning support disabled: CHPL_TUNER=none");
  }

  use Time; // For getCurrentTime().
  use Math; // For isnan() and NAN.

  /*
     This flag controls tuning support across the entire program.
     Its value may be set from the command line or mid-program execution.
  */
  config var tuningEnabled :bool = true;

  // Module-level global variables.
  pragma "no doc"
  var default = new TuningSession();

  /*
     Allow the tuner to choose a floating-point value between `minVal`
     and `maxVal` (by steps of `stepVal`).

     :arg minVal:  The minimum value to return. Must be less than `maxVal`.
     :type minVal: real

     :arg maxVal:  The maximum value to return. Must be greater than `minVal`.
     :type maxVal: real

     :arg stepVal:  The strides to take between `minVal` and `maxVal`.
                    Must be greater than 0.
     :type stepVal: real

     :arg initVal:  The initial value to use before the tuner is ready
                    to produce values.
     :type initVal: real

     :arg session:  The individual tuning session this variable should
                    be associated with.  If not specified, the global
                    tuning session will be used.
     :type session: TuningSession

     .. warning::

        Do not call tune() multiple times on a single source line.
        The current implementation generates a unique ID based on the
        file name and line number of call sites.  This prevents code
        structures like the following:

        .. code-block:: chapel

           // The following line produces errant behavior.
           var x = tune(0.0, 1.0, 0.001, .5), y = tune(-1.0, 1.0, 0.2, 0.0);

        This situation can be resolved by moving the definition of
        **y** to the next line.
  */
  proc tune(minVal: real, maxVal: real, stepVal: real, initVal: real,
            session = default)
  {
    var callerFile = __primitive("_get_user_file");
    var callerLine = __primitive("_get_user_line"): string;
    var callerID = callerFile + ":" + callerLine;

    return session.getValue(callerID, minVal, maxVal, stepVal, initVal);
  }

  /*
     Allow the tuner to choose an integer value between `minVal` and
     `maxVal` (by steps of `stepVal`).

     :arg bounds:  Chapel bounds specifying the set of valid values the
                   tuner may return.  Minimum, maximum, and stepping
                   values will be taken from this range.
     :type minVal: range

     :arg initVal:  The initial value to use before the tuner is ready
                    to produce values.
     :type initVal: int

     :arg session:  The individual tuning session this variable should
                    be associated with.  If not specified, the global
                    tuning session will be used.
     :type session: TuningSession

     .. warning::

        Do not call tune() multiple times on a single source line.
        The current implementation generates a unique ID based on the
        file name and line number of call sites.  This prevents code
        structures like the following:

        .. code-block:: chapel

           // The following line produces errant behavior.
           var x = tune(1..100, initVal=10), y = tune(-5..5, initVal=0);

        This situation can be resolved by moving the definition of
        **y** to the next line.
  */
  proc tune(bounds: range(?), initVal: int, session = default): int
  {
    assert(bounds.boundedType == BoundedRangeType.bounded);

    var callerFile = __primitive("_get_user_file");
    var callerLine = __primitive("_get_user_line"): string;
    var callerID = callerFile + ":" + callerLine;

    var minVal: real = min(bounds.first, bounds.last);
    var maxVal: real = max(bounds.first, bounds.last);
    var stepVal: real = abs(bounds.stride);

    return session.getValue(callerID, minVal, maxVal, stepVal, initVal): int;
  }

  /*
     Set the number of loop iterations to execute between collecting
     performance data and reporting it to underlying tuner.

     :arg iterations:  The number of iterations.  This is 1 by default.
     :type iterations: uint

     :arg session:  The individual tuning session this variable should
                    be associated with.  If not specified, the global
                    tuning session will be used.
     :type session: TuningSession
  */
  inline proc tunerGranularity(iterations: uint, session = default) {
    session.setGranularity(iterations);
  }

  /*
     TuningSession is an opaque class used to encapsulate individual
     tuning sessions.  If tuning variables are known to be
     independent, organizing them into separate tuning sessions will
     greatly increase the search's convergence rate.

     Allocate a new TuningSession and use it as a parameter to the
     module-level procedures.
  */
  class TuningSession {
    pragma "no doc"
    var data: SessionData = nil;

    pragma "no doc"
    inline proc TuningSession() {
      data = new SessionData(sessionID=chpl_tuner_init());
    }

    pragma "no doc"
    inline proc ~TuningSession() {
      chpl_tuner_fini(data.sessionID);
      delete data;
    }

    pragma "no doc"
    inline proc getValue(name: string, minVal: real, maxVal: real,
                         stepVal: real, initVal: real) {
      return if !is_c_nil(data.sessionID)
        then data.getValue(name, minVal, maxVal, stepVal, initVal)
        else initVal;
    }

    pragma "no doc"
    inline proc setGranularity(iterations: uint) {
      data.iterLimit = iterations;
    }

    // Inner class to encapsulate session setup and state.
    pragma "no doc"
    class SessionData {

      record Bounds {
        var name: string;
        var minVal, maxVal, stepVal: real;
      }

      var sessionID: c_void_ptr;
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
  pragma "no doc"
  extern proc chpl_tuner_init(): c_void_ptr;
  pragma "no doc"
  extern proc chpl_tuner_fini(sessionID: c_void_ptr);
  pragma "no doc"
  extern proc chpl_tuner_addVar(sessionID: c_void_ptr, name: c_string,
                                minVal: real, maxVal: real, stepVal: real);
  pragma "no doc"
  extern proc chpl_tuner_getVal(sessionID: c_void_ptr, name: c_string): real;
  pragma "no doc"
  extern proc chpl_tuner_start(sessionID: c_void_ptr);
  pragma "no doc"
  extern proc chpl_tuner_stop(sessionID: c_void_ptr);
  pragma "no doc"
  extern proc chpl_tuner_loop(sessionID: c_void_ptr, performance: real): bool;
}
