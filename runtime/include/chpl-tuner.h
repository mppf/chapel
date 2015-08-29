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

#ifndef _chpl_tuner_h_
#define _chpl_tuner_h_

#include <stdint.h>
#include "chpltypes.h"

// ===================================================================
// Chapel runtime third-party performance tuner interface.
//
// Performance tuners search for optimal values of variables given a
// valid value range.  This file declares the interface to communicate
// with external performance tuners.
//
// Third-party tuners should implement chpl_tuner_*()
// functions.  These are called from the Chapel runtime tuning
// framework.
// ===================================================================

//
// Initialize a new tuning session.
//
// This function should return a unique identifier to be used with the
// remaining functions declared in this file.
//
void* chpl_tuner_init(void);

//
// Release all resources associated with the specified tuning session.
//
void chpl_tuner_fini(void* sessionID);

//
// Add a new variable to the tuning session.
//
void chpl_tuner_addVar(void* sessionID, c_string name,
                       _real64 min, _real64 max, _real64 step);

//
// Retrieve the current value for the named tuning variable.
//
_real64 chpl_tuner_getVal(void* sessionID, c_string name);

//
// Begin generating values for the variables in the tuning session.
//
void chpl_tuner_start(void* sessionID);

//
// End the search for optimal values.
//
// This function is distinct from chpl_tuner_fini() for the "restart"
// case, when a session is stopped and started without releasing
// associated resources.
//
void chpl_tuner_stop(void* sessionID);

//
// Retrieve new testing values for the tuning session.
//
// Returns true if the tuner is actively searching for optimal values.
// Once the search converges, this function should set the tuning
// variable values to their best known values and return false.
//
chpl_bool chpl_tuner_loop(void* sessionID, _real64 performance);

#endif
