/*
 * Copyright 2004-2018 Cray Inc.
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

#ifndef _chpl_string_support_h_
#define _chpl_string_support_h_
/*
 * chpl-string-support.h
 *
 * This file provides utility functions for C strings (char *) and is
 * used by the runtime, the Chapel generated code, as well as the
 * launcher.
 *
 * See comments at the top of chpl-string-support.c for more info.
 *
 */

// A low-level C String, suitable for use with OS support functions &c.
// c_string behaves like a reference: The caller should not free a returned
// c_string, and should make a copy to preserve its value e.g. in a structure
// or global variable.
// The returned value is not guaranteed to remain the same through multiple
// calls.  Also, the returned value may change due to the activity of other
// threads.
typedef const char* c_string;


#include "chpltypes.h"
#include <assert.h>
#include <string.h>

extern c_nodeid_t chpl_nodeID; // unique ID for each node: 0, 1, 2, ...

#define CHPL_STRING_FLAG_INLINE 128
#define CHPL_STRING_FLAG_OWNED  64
// lower 6 bits can store a length
#define CHPL_STRING_FLAG_LENGTH  63

#define CHPL_STRING_MAX_INLINE 31

typedef struct chpl_string_c_s {
  union {
    struct {
      unsigned char flags;
      c_nodeid_t nodeid;
      int64_t len;
      int64_t size;
      uint8_t* ptr;
    } ptr;
    struct {
      unsigned char flags;
      uint8_t buf[CHPL_STRING_MAX_INLINE];
    } buf;
  } u;
} chpl_string_c_t;

static inline
unsigned char chpl_string_flags(const chpl_string_c_t* s)
{
  unsigned char* flags_ptr = (unsigned char*) s;
  return *flags_ptr;
}

static inline
void chpl_string_set_flags(const chpl_string_c_t* s,
                           unsigned char flags)
{
  unsigned char* flags_ptr = (unsigned char*) s;
  *flags_ptr = flags;
}

static inline
unsigned char chpl_string_get_flag(const chpl_string_c_t* s, unsigned char flag)
{
  return (chpl_string_flags(s) & flag) != 0;
}
static inline
void chpl_string_set_flag(const chpl_string_c_t* s,
                          unsigned char flag,
                          unsigned char value)
{
  unsigned char oldflags = chpl_string_flags(s);
  unsigned char newflag  = value?flag:0;
  unsigned char newflags = (oldflags & ~flag) | newflag;
  chpl_string_set_flags(s, newflags);
}

static inline
chpl_bool chpl_string_isinline(const chpl_string_c_t* s)
{
  return chpl_string_get_flag(s, CHPL_STRING_FLAG_INLINE);
}
static inline
void chpl_string_set_isinline(const chpl_string_c_t* s, chpl_bool value)
{
  chpl_string_set_flag(s, CHPL_STRING_FLAG_INLINE, value);
}

static inline
chpl_bool chpl_string_isowned(const chpl_string_c_t* s)
{
  return chpl_string_get_flag(s, CHPL_STRING_FLAG_OWNED);
}
static inline
void chpl_string_set_isowned(const chpl_string_c_t* s, chpl_bool value)
{
  chpl_string_set_flag(s, CHPL_STRING_FLAG_OWNED, value);
}

static inline
c_nodeid_t chpl_string_nodeid(const chpl_string_c_t* s)
{
  if (chpl_string_isinline(s))
    return chpl_nodeID;
  else
    return s->u.ptr.nodeid;
}
static inline
void chpl_string_set_nodeid(chpl_string_c_t* s,
                                          c_nodeid_t node)
{
  if (!chpl_string_isinline(s))
    s->u.ptr.nodeid = node;
}

static inline
int64_t chpl_string_len(const chpl_string_c_t* s)
{
  if (chpl_string_isinline(s))
    return (chpl_string_flags(s) & CHPL_STRING_FLAG_LENGTH);
  else
    return s->u.ptr.len;
}
static inline
void chpl_string_set_len(chpl_string_c_t* s, int64_t len)
{
  if (chpl_string_isinline(s)) {
    assert(len <= CHPL_STRING_MAX_INLINE);
    unsigned char oldflags = chpl_string_flags(s);
    unsigned char mask     = CHPL_STRING_FLAG_LENGTH;
    unsigned char newflag  = len;
    unsigned char newflags = (oldflags & ~mask) | newflag;
    chpl_string_set_flags(s, newflags);
  } else {
    s->u.ptr.len = len;
  }
}

static inline int64_t chpl_string_size(const chpl_string_c_t* s)
{
  if (chpl_string_isinline(s))
    return sizeof(s->u.buf.buf);
  else
    return s->u.ptr.size;
}
static inline void chpl_string_set_size(chpl_string_c_t* s, int64_t size)
{
  if (!chpl_string_isinline(s))
    s->u.ptr.size = size;
}

static inline
uint8_t* chpl_string_ptr(chpl_string_c_t* s)
{
  if (chpl_string_isinline(s))
    return s->u.buf.buf;
  else
    return s->u.ptr.ptr;
}
static inline
void chpl_string_set_ptr(chpl_string_c_t* s, uint8_t* ptr)
{
  if (!chpl_string_isinline(s))
    s->u.ptr.ptr = ptr;
}

static inline
void chpl_string_setup_inline(chpl_string_c_t* s, int64_t len)
{
  memset(s, 0, sizeof(chpl_string_c_t));
  assert(len < CHPL_STRING_MAX_INLINE);
  chpl_string_set_isinline(s, true);
  chpl_string_set_isowned(s, true);
  chpl_string_set_len(s, len);
  assert(chpl_string_isinline(s));
  assert(chpl_string_len(s) == len);
}



static inline
int8_t ascii(c_string s) {
  return (int8_t) *s;
}

static inline
int64_t string_length(c_string x) {
  if (x == NULL)
    return 0;
  return strlen(x);
}

static inline
int32_t string_compare(c_string x, c_string y) {
  if (x == y) return 0;
  if (x == NULL) return -1;
  if (y == NULL) return 1;
  return (int32_t)strcmp(x, y);
}

//
// stopgap formatting
//
c_string chpl_format(c_string format, ...)
  __attribute__((format(printf, 1, 2)));

// Uses the system allocator.
char* chpl_glom_strings(int numstrings, ...);

chpl_bool string_contains(c_string x, c_string y);
c_string string_copy(c_string x, int32_t lineno, int32_t filename);
c_string string_concat(c_string x, c_string y, int32_t lineno, int32_t filename);
int string_index_of(c_string x, c_string y);
c_string string_index(c_string x, int i, int32_t lineno, int32_t filename);
c_string string_select(c_string x, int low, int high, int stride, int32_t lineno, int32_t filename);

#endif
