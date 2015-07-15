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
#include "chpl-mem.h"
#include "chpl-tuner.h"

#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifdef ENABLE_TUNER

typedef struct var_info {
  uint32_t lineno;
  c_string filename;
  char*    varname;
  _real64  val;
} var_info_t;

typedef struct session_info {
  void*        session;
  uint32_t     loop_span;
  uint32_t     loop_count;
  _real64      timestamp;
  var_info_t** var_list;
  int          var_len;
  int          var_cap;
} session_info_t;

static session_info_t* session_list;
static int32_t session_len = 0;
static int32_t session_cap = 0;

//
// Internal helper function prototypes.
//
static inline void add_session(void*     session,
                               uint32_t  lineno,
                               c_string  filename);
static inline void del_session(int      idx,
                               uint32_t lineno,
                               c_string filename);
static inline void add_tunevar(session_info_t* sinfo,
                               _real64         init,
                               uint32_t        lineno,
                               c_string        filename);
static inline void grow_array(void*    buf,
                              int*     cap,
                              size_t   size,
                              uint32_t lineno,
                              c_string filename);
static inline _real64 get_timestamp(void);

//
// Chapel Tuner C interface implementation.
//

void* chpl_tuner_session_init(uint32_t  lineno,
                              c_string  filename) {
  void* session = chpl_tuner_session_init_hook();
  add_session(session, lineno, filename);
  return session;
}

void chpl_tuner_session_fini(void*    session,
                             uint32_t lineno,
                             c_string filename) {
  int i;

  for (i = 0; i < session_len; ++i) {
    if (session_list[i].session == session) {
      chpl_tuner_session_fini_hook(session);
      del_session(i, lineno, filename);
      break;
    }
  }
}

void chpl_tuner_session_loop_span(void*    session,
                                  uint32_t span) {
  int i;

  // Find the information associated with this session descriptor.
  for (i = 0; i < session_len; ++i) {
    if (session_list[i].session == session) {
      session_list[i].loop_span = span;
      break;
    }
  }
}

_real64 chpl_tuner_get(void*    session,
                       _real64  min,
                       _real64  max,
                       _real64  step,
                       _real64  init,
                       uint32_t lineno,
                       c_string filename) {
  session_info_t* sinfo;
  int i;

  // Find the information associated with this session descriptor.
  for (i = 0; i < session_len; ++i) {
    if (session_list[i].session == session) {
      sinfo = &session_list[i];
      break;
    }
  }
  if (i == session_len)
    return NAN;

  for (i = 0; i < sinfo->var_len; ++i) {
    if (sinfo->var_list[i]->lineno == lineno &&
        strcmp(sinfo->var_list[i]->filename, filename) == 0)
      break;
  }
  if (i == sinfo->var_len) {
    if (!isnan(sinfo->timestamp)) {
      // If we are mid-loop, we must stop the tuning session before
      // adding a new variable.
      chpl_tuner_session_stop_hook(sinfo->session);
      sinfo->timestamp = NAN;
    }

    // Add a new tuning variable for this filename:linenum.
    add_tunevar(sinfo, init, lineno, filename);
    chpl_tuner_session_newvar_hook(sinfo->session,
                                   sinfo->var_list[i]->varname,
                                   &sinfo->var_list[i]->val,
                                   min, max, step);
  }
  else if (i == 0) {
    // A loop is detected when the first tuning variable is requested again.

    if (isnan(sinfo->timestamp)) {
      // If this is the first iteration, begin a timer.
      chpl_tuner_session_start_hook(sinfo->session);
      sinfo->loop_count = sinfo->loop_span;
      sinfo->timestamp = get_timestamp();
    }
    else if (--sinfo->loop_count == 0) {
      // Otherwise, stop the timer and report the performance to the tuner.
      _real64 performance = get_timestamp() - sinfo->timestamp;
      chpl_tuner_session_loop_hook(sinfo->session, performance);

      // Prepare the session the next loop.
      sinfo->loop_count = sinfo->loop_span;
      sinfo->timestamp = get_timestamp();
    }
  }

  return sinfo->var_list[i]->val;
}

//
// Internal helper function implementations.
//
static inline void add_session(void*     session,
                               uint32_t  lineno,
                               c_string  filename) {
  while (session_len >= session_cap)
    grow_array(&session_list, &session_cap, sizeof(session_info_t*),
               lineno, filename);

  session_list[session_len].session = session;
  session_list[session_len].loop_span = 1;
  session_list[session_len].timestamp = NAN;
  session_list[session_len].var_list = NULL;
  session_list[session_len].var_len = 0;
  session_list[session_len].var_cap = 0;
  ++session_len;
}

static inline void del_session(int      idx,
                               uint32_t lineno,
                               c_string filename) {
  int i;

  if (session_list[idx].var_len) {
    for (i = 0; i < session_list[idx].var_len; ++i) {
      chpl_mem_free(session_list[idx].var_list[i]->varname, lineno, filename);
      chpl_mem_free(session_list[idx].var_list[i], lineno, filename);
    }
  }
  if (session_list[idx].var_cap)
    chpl_mem_free(session_list[idx].var_list, lineno, filename);

  if (idx < session_len)
    session_list[idx] = session_list[session_len];
  --session_len;
}

static inline void add_tunevar(session_info_t* sinfo,
                               _real64         init,
                               uint32_t        lineno,
                               c_string        filename) {
  var_info_t* new_var;
  char* name_buf = NULL;
  int name_len = 0;

  // Allocate memory for a combined filename:lineno string.
  do {
    if (name_len)
      name_buf = chpl_mem_alloc(++name_len, CHPL_RT_MD_TUNER_DATA,
                                lineno, filename);
    name_len = snprintf(name_buf, name_len, "%s:%d", filename, lineno);
  } while (!name_buf);

  // Allocate and initialize a new var_info_t structure.
  new_var = chpl_mem_alloc(sizeof(var_info_t), CHPL_RT_MD_TUNER_DATA,
                           lineno, filename);
  new_var->lineno = lineno;
  new_var->filename = filename;
  new_var->varname = name_buf;
  new_var->val = init;

  // Insert the new var_info_t into the variable list.
  while (sinfo->var_len >= sinfo->var_cap)
    grow_array(&sinfo->var_list, &sinfo->var_cap, sizeof(var_info_t*),
               lineno, filename);

  sinfo->var_list[sinfo->var_len] = new_var;
  ++sinfo->var_len;
}

// Allocate more room for an array.
static inline void grow_array(void*    buf,
                              int*     cap,
                              size_t   size,
                              uint32_t lineno,
                              c_string filename) {
  // Double the capacity of the array, or initialize the capacity to 8.
  int   new_cap = *cap ? *cap << 1 : 8;
  void* new_buf = chpl_mem_realloc(*((void**)buf),
                                   new_cap * size,
                                   CHPL_RT_MD_TUNER_DATA,
                                   lineno, filename);
  if (new_buf) {
    *cap = new_cap;
    *((void**)buf) = new_buf;
  }
}

static inline _real64 get_timestamp(void) {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return ((_real64)tv.tv_usec)/100000 + tv.tv_sec;
}

#else // !ENABLE_TUNER

void* chpl_tuner_session_init(uint32_t lineno,
                              c_string filename) { return NULL; }

void chpl_tuner_session_fini(void*    session,
                             uint32_t lineno,
                             c_string filename) { }

void chpl_tuner_session_loop_span(void*    session,
                                  uint32_t span) { }

_real64 chpl_tuner_get(void*    session,
                       _real64  min,
                       _real64  max,
                       _real64  step,
                       _real64  init,
                       uint32_t lineno,
                       c_string filename) { return init; }

#endif
