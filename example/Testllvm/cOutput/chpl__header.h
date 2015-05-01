
#define CHPL_GEN_CODE

#include "sys_basic.h"
#include "stdchpl.h"
#include "chpl_compilation_config.c"
/*** Class Type Identification Numbers ***/

const chpl__class_id chpl__cid__class_localscoforall_fn = 0;
const chpl__class_id chpl__cid__class_localscoforall_fn2 = 1;
const chpl__class_id chpl__cid_chpl___OpaqueIndex = 2;
const chpl__class_id chpl__cid__ddata_chpl_TableEntry_chpl_taskID_t = 3;
const chpl__class_id chpl__cid__ddata_chpl_string = 4;
const chpl__class_id chpl__cid__ddata_chpldev_Task = 5;
const chpl__class_id chpl__cid__ddata_locale = 6;
const chpl__class_id chpl__cid__ddata_localesSignal = 7;
const chpl__class_id chpl__cid_chpl___EndCount = 8;
const chpl__class_id chpl__cid_BaseDist = 9;
const chpl__class_id chpl__cid_BaseDom = 10;
const chpl__class_id chpl__cid_BaseRectangularDom = 11;
const chpl__class_id chpl__cid_BaseAssociativeDom = 12;
const chpl__class_id chpl__cid_BaseArr = 13;
const chpl__class_id chpl__cid_Writer = 14;
const chpl__class_id chpl__cid_Reader = 15;
const chpl__class_id chpl__cid_StringWriter = 16;
const chpl__class_id chpl__cid_locale = 17;
const chpl__class_id chpl__cid_AbstractLocaleModel = 18;
const chpl__class_id chpl__cid_AbstractRootLocale = 19;
const chpl__class_id chpl__cid_localesSignal = 20;
const chpl__class_id chpl__cid_chpldev_taskTable_t = 21;
const chpl__class_id chpl__cid__class_localscoforall_fn3 = 22;
const chpl__class_id chpl__cid_DefaultAssociativeDom_chpl_taskID_t_F = 23;
const chpl__class_id chpl__cid_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F = 24;
const chpl__class_id chpl__cid_DefaultDist = 25;
const chpl__class_id chpl__cid_DefaultRectangularDom_1_int64_t_F = 26;
const chpl__class_id chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F = 27;
const chpl__class_id chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F = 28;
const chpl__class_id chpl__cid_DefaultRectangularArr_locale_1_int64_t_F = 29;
const chpl__class_id chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F = 30;
const chpl__class_id chpl__cid_LocaleModel = 31;
const chpl__class_id chpl__cid_RootLocale = 32;
const chpl__class_id chpl__cid__class_localscoforall_fn4 = 33;
const chpl__class_id chpl__cid_object = 34;
const chpl__class_id chpl__cid_listNode_BaseArr = 35;
const chpl__class_id chpl__cid_listNode_BaseDom = 36;
const chpl__class_id chpl__cid_string_refcnt = 37;
const chpl__class_id chpl__cid_Actor = 38;
/*** Class Prototypes ***/

typedef struct chpl__class_localscoforall_fn_s* _class_localscoforall_fn;
typedef struct chpl__class_localscoforall_fn2_s* _class_localscoforall_fn2;
typedef struct chpl_chpl___OpaqueIndex_s* chpl___OpaqueIndex;
typedef struct chpl_chpl___EndCount_s* chpl___EndCount;
typedef struct chpl_BaseDist_s* BaseDist;
typedef struct chpl_BaseDom_s* BaseDom;
typedef struct chpl_BaseRectangularDom_s* BaseRectangularDom;
typedef struct chpl_BaseAssociativeDom_s* BaseAssociativeDom;
typedef struct chpl_BaseArr_s* BaseArr;
typedef struct chpl_Writer_s* Writer;
typedef struct chpl_Reader_s* Reader;
typedef struct chpl_StringWriter_s* StringWriter;
typedef struct chpl_locale_s* locale;
typedef struct chpl_AbstractLocaleModel_s* AbstractLocaleModel;
typedef struct chpl_AbstractRootLocale_s* AbstractRootLocale;
typedef struct chpl_localesSignal_s* localesSignal;
typedef struct chpl_chpldev_taskTable_t_s* chpldev_taskTable_t;
typedef struct chpl__class_localscoforall_fn3_s* _class_localscoforall_fn3;
typedef struct chpl_DefaultAssociativeDom_chpl_taskID_t_F_s* DefaultAssociativeDom_chpl_taskID_t_F;
typedef struct chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_s* DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F;
typedef struct chpl_DefaultDist_s* DefaultDist;
typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s* DefaultRectangularDom_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s* DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s* DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s* DefaultRectangularArr_locale_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s* DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef struct chpl_LocaleModel_s* LocaleModel;
typedef struct chpl_RootLocale_s* RootLocale;
typedef struct chpl__class_localscoforall_fn4_s* _class_localscoforall_fn4;
typedef struct chpl_object_s* object;
typedef struct chpl_listNode_BaseArr_s* listNode_BaseArr;
typedef struct chpl_listNode_BaseDom_s* listNode_BaseDom;
typedef struct chpl_string_refcnt_s* string_refcnt;
typedef struct chpl_Actor_s* Actor;
/*** Enumerated Types ***/

typedef enum {iterKind_leader = UINT32(1), iterKind_follower = UINT32(2)} iterKind;
typedef enum {BoundedRangeType_bounded = UINT32(1), BoundedRangeType_boundedLow = UINT32(2), BoundedRangeType_boundedHigh = UINT32(3), BoundedRangeType_boundedNone = UINT32(4)} BoundedRangeType;
typedef enum {taskState_pending = UINT32(1), taskState_active = UINT32(2), taskState_suspended = UINT32(3)} taskState;
typedef enum {chpl__hash_status_empty = UINT32(1), chpl__hash_status_full = UINT32(2), chpl__hash_status_deleted = UINT32(3)} chpl__hash_status;
typedef enum {iomode_r = INT64(1), iomode_cw = INT64(2), iomode_rw = INT64(3), iomode_cwr = INT64(4)} iomode;
typedef enum {iokind_dynamic = INT64(0), iokind_native = INT64(1), iokind_big = INT64(2), iokind_little = INT64(3)} iokind;
typedef enum {iostringstyle_len1b_data = INT64(-1), iostringstyle_len2b_data = INT64(-2), iostringstyle_len4b_data = INT64(-4), iostringstyle_len8b_data = INT64(-8), iostringstyle_lenVb_data = INT64(-10), iostringstyle_data_toeof = INT64(-65280), iostringstyle_data_null = INT64(-256)} iostringstyle;
typedef enum {relType_eq = INT64(1), relType_neq = UINT32(2), relType_lt = UINT32(3), relType_lte = UINT32(4), relType_gt = UINT32(5), relType_gte = UINT32(6)} relType;
/*** Records, Unions, Data Class, References (Hierarchically) ***/

typedef struct chpl_atomicflag_s {
  atomic_flag _v;
} atomicflag;

typedef struct chpl_atomic_int64_s {
  atomic_int_least64_t _v;
} atomic_int64;

typedef struct chpl_atomic_refcnt_s {
  atomic_int64 _cnt;
} atomic_refcnt;

typedef struct chpl_chpl_TableEntry_chpl_taskID_t_s {
  chpl__hash_status status;
  chpl_taskID_t idx;
} chpl_TableEntry_chpl_taskID_t;

typedef chpl_TableEntry_chpl_taskID_t *_ddata_chpl_TableEntry_chpl_taskID_t;
typedef chpl_string *_ddata_chpl_string;
typedef struct chpl_chpldev_Task_s {
  taskState state;
  uint32_t lineno;
  c_string filename;
  uint64_t tl_info;
} chpldev_Task;

typedef chpldev_Task *_ddata_chpldev_Task;
typedef locale *_ddata_locale;
typedef localesSignal *_ddata_localesSignal;
typedef AbstractLocaleModel *_ref_AbstractLocaleModel;
typedef AbstractRootLocale *_ref_AbstractRootLocale;
typedef Actor *_ref_Actor;
typedef BaseArr *_ref_BaseArr;
typedef BaseAssociativeDom *_ref_BaseAssociativeDom;
typedef BaseDist *_ref_BaseDist;
typedef BaseDom *_ref_BaseDom;
typedef BaseRectangularDom *_ref_BaseRectangularDom;
typedef DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F *_ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F;
typedef DefaultAssociativeDom_chpl_taskID_t_F *_ref_DefaultAssociativeDom_chpl_taskID_t_F;
typedef DefaultDist *_ref_DefaultDist;
typedef DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F *_ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef DefaultRectangularArr_chpldev_Task_1_int64_t_F *_ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef DefaultRectangularArr_locale_1_int64_t_F *_ref_DefaultRectangularArr_locale_1_int64_t_F;
typedef DefaultRectangularArr_localesSignal_1_int64_t_F *_ref_DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef DefaultRectangularDom_1_int64_t_F *_ref_DefaultRectangularDom_1_int64_t_F;
typedef LocaleModel *_ref_LocaleModel;
typedef Reader *_ref_Reader;
typedef RootLocale *_ref_RootLocale;
typedef StringWriter *_ref_StringWriter;
typedef Writer *_ref_Writer;
typedef chpl___EndCount *_ref__EndCount;
typedef chpl___OpaqueIndex *_ref__OpaqueIndex;
typedef struct chpl_chpl___RuntimeTypeInfo_s {
  DefaultDist d;
} chpl___RuntimeTypeInfo;

typedef chpl___RuntimeTypeInfo *_ref__RuntimeTypeInfo;
typedef struct chpl_chpl___RuntimeTypeInfo3_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo3;

typedef chpl___RuntimeTypeInfo3 *_ref__RuntimeTypeInfo2;
typedef struct chpl_chpl___RuntimeTypeInfo4_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo4;

typedef chpl___RuntimeTypeInfo4 *_ref__RuntimeTypeInfo3;
typedef struct chpl_chpl___RuntimeTypeInfo2_s {
  DefaultDist d;
} chpl___RuntimeTypeInfo2;

typedef chpl___RuntimeTypeInfo2 *_ref__RuntimeTypeInfo4;
typedef struct chpl_chpl___RuntimeTypeInfo5_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo5;

typedef chpl___RuntimeTypeInfo5 *_ref__RuntimeTypeInfo5;
typedef struct chpl_chpl___RuntimeTypeInfo6_s {
  DefaultAssociativeDom_chpl_taskID_t_F dom;
} chpl___RuntimeTypeInfo6;

typedef chpl___RuntimeTypeInfo6 *_ref__RuntimeTypeInfo6;
typedef struct chpl_chpl___RuntimeTypeInfo7_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo7;

typedef chpl___RuntimeTypeInfo7 *_ref__RuntimeTypeInfo7;
typedef _ddata_chpl_TableEntry_chpl_taskID_t *_ref__ddata_chpl_TableEntry_chpl_taskID_t;
typedef _ddata_chpl_string *_ref__ddata_chpl_string;
typedef _ddata_chpldev_Task *_ref__ddata_chpldev_Task;
typedef _ddata_locale *_ref__ddata_locale;
typedef _ddata_localesSignal *_ref__ddata_localesSignal;
typedef struct chpl__ir_initOnLocales_AbstractRootLocale_s {
  AbstractRootLocale F0_this;
} _ir_initOnLocales_AbstractRootLocale;

typedef _ir_initOnLocales_AbstractRootLocale *_ref__ir_initOnLocales_AbstractRootLocale;
typedef _nilType *_ref__nilType;
typedef c_string _tuple_1_star_c_string[1];

typedef _tuple_1_star_c_string *_ref__tuple_1_star_c_string;
typedef chpl_taskID_t _tuple_1_star_chpl_taskID_t[1];

typedef _tuple_1_star_chpl_taskID_t *_ref__tuple_1_star_chpl_taskID_t;
typedef int64_t _tuple_1_star_int64_t[1];

typedef _tuple_1_star_int64_t *_ref__tuple_1_star_int64_t;
typedef struct chpl_range_int64_t_bounded_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_bounded_F;

typedef range_int64_t_bounded_F _tuple_1_star_range_int64_t_bounded_F[1];

typedef _tuple_1_star_range_int64_t_bounded_F *_ref__tuple_1_star_range_int64_t_bounded_F;
typedef int64_t _tuple_27_star_int64_t[27];

typedef _tuple_27_star_int64_t *_ref__tuple_27_star_int64_t;
typedef struct chpl__tuple_2_chpl_bool_int64_t_s {
  chpl_bool x1;
  int64_t x2;
} _tuple_2_chpl_bool_int64_t;

typedef _tuple_2_chpl_bool_int64_t *_ref__tuple_2_chpl_bool_int64_t;
typedef struct chpl__tuple_2_int64_t__real64_s {
  int64_t x1;
  _real64 x2;
} _tuple_2_int64_t__real64;

typedef _tuple_2_int64_t__real64 *_ref__tuple_2_int64_t__real64;
typedef DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F[2];

typedef _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F *_ref__tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef DefaultRectangularArr_chpldev_Task_1_int64_t_F _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F[2];

typedef _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F *_ref__tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef int64_t _tuple_2_star_int64_t[2];

typedef _tuple_2_star_int64_t *_ref__tuple_2_star_int64_t;
typedef chpl_string _tuple_6_star_chpl_string[6];

typedef _tuple_6_star_chpl_string *_ref__tuple_6_star_chpl_string;
typedef atomic_flag *_ref_atomic_flag;
typedef atomic_int64 *_ref_atomic_int64;
typedef atomic_int_least64_t *_ref_atomic_int_least64_t;
typedef atomic_refcnt *_ref_atomic_refcnt;
typedef atomicflag *_ref_atomicflag;
typedef c_string *_ref_c_string;
typedef c_string_copy *_ref_c_string_copy;
typedef struct chpl_channel_F_dynamic_T_s {
  locale home;
  qio_channel_ptr_t _channel_internal;
} channel_F_dynamic_T;

typedef channel_F_dynamic_T *_ref_channel_F_dynamic_T;
typedef struct chpl_channel_T_dynamic_T_s {
  locale home;
  qio_channel_ptr_t _channel_internal;
} channel_T_dynamic_T;

typedef channel_T_dynamic_T *_ref_channel_T_dynamic_T;
typedef chpl_TableEntry_chpl_taskID_t *_ref_chpl_TableEntry_chpl_taskID_t;
typedef chpl__hash_status *_ref_chpl__hash_status;
typedef chpl_bool *_ref_chpl_bool;
typedef chpl_localeID_t *_ref_chpl_localeID_t;
typedef struct chpl_chpl_localeTreeRecord_s {
  locale left;
  locale right;
} chpl_localeTreeRecord;

typedef chpl_localeTreeRecord *_ref_chpl_localeTreeRecord;
typedef chpl_main_argument *_ref_chpl_main_argument;
typedef chpl_string *_ref_chpl_string;
typedef chpl_taskID_t *_ref_chpl_taskID_t;
typedef chpl_task_list_p *_ref_chpl_task_list_p;
typedef chpldev_Task *_ref_chpldev_Task;
typedef chpldev_taskTable_t *_ref_chpldev_taskTable_t;
typedef struct chpl_file_s {
  locale home;
  qio_file_ptr_t _file_internal;
} file;

typedef file *_ref_file;
typedef int32_t *_ref_int32_t;
typedef int64_t *_ref_int64_t;
typedef struct chpl_ioLiteral_s {
  c_string val;
  chpl_bool ignoreWhiteSpace;
} ioLiteral;

typedef ioLiteral *_ref_ioLiteral;
typedef struct chpl_ioNewline_s {
  chpl_bool skipWhitespaceOnly;
} ioNewline;

typedef ioNewline *_ref_ioNewline;
typedef iostyle *_ref_iostyle;
typedef listNode_BaseArr *_ref_listNode_BaseArr;
typedef listNode_BaseDom *_ref_listNode_BaseDom;
typedef struct chpl_list_BaseArr_s {
  listNode_BaseArr first;
  listNode_BaseArr last;
  int64_t length;
} list_BaseArr;

typedef list_BaseArr *_ref_list_BaseArr;
typedef struct chpl_list_BaseDom_s {
  listNode_BaseDom first;
  listNode_BaseDom last;
  int64_t length;
} list_BaseDom;

typedef list_BaseDom *_ref_list_BaseDom;
typedef locale *_ref_locale;
typedef struct chpl_localesBarrier_s {
  int dummyFieldToAvoidWarning;
} localesBarrier;

typedef localesBarrier *_ref_localesBarrier;
typedef localesSignal *_ref_localesSignal;
typedef object *_ref_object;
typedef qio_channel_ptr_t *_ref_qio_channel_ptr_t;
typedef qio_file_ptr_t *_ref_qio_file_ptr_t;
typedef struct chpl_range_int64_t_boundedLow_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_boundedLow_F;

typedef range_int64_t_boundedLow_F *_ref_range_int64_t_boundedLow_F;
typedef range_int64_t_bounded_F *_ref_range_int64_t_bounded_F;
typedef struct chpl_string_rec_s {
  c_string base;
  int64_t len;
  locale home;
  string_refcnt refCnt;
  string_refcnt aliasRefCnt;
} string_rec;

typedef string_rec *_ref_string_rec;
typedef string_refcnt *_ref_string_refcnt;
typedef syserr *_ref_syserr;
typedef taskState *_ref_taskState;
typedef uint32_t *_ref_uint32_t;
typedef uint64_t *_ref_uint64_t;
typedef uint8_t *_ref_uint8_t;
/*** Classes ***/

typedef struct chpl__class_localscoforall_fn_s {
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp;
  _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _5_rvfDerefTmp;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn_object;

typedef struct chpl__class_localscoforall_fn2_s {
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl___EndCount _4_rvfDerefTmp;
  _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F _5_rvfDerefTmp;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn2_object;

typedef struct chpl__class_localscoforall_fn3_s {
  _ref_locale _0_loc;
  chpl___EndCount _1_rvfDerefTmp;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn3_object;

typedef struct chpl__class_localscoforall_fn4_s {
  localesBarrier _0_b;
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags;
  int64_t _2_locIdx;
  int32_t _3_c_sublocid_any;
  chpl___EndCount _4_rvfDerefTmp;
  _ir_initOnLocales_AbstractRootLocale _5_rvfDerefTmp;
  RootLocale _6_this;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn4_object;

typedef struct chpl_object_s {
  chpl__class_id chpl__cid;
} chpl_object_object;

typedef struct chpl_chpl___OpaqueIndex_s /* : object */ {
  chpl_object_object super;
} chpl_chpl___OpaqueIndex_object;

typedef struct chpl_chpl___EndCount_s /* : object */ {
  chpl_object_object super;
  atomic_int64 i;
  int64_t taskCnt;
  chpl_task_list_p taskList;
} chpl_chpl___EndCount_object;

typedef struct chpl_BaseDist_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _distCnt;
  list_BaseDom _doms;
  atomicflag _domsLock;
} chpl_BaseDist_object;

typedef struct chpl_BaseDom_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _domCnt;
  list_BaseArr _arrs;
  atomicflag _arrsLock;
} chpl_BaseDom_object;

typedef struct chpl_BaseArr_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _arrCnt;
  BaseArr _arrAlias;
} chpl_BaseArr_object;

typedef struct chpl_Writer_s /* : object */ {
  chpl_object_object super;
} chpl_Writer_object;

typedef struct chpl_Reader_s /* : object */ {
  chpl_object_object super;
} chpl_Reader_object;

typedef struct chpl_locale_s /* : object */ {
  chpl_object_object super;
  locale parent;
  int64_t numCores;
  int64_t maxTaskPar;
  atomic_int64 runningTaskCounter;
} chpl_locale_object;

typedef struct chpl_localesSignal_s /* : object */ {
  chpl_object_object super;
  atomicflag s;
} chpl_localesSignal_object;

typedef struct chpl_chpldev_taskTable_t_s /* : object */ {
  chpl_object_object super;
  DefaultAssociativeDom_chpl_taskID_t_F dom;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F map;
} chpl_chpldev_taskTable_t_object;

typedef struct chpl_listNode_BaseArr_s /* : object */ {
  chpl_object_object super;
  BaseArr data;
  listNode_BaseArr next;
} chpl_listNode_BaseArr_object;

typedef struct chpl_listNode_BaseDom_s /* : object */ {
  chpl_object_object super;
  BaseDom data;
  listNode_BaseDom next;
} chpl_listNode_BaseDom_object;

typedef struct chpl_string_refcnt_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt val;
} chpl_string_refcnt_object;

typedef struct chpl_Actor_s /* : object */ {
  chpl_object_object super;
  chpl_string name;
  uint64_t age;
} chpl_Actor_object;

typedef struct chpl_BaseRectangularDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseRectangularDom_object;

typedef struct chpl_BaseAssociativeDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseAssociativeDom_object;

typedef struct chpl_StringWriter_s /* : Writer */ {
  chpl_Writer_object super;
  c_string_copy s;
} chpl_StringWriter_object;

typedef struct chpl_AbstractLocaleModel_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractLocaleModel_object;

typedef struct chpl_AbstractRootLocale_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractRootLocale_object;

typedef struct chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultAssociativeDom_chpl_taskID_t_F dom;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F data;
  DefaultRectangularDom_1_int64_t_F tmpDom;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F tmpTable;
} chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_object;

typedef struct chpl_DefaultDist_s /* : BaseDist */ {
  chpl_BaseDist_object super;
} chpl_DefaultDist_object;

typedef struct chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_chpl_TableEntry_chpl_taskID_t data;
  _ddata_chpl_TableEntry_chpl_taskID_t shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_chpldev_Task data;
  _ddata_chpldev_Task shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_locale data;
  _ddata_locale shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_locale_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_localesSignal data;
  _ddata_localesSignal shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object;

typedef struct chpl_DefaultAssociativeDom_chpl_taskID_t_F_s /* : BaseAssociativeDom */ {
  chpl_BaseAssociativeDom_object super;
  DefaultDist dist;
  atomic_int64 numEntries;
  atomicflag tableLock;
  int64_t tableSizeNum;
  int64_t tableSize;
  DefaultRectangularDom_1_int64_t_F tableDom;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F table;
  chpl_bool postponeResize;
} chpl_DefaultAssociativeDom_chpl_taskID_t_F_object;

typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s /* : BaseRectangularDom */ {
  chpl_BaseRectangularDom_object super;
  DefaultDist dist;
  _tuple_1_star_range_int64_t_bounded_F ranges;
} chpl_DefaultRectangularDom_1_int64_t_F_object;

typedef struct chpl_LocaleModel_s /* : AbstractLocaleModel */ {
  chpl_AbstractLocaleModel_object super;
  uint64_t callStackSize;
  int64_t _node_id;
  chpl_string local_name;
} chpl_LocaleModel_object;

typedef struct chpl_RootLocale_s /* : AbstractRootLocale */ {
  chpl_AbstractRootLocale_object super;
  DefaultRectangularDom_1_int64_t_F myLocaleSpace;
  DefaultRectangularArr_locale_1_int64_t_F myLocales;
} chpl_RootLocale_object;

/*** Function Prototypes ***/

/*  235266 */ static void chpl__init_Atomics(int64_t _ln, c_string _fn);
/*   21939 */ static void atomic_fence(memory_order order, int64_t _ln, c_string _fn);
/*  191463 */ static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme, int64_t _ln, c_string _fn);
/*  191759 */ static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme, int64_t _ln, c_string _fn);
/*  235275 */ static void chpl__init_AtomicsCommon(int64_t _ln, c_string _fn);
/*  192146 */ static atomic_refcnt _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, int64_t _ln, c_string _fn);
/*  235260 */ static void chpl__init_CString(int64_t _ln, c_string _fn);
/*  235311 */ static void chpl__init_ChapelArray(int64_t _ln, c_string _fn);
/* 1039665 */ static void _newArray(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1040543 */ static void _newArray2(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1042159 */ static void _newArray3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F value, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1042257 */ static void _newArray4(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F value, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
/* 1042327 */ static void _newArray5(DefaultRectangularArr_chpldev_Task_1_int64_t_F value, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1049705 */ static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1050881 */ static void _newDomain2(DefaultAssociativeDom_chpl_taskID_t_F value, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
/* 1040736 */ static void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1039312 */ static void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
/* 1039527 */ static void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
/*  536458 */ static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d, int64_t _ln, c_string _fn);
/* 1051160 */ static void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/*  744046 */ static chpl___RuntimeTypeInfo2 chpl__buildDomainRuntimeType2(DefaultDist d, int64_t _ln, c_string _fn);
/* 1051439 */ static void chpl__convertRuntimeTypeToValue2(DefaultDist d, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
/*  573226 */ static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
/*  577417 */ static chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
/*  636347 */ static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
/*  748815 */ static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType3(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
/*  772316 */ static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType4(DefaultAssociativeDom_chpl_taskID_t_F dom, int64_t _ln, c_string _fn);
/*  773260 */ static chpl___RuntimeTypeInfo7 chpl__buildArrayRuntimeType5(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
/* 1051220 */ static void chpl__convertRuntimeTypeToValue3(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1051273 */ static void chpl__convertRuntimeTypeToValue4(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1051333 */ static void chpl__convertRuntimeTypeToValue5(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1051386 */ static void chpl__convertRuntimeTypeToValue6(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1051492 */ static void chpl__convertRuntimeTypeToValue7(DefaultAssociativeDom_chpl_taskID_t_F dom, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
/* 1059649 */ static void coforall_fn(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const chpl__iter, int64_t _ln, c_string _fn);
/* 1060610 */ static void coforall_fn2(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const chpl__iter, int64_t _ln, c_string _fn);
/*  608454 */ static void chpl_incRefCountsForDomainsInArrayEltTypes(void);
/*  655051 */ static void chpl_incRefCountsForDomainsInArrayEltTypes2(void);
/*  767143 */ static void chpl_incRefCountsForDomainsInArrayEltTypes3(void);
/*  790450 */ static void chpl_incRefCountsForDomainsInArrayEltTypes4(void);
/*  608110 */ static void chpl_decRefCountsForDomainsInArrayEltTypes(void);
/*  654707 */ static void chpl_decRefCountsForDomainsInArrayEltTypes2(void);
/*  766799 */ static void chpl_decRefCountsForDomainsInArrayEltTypes3(void);
/*  790106 */ static void chpl_decRefCountsForDomainsInArrayEltTypes4(void);
/* 1037737 */ static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1042042 */ static void chpl__buildDomainExpr2(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1037847 */ static void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1039172 */ static void chpl__ensureDomainExpr2(DefaultAssociativeDom_chpl_taskID_t_F x, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
/* 1040183 */ static void chpl__ensureDomainExpr3(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1038096 */ static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
/* 1038142 */ static void chpl__buildDistValue2(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
/*  528726 */ static DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme, int64_t _ln, c_string _fn);
/*  528682 */ static DefaultDist _distribution(DefaultDist _value, int64_t _ln, c_string _fn);
/*  528982 */ static void chpl___TILDE__distribution(DefaultDist this7, int64_t _ln, c_string _fn);
/* 1039354 */ static void clone2(DefaultDist this7, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
/*  536601 */ static DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this7, int64_t _ln, c_string _fn);
/*  744144 */ static DefaultAssociativeDom_chpl_taskID_t_F newAssociativeDom(DefaultDist this7, int64_t _ln, c_string _fn);
/*  557835 */ static DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  769206 */ static DefaultAssociativeDom_chpl_taskID_t_F _construct__domain2(DefaultAssociativeDom_chpl_taskID_t_F _value, DefaultAssociativeDom_chpl_taskID_t_F meme, int64_t _ln, c_string _fn);
/*  558902 */ static void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  770095 */ static void chpl___TILDE__domain2(DefaultAssociativeDom_chpl_taskID_t_F this7, int64_t _ln, c_string _fn);
/* 1039455 */ static void dist(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
/* 1049514 */ static void this2(DefaultRectangularDom_1_int64_t_F this7, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1050723 */ static void buildArray(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1050802 */ static void buildArray2(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1050923 */ static void buildArray3(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1051002 */ static void buildArray4(DefaultAssociativeDom_chpl_taskID_t_F this7, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn);
/* 1051081 */ static void buildArray5(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/*  577493 */ static void help(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
/*  636423 */ static void help2(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
/*  748891 */ static void help3(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn);
/*  772392 */ static void help4(DefaultAssociativeDom_chpl_taskID_t_F this7, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
/*  773336 */ static void help5(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn);
/*  881897 */ static void add(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t i, int64_t _ln, c_string _fn);
/*  934448 */ static void remove2(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t i, int64_t _ln, c_string _fn);
/*  970428 */ static int64_t numIndices(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  870281 */ static int64_t high(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  865379 */ static chpl_bool member(DefaultAssociativeDom_chpl_taskID_t_F this7, _tuple_1_star_chpl_taskID_t* const i, int64_t _ln, c_string _fn);
/*  867837 */ static chpl_bool member2(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t _e0_i, int64_t _ln, c_string _fn);
/*  571799 */ static void setIndices(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn);
/* 1039569 */ static void getIndices(DefaultRectangularDom_1_int64_t_F this7, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/*  604583 */ static DefaultRectangularArr_locale_1_int64_t_F _construct__array(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  654042 */ static DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array2(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  766134 */ static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct__array3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _value, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  789441 */ static DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct__array4(DefaultRectangularArr_chpldev_Task_1_int64_t_F _value, DefaultRectangularArr_chpldev_Task_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  793404 */ static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct__array5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _value, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F meme, int64_t _ln, c_string _fn);
/*  608397 */ static void initialize(DefaultRectangularArr_locale_1_int64_t_F this7);
/*  654994 */ static void initialize2(DefaultRectangularArr_localesSignal_1_int64_t_F this7);
/*  767086 */ static void initialize3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7);
/*  790393 */ static void initialize4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7);
/*  794112 */ static void initialize5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7);
/*  605055 */ static void chpl___TILDE__array(DefaultRectangularArr_locale_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  654514 */ static void chpl___TILDE__array2(DefaultRectangularArr_localesSignal_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  766606 */ static void chpl___TILDE__array3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  789913 */ static void chpl___TILDE__array4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  793876 */ static void chpl___TILDE__array5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, int64_t _ln, c_string _fn);
/* 1038229 */ static void _dom(DefaultRectangularArr_locale_1_int64_t_F this7, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1042631 */ static void _dom2(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/* 1039252 */ static void newAlias(DefaultRectangularArr_locale_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/*  667211 */ static void chpl___ASSIGN_(DefaultDist a, DefaultDist b, int64_t _ln, c_string _fn);
/*  573649 */ static void chpl___ASSIGN_2(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b, int64_t _ln, c_string _fn);
/*  885748 */ static void checkArrayShapesUponAssignment(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F a, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F b, int64_t _ln, c_string _fn);
/*  974882 */ static void checkArrayShapesUponAssignment2(DefaultRectangularArr_chpldev_Task_1_int64_t_F a, DefaultRectangularArr_chpldev_Task_1_int64_t_F b, int64_t _ln, c_string _fn);
/* 1094325 */ static void wrapcoforall_fn(_class_localscoforall_fn c);
/* 1094449 */ static void wrapcoforall_fn2(_class_localscoforall_fn2 c);
/*  434986 */ static void chpl__auto_destroy__OpaqueIndex(chpl___OpaqueIndex this7, int64_t _ln, c_string _fn);
/*  534959 */ static DefaultDist chpl__initCopy(DefaultDist a, int64_t _ln, c_string _fn);
/*  722766 */ static DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a, int64_t _ln, c_string _fn);
/*  235248 */ static void chpl__init_ChapelBase(int64_t _ln, c_string _fn);
/*  961479 */ static c_string _cast(taskState this7, int64_t _ln, c_string _fn);
/*  534693 */ static void compilerAssert(void);
/*  597510 */ static void init_elts(_ddata_locale x, int64_t s, int64_t _ln, c_string _fn);
/*  645302 */ static void init_elts2(_ddata_localesSignal x, int64_t s, int64_t _ln, c_string _fn);
/*  757770 */ static void init_elts3(_ddata_chpl_TableEntry_chpl_taskID_t x, int64_t s, int64_t _ln, c_string _fn);
/*  782215 */ static void init_elts4(_ddata_chpldev_Task x, int64_t s, int64_t _ln, c_string _fn);
/*  191383 */ static chpl___EndCount _construct__EndCount(atomic_int64* const i, int64_t taskCnt, chpl_task_list_p taskList, chpl___EndCount meme, int64_t _ln, c_string _fn);
/*  422557 */ static void chpl__auto_destroy__EndCount(chpl___EndCount this7, int64_t _ln, c_string _fn);
/*    9477 */ static void _upEndCount(chpl___EndCount e, int64_t _ln, c_string _fn);
/*    9566 */ static void _downEndCount(chpl___EndCount e, int64_t _ln, c_string _fn);
/*    9591 */ static void _waitEndCount(chpl___EndCount e, int64_t _ln, c_string _fn);
/*    9729 */ static void _waitEndCount2(chpl___EndCount _endCount, int64_t _ln, c_string _fn);
/*  505067 */ static int64_t _command_line_cast(c_string x, int64_t _ln, c_string _fn);
/*  508009 */ static chpl_bool _command_line_cast2(c_string x, int64_t _ln, c_string _fn);
/*  514202 */ static int64_t _command_line_cast3(c_string x, int64_t _ln, c_string _fn);
/*  535226 */ static int64_t _command_line_cast4(c_string x, int64_t _ln, c_string _fn);
/*  801581 */ static chpl_bool _command_line_cast5(c_string x, int64_t _ln, c_string _fn);
/*  801626 */ static chpl_bool _command_line_cast6(c_string x, int64_t _ln, c_string _fn);
/*  801671 */ static chpl_bool _command_line_cast7(c_string x, int64_t _ln, c_string _fn);
/*  801716 */ static chpl_bool _command_line_cast8(c_string x, int64_t _ln, c_string _fn);
/*  805832 */ static uint64_t _command_line_cast9(c_string x, int64_t _ln, c_string _fn);
/*  808535 */ static uint64_t _command_line_cast10(c_string x, int64_t _ln, c_string _fn);
/*  808580 */ static c_string _command_line_cast11(c_string x, int64_t _ln, c_string _fn);
/*  812399 */ static c_string _command_line_cast12(c_string x, int64_t _ln, c_string _fn);
/*  819875 */ static chpl_string _command_line_cast13(c_string x, int64_t _ln, c_string _fn);
/*  852707 */ static chpl_bool _command_line_cast14(c_string x, int64_t _ln, c_string _fn);
/*  535042 */ static DefaultDist chpl__autoCopy(DefaultDist x, int64_t _ln, c_string _fn);
/* 1014574 */ static DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1017854 */ static DefaultAssociativeDom_chpl_taskID_t_F chpl__autoCopy3(DefaultAssociativeDom_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
/*  722665 */ static DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy4(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1015472 */ static DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy5(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1017750 */ static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl__autoCopy6(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1017958 */ static DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl__autoCopy7(DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1018062 */ static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl__autoCopy8(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
/* 1014508 */ static void chpl__autoDestroy(DefaultDist x, int64_t _ln, c_string _fn);
/* 1014660 */ static void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1017940 */ static void chpl__autoDestroy3(DefaultAssociativeDom_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
/* 1014910 */ static void chpl__autoDestroy4(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1015558 */ static void chpl__autoDestroy5(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1017836 */ static void chpl__autoDestroy6(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1018044 */ static void chpl__autoDestroy7(DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn);
/* 1018148 */ static void chpl__autoDestroy8(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn);
/*  235314 */ static void chpl__init_ChapelDistribution(int64_t _ln, c_string _fn);
/*  194069 */ static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, BaseDist meme, int64_t _ln, c_string _fn);
/*  435134 */ static void chpl__auto_destroy_BaseDist(BaseDist this7, int64_t _ln, c_string _fn);
/*  110665 */ static int64_t destroyDist(BaseDist this7, int64_t _ln, c_string _fn);
/*  111016 */ static void dsiDestroyDistClass(BaseDist this7);
/*  194299 */ static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseDom meme, int64_t _ln, c_string _fn);
/*  435282 */ static void chpl__auto_destroy_BaseDom(BaseDom this7, int64_t _ln, c_string _fn);
/*  111114 */ static BaseDist dsiMyDist(BaseDom this7, int64_t _ln, c_string _fn);
/*  111133 */ static int64_t destroyDom(BaseDom this7, int64_t _ln, c_string _fn);
/*  111383 */ static void _backupArrays(BaseDom this7, int64_t _ln, c_string _fn);
/*  111432 */ static void _removeArrayBackups(BaseDom this7, int64_t _ln, c_string _fn);
/*  925644 */ static void _preserveArrayElements(BaseDom this7, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn);
/*  111634 */ static chpl_bool dsiLinksDistribution(BaseDom this7);
/*  194261 */ static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme, int64_t _ln, c_string _fn);
/*  435349 */ static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this7, int64_t _ln, c_string _fn);
/*  195722 */ static BaseAssociativeDom _construct_BaseAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseAssociativeDom meme, int64_t _ln, c_string _fn);
/*  435483 */ static void chpl__auto_destroy_BaseAssociativeDom(BaseAssociativeDom this7, int64_t _ln, c_string _fn);
/*  195154 */ static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme, int64_t _ln, c_string _fn);
/*  435671 */ static void chpl__auto_destroy_BaseArr(BaseArr this7, int64_t _ln, c_string _fn);
/*  111933 */ static BaseDom dsiGetBaseDom(BaseArr this7, int64_t _ln, c_string _fn);
/*  111952 */ static int64_t destroyArr(BaseArr this7, int64_t _ln, c_string _fn);
/*  112077 */ static void dsiDestroyData(BaseArr this7, int64_t _ln, c_string _fn);
/*  577220 */ static void dsiReallocate(BaseArr this7, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
/*  112102 */ static void dsiPostReallocate(BaseArr this7);
/*  934991 */ static void clearEntry(BaseArr this7, chpl_taskID_t idx, chpl_bool haveLock, int64_t _ln, c_string _fn);
/*  112203 */ static void _backupArray(BaseArr this7, int64_t _ln, c_string _fn);
/*  112217 */ static void _removeArrayBackup(BaseArr this7, int64_t _ln, c_string _fn);
/*  925727 */ static void _preserveArrayElement(BaseArr this7, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn);
/*  235341 */ static void chpl__init_ChapelDynDispHack(int64_t _ln, c_string _fn);
/*  235317 */ static void chpl__init_ChapelIO(int64_t _ln, c_string _fn);
/*  195832 */ static Writer _construct_Writer(Writer meme, int64_t _ln, c_string _fn);
/*  435738 */ static void chpl__auto_destroy_Writer(Writer this7, int64_t _ln, c_string _fn);
/*  112596 */ static chpl_bool binary(Writer this7);
/*  112612 */ static int64_t styleElement(Writer this7, int64_t element);
/*  692324 */ static void writePrimitive(Writer this7, chpl_string x, int64_t _ln, c_string _fn);
/*  697952 */ static void writePrimitive2(Writer this7, ioLiteral* const x, int64_t _ln, c_string _fn);
/*  699386 */ static void writePrimitive3(Writer this7, int64_t x, int64_t _ln, c_string _fn);
/*  925539 */ static void writePrimitive4(Writer this7, uint64_t x, int64_t _ln, c_string _fn);
/*  691200 */ static void writeIt(Writer this7, chpl_string x, int64_t _ln, c_string _fn);
/*  692348 */ static void writeIt2(Writer this7, _tuple_1_star_int64_t* const x, int64_t _ln, c_string _fn);
/*  696562 */ static void writeIt3(Writer this7, ioLiteral* const x, int64_t _ln, c_string _fn);
/*  698353 */ static void writeIt4(Writer this7, int64_t x, int64_t _ln, c_string _fn);
/*  920848 */ static void writeIt5(Writer this7, chpl_taskID_t x, int64_t _ln, c_string _fn);
/*  924500 */ static void writeIt6(Writer this7, uint64_t x, int64_t _ln, c_string _fn);
/*  696541 */ static void readwrite(Writer this7, ioLiteral* const x, int64_t _ln, c_string _fn);
/*  698332 */ static void readwrite2(Writer this7, int64_t x, int64_t _ln, c_string _fn);
/*  685863 */ static void write2(Writer this7, chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn);
/*  748100 */ static void write3(Writer this7, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
/*  855065 */ static void write4(Writer this7, chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, int64_t _ln, c_string _fn);
/*  888741 */ static void write5(Writer this7, chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, int64_t _ln, c_string _fn);
/*  920558 */ static void write6(Writer this7, chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn);
/*  924283 */ static void write7(Writer this7, uint64_t _e0_args, int64_t _ln, c_string _fn);
/*  933278 */ static void write8(Writer this7, chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn);
/*  435805 */ static void chpl__auto_destroy_Reader(Reader this7, int64_t _ln, c_string _fn);
/*  115085 */ static void assert2(chpl_bool test, int64_t _ln, c_string _fn);
/*  115199 */ static void halt(c_string s, int64_t _ln, c_string _fn);
/*  675829 */ static void halt2(chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn);
/*  747704 */ static void halt3(chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
/*  853329 */ static void halt4(chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, int64_t _ln, c_string _fn);
/*  886853 */ static void halt5(chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, int64_t _ln, c_string _fn);
/*  918432 */ static void halt6(chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn);
/*  932882 */ static void halt7(chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn);
/*  115358 */ static void writeThis(chpl_taskID_t this7, Writer f, int64_t _ln, c_string _fn);
/*  195901 */ static StringWriter _construct_StringWriter(c_string_copy s, StringWriter meme, int64_t _ln, c_string _fn);
/*  115445 */ static StringWriter StringWriter2(c_string x, int64_t _ln, c_string _fn);
/*  996587 */ static void writePrimitive5(StringWriter this7, chpl_string x, int64_t _ln, c_string _fn);
/*  999085 */ static void writePrimitive6(StringWriter this7, ioLiteral* const x, int64_t _ln, c_string _fn);
/* 1001070 */ static void writePrimitive7(StringWriter this7, int64_t x, int64_t _ln, c_string _fn);
/* 1001124 */ static void writePrimitive8(StringWriter this7, uint64_t x, int64_t _ln, c_string _fn);
/*  115492 */ static void chpl___TILDE_StringWriter(StringWriter this7, int64_t _ln, c_string _fn);
/*  683086 */ static void write9(_ref_c_string this7, chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn);
/*  747945 */ static void write10(_ref_c_string this7, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
/*  853934 */ static void write11(_ref_c_string this7, chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, int64_t _ln, c_string _fn);
/*  887492 */ static void write12(_ref_c_string this7, chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, int64_t _ln, c_string _fn);
/*  919250 */ static void write13(_ref_c_string this7, chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn);
/*  933123 */ static void write14(_ref_c_string this7, chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn);
/*  235302 */ static void chpl__init_ChapelLocale(int64_t _ln, c_string _fn);
/*  193548 */ static locale _construct_locale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, locale meme, int64_t _ln, c_string _fn);
/*  431159 */ static void chpl__auto_destroy_locale(locale this7, int64_t _ln, c_string _fn);
/*   68508 */ static locale locale2(int64_t _ln, c_string _fn);
/*   68527 */ static int64_t id(locale this7, int64_t _ln, c_string _fn);
/*   68686 */ static int64_t chpl_id(locale this7, int64_t _ln, c_string _fn);
/*   68765 */ static int64_t getChildCount(locale this7, int64_t _ln, c_string _fn);
/*   68800 */ static locale getChild(locale this7, int64_t idx, int64_t _ln, c_string _fn);
/*  193505 */ static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme, int64_t _ln, c_string _fn);
/*  431226 */ static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this7, int64_t _ln, c_string _fn);
/*  193810 */ static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractRootLocale meme, int64_t _ln, c_string _fn);
/*  431293 */ static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this7, int64_t _ln, c_string _fn);
/*   68976 */ static locale localeIDtoLocale(AbstractRootLocale this7, chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
/*  193960 */ static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme, int64_t _ln, c_string _fn);
/*  431387 */ static void chpl__auto_destroy_localesSignal(localesSignal this7, int64_t _ln, c_string _fn);
/*  194010 */ static localesBarrier _construct_localesBarrier(localesBarrier* const meme);
/*  667573 */ static void wait2(_ref_localesBarrier this7, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t _ln, c_string _fn);
/*   69484 */ static void chpl_init_rootLocale(int64_t _ln, c_string _fn);
/*  699614 */ static void chpl_rootLocaleInitPrivate(int64_t locIdx, int64_t _ln, c_string _fn);
/*   69723 */ static locale chpl_localeID_to_locale(chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
/*   70035 */ static int64_t runningTasks(locale this7, int64_t _ln, c_string _fn);
/*   70101 */ void chpl_taskRunningCntInc(int64_t _ln, c_string _fn);
/*   70116 */ void chpl_taskRunningCntDec(int64_t _ln, c_string _fn);
/*  235344 */ static void chpl__init_ChapelNumLocales(int64_t _ln, c_string _fn);
/*  235290 */ static void chpl__init_ChapelRange(int64_t _ln, c_string _fn);
/*  538072 */ static range_int64_t_bounded_F _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme, int64_t _ln, c_string _fn);
/*  627412 */ static range_int64_t_boundedLow_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme, int64_t _ln, c_string _fn);
/*  540817 */ static range_int64_t_bounded_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn);
/*  627034 */ static range_int64_t_boundedLow_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn);
/* 1037693 */ static void _build_range(int64_t low, int64_t high2, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/* 1040092 */ static void _build_range2(int64_t bound, _ref_range_int64_t_boundedLow_F _retArg, int64_t _ln, c_string _fn);
/*  595861 */ static int64_t length(_ref_range_int64_t_bounded_F this7, int64_t _ln, c_string _fn);
/* 1049754 */ static void this3(_ref_range_int64_t_bounded_F this7, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/* 1040270 */ static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/* 1040134 */ static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/*  598597 */ static chpl_bool checkIfIterWillOverflow(_ref_range_int64_t_bounded_F this7, chpl_bool shouldHalt, int64_t _ln, c_string _fn);
/*  634557 */ static int64_t chpl__add(int64_t a, int64_t b, int64_t _ln, c_string _fn);
/*  235251 */ void chpl__init_ChapelStandard(int64_t _ln, c_string _fn);
/*  235332 */ static void chpl__init_ChapelTaskTable(int64_t _ln, c_string _fn);
/*  197479 */ static chpldev_Task _construct_chpldev_Task(taskState state, uint32_t lineno, c_string filename, uint64_t tl_info, chpldev_Task* const meme, int64_t _ln, c_string _fn);
/*  934094 */ static void chpl___ASSIGN_3(_ref_chpldev_Task _arg1, chpldev_Task* const _arg2, int64_t _ln, c_string _fn);
/*  439814 */ static chpldev_Task chpl__initCopy3(chpldev_Task* const x, int64_t _ln, c_string _fn);
/*  197588 */ static chpldev_taskTable_t _construct_chpldev_taskTable_t(DefaultAssociativeDom_chpl_taskID_t_F dom, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F map, chpldev_taskTable_t meme, int64_t _ln, c_string _fn);
/*  440082 */ static void chpl__auto_destroy_chpldev_taskTable_t(chpldev_taskTable_t this7, int64_t _ln, c_string _fn);
/*  126724 */ static void chpldev_taskTable_init(int64_t _ln, c_string _fn);
/*  461001 */ static void coforall_fn3(_ref_locale loc, chpl___EndCount _coforallCount, int64_t _ln, c_string _fn);
/* 1094095 */ static void wrapcoforall_fn3(_class_localscoforall_fn3 c);
/*  126823 */ void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, c_string filename, uint64_t tl_info, int64_t _ln, c_string _fn);
/*  126929 */ void chpldev_taskTable_remove(chpl_taskID_t taskID, int64_t _ln, c_string _fn);
/*  127034 */ void chpldev_taskTable_set_active(chpl_taskID_t taskID, int64_t _ln, c_string _fn);
/*  127136 */ void chpldev_taskTable_set_suspended(chpl_taskID_t taskID, int64_t _ln, c_string _fn);
/*  127236 */ uint64_t chpldev_taskTable_get_tl_info(chpl_taskID_t taskID, int64_t _ln, c_string _fn);
/*  127333 */ void chpldev_taskTable_print(int64_t _ln, c_string _fn);
/*  235278 */ static void chpl__init_ChapelThreads(int64_t _ln, c_string _fn);
/*  235287 */ static void chpl__init_ChapelTuple(int64_t _ln, c_string _fn);
/*  747052 */ static int64_t this4(_ref__tuple_27_star_int64_t this7, int64_t i, int64_t _ln, c_string _fn);
/*  905138 */ static _ref_range_int64_t_bounded_F this5(_ref__tuple_1_star_range_int64_t_bounded_F this7, int64_t i, int64_t _ln, c_string _fn);
/* 1050193 */ static void this6(_ref__tuple_1_star_range_int64_t_bounded_F this7, int64_t i, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/*  693807 */ static void readWriteThis(_ref__tuple_1_star_int64_t this7, Writer f, int64_t _ln, c_string _fn);
/*  235338 */ static void chpl__init_ChapelUtil(int64_t _ln, c_string _fn);
/*  235323 */ static void chpl__init_DefaultAssociative(int64_t _ln, c_string _fn);
/*  748676 */ static chpl_TableEntry_chpl_taskID_t _construct_chpl_TableEntry(chpl__hash_status status, chpl_taskID_t idx, chpl_TableEntry_chpl_taskID_t* const meme, int64_t _ln, c_string _fn);
/*  915774 */ static void chpl___ASSIGN_4(_ref_chpl_TableEntry_chpl_taskID_t _arg1, chpl_TableEntry_chpl_taskID_t* const _arg2, int64_t _ln, c_string _fn);
/* 1017524 */ static chpl_TableEntry_chpl_taskID_t chpl__initCopy4(chpl_TableEntry_chpl_taskID_t* const x, int64_t _ln, c_string _fn);
/* 1041965 */ static void chpl__primes(_ref__tuple_27_star_int64_t _retArg, int64_t _ln, c_string _fn);
/*  744717 */ static DefaultAssociativeDom_chpl_taskID_t_F _construct_DefaultAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, atomic_int64* const numEntries, atomicflag* const tableLock, int64_t tableSizeNum, int64_t tableSize, DefaultRectangularDom_1_int64_t_F tableDom, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F table2, chpl_bool postponeResize, DefaultAssociativeDom_chpl_taskID_t_F meme, int64_t _ln, c_string _fn);
/*  767651 */ static void chpl__auto_destroy_DefaultAssociativeDom(DefaultAssociativeDom_chpl_taskID_t_F this7, int64_t _ln, c_string _fn);
/*  971145 */ static chpl_bool dsiLinksDistribution2(DefaultAssociativeDom_chpl_taskID_t_F this7);
/*  744435 */ static DefaultAssociativeDom_chpl_taskID_t_F DefaultAssociativeDom(DefaultDist dist2, int64_t _ln, c_string _fn);
/*  772459 */ static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F dsiBuildArray(DefaultAssociativeDom_chpl_taskID_t_F this7, int64_t _ln, c_string _fn);
/*  868173 */ static chpl_bool dsiMember(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t idx, int64_t _ln, c_string _fn);
/*  881935 */ static int64_t dsiAdd(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t idx, int64_t slotNum, chpl_bool haveLock, int64_t _ln, c_string _fn);
/*  916937 */ static int64_t _add(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t idx, int64_t slotNum, int64_t _ln, c_string _fn);
/*  934486 */ static void dsiRemove(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t idx, int64_t _ln, c_string _fn);
/*  882798 */ static void _resize(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_bool grow, int64_t _ln, c_string _fn);
/* 1042756 */ static void _findFilledSlot(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg, int64_t _ln, c_string _fn);
/* 1046538 */ static void _findFilledSlot2(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg, int64_t _ln, c_string _fn);
/* 1047696 */ static void _findFilledSlot3(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg, int64_t _ln, c_string _fn);
/* 1046029 */ static void _findEmptySlot(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t idx, chpl_bool haveLock, _ref__tuple_2_chpl_bool_int64_t _retArg, int64_t _ln, c_string _fn);
/*  772702 */ static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct_DefaultAssociativeArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultAssociativeDom_chpl_taskID_t_F dom, DefaultRectangularArr_chpldev_Task_1_int64_t_F data, DefaultRectangularDom_1_int64_t_F tmpDom, DefaultRectangularArr_chpldev_Task_1_int64_t_F tmpTable, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F meme, int64_t _ln, c_string _fn);
/*  790970 */ static void chpl__auto_destroy_DefaultAssociativeArr(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, int64_t _ln, c_string _fn);
/*  971281 */ static DefaultAssociativeDom_chpl_taskID_t_F dsiGetBaseDom2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, int64_t _ln, c_string _fn);
/* 1003735 */ static void clearEntry2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, chpl_taskID_t idx, chpl_bool haveLock, int64_t _ln, c_string _fn);
/*  927842 */ static _ref_chpldev_Task dsiAccess(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, chpl_taskID_t idx, chpl_bool haveLock, int64_t _ln, c_string _fn);
/*  972345 */ static void _backupArray2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, int64_t _ln, c_string _fn);
/*  985371 */ static void _removeArrayBackup2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, int64_t _ln, c_string _fn);
/* 1003654 */ static void _preserveArrayElement2(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn);
/*  870650 */ static int64_t chpl__defaultHashWrapper(chpl_taskID_t x, int64_t _ln, c_string _fn);
/*  121384 */ static int64_t _gen_key(int64_t i, int64_t _ln, c_string _fn);
/*  235305 */ static void chpl__init_DefaultRectangular(int64_t _ln, c_string _fn);
/*  194031 */ static DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, DefaultDist meme, int64_t _ln, c_string _fn);
/*  431642 */ static void chpl__auto_destroy_DefaultDist(DefaultDist this7, int64_t _ln, c_string _fn);
/*  536725 */ static DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this7, int64_t _ln, c_string _fn);
/*  744363 */ static DefaultAssociativeDom_chpl_taskID_t_F dsiNewAssociativeDom(DefaultDist this7, int64_t _ln, c_string _fn);
/*   70366 */ static DefaultDist dsiClone(DefaultDist this7);
/*   70381 */ static void dsiAssign(DefaultDist this7, DefaultDist other);
/*  536893 */ static DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  544043 */ static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  971125 */ static chpl_bool dsiLinksDistribution3(DefaultRectangularDom_1_int64_t_F this7);
/*  536785 */ static DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2, int64_t _ln, c_string _fn);
/* 1039622 */ static void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this7, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/*  571867 */ static void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn);
/*  674902 */ static chpl_bool dsiMember2(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_int64_t* const ind, int64_t _ln, c_string _fn);
/* 1043540 */ static void dsiDims(DefaultRectangularDom_1_int64_t_F this7, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/* 1039741 */ static void dsiDim(DefaultRectangularDom_1_int64_t_F this7, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
/*  601457 */ static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  668812 */ static int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  870319 */ static int64_t dsiHigh(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  577560 */ static DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  636490 */ static DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray3(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  748958 */ static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F dsiBuildArray4(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  773403 */ static DefaultRectangularArr_chpldev_Task_1_int64_t_F dsiBuildArray5(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  993948 */ static DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const ranges, int64_t _ln, c_string _fn);
/*  577746 */ static DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  636676 */ static DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  749144 */ static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct_DefaultRectangularArr3(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpl_TableEntry_chpl_taskID_t data, _ddata_chpl_TableEntry_chpl_taskID_t shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  773589 */ static DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct_DefaultRectangularArr4(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpldev_Task data, _ddata_chpldev_Task shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpldev_Task_1_int64_t_F meme, int64_t _ln, c_string _fn);
/*  581309 */ static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_locale_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  637830 */ static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_localesSignal_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  750298 */ static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  774743 */ static void chpl__auto_destroy_DefaultRectangularArr4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  971165 */ static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_locale_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  971194 */ static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom4(DefaultRectangularArr_localesSignal_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  971223 */ static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom5(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  971252 */ static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom6(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  971310 */ static void dsiDestroyData2(DefaultRectangularArr_locale_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  971551 */ static void dsiDestroyData3(DefaultRectangularArr_localesSignal_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  971791 */ static void dsiDestroyData4(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  972068 */ static void dsiDestroyData5(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  595537 */ static void computeFactoredOffs(DefaultRectangularArr_locale_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  644812 */ static void computeFactoredOffs2(DefaultRectangularArr_localesSignal_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  757280 */ static void computeFactoredOffs3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  781725 */ static void computeFactoredOffs4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  593241 */ static void initialize6(DefaultRectangularArr_locale_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  643956 */ static void initialize7(DefaultRectangularArr_localesSignal_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  756424 */ static void initialize8(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  780869 */ static void initialize9(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7, int64_t _ln, c_string _fn);
/*  985438 */ static void dsiReallocate2(DefaultRectangularArr_locale_1_int64_t_F this7, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
/*  994481 */ static void dsiReallocate3(DefaultRectangularArr_localesSignal_1_int64_t_F this7, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
/*  995247 */ static void dsiReallocate4(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
/*  995917 */ static void dsiReallocate5(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
/*  235299 */ static void chpl__init_LocaleModel(int64_t _ln, c_string _fn);
/* 1038047 */ static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, c_string _fn);
/*   66512 */ static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn);
/*   66529 */ static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn);
/*  193485 */ static LocaleModel _construct_LocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, uint64_t callStackSize, int64_t _node_id, chpl_string local_name, LocaleModel meme, int64_t _ln, c_string _fn);
/*  430863 */ static void chpl__auto_destroy_LocaleModel(LocaleModel this7, int64_t _ln, c_string _fn);
/*   66611 */ static LocaleModel LocaleModel2(locale parent_loc, int64_t _ln, c_string _fn);
/*   66638 */ static int64_t chpl_id2(LocaleModel this7, int64_t _ln, c_string _fn);
/*   66712 */ static int64_t getChildCount2(LocaleModel this7, int64_t _ln, c_string _fn);
/*   66771 */ static locale getChild2(LocaleModel this7, int64_t idx, int64_t _ln, c_string _fn);
/*   66851 */ static void init(LocaleModel this7, int64_t _ln, c_string _fn);
/*  193791 */ static RootLocale _construct_RootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme, int64_t _ln, c_string _fn);
/*  430984 */ static void chpl__auto_destroy_RootLocale(RootLocale this7, int64_t _ln, c_string _fn);
/*   67238 */ static RootLocale RootLocale2(int64_t _ln, c_string _fn);
/*   67260 */ static void init2(RootLocale this7, int64_t _ln, c_string _fn);
/* 1094193 */ static void wrapcoforall_fn4(_class_localscoforall_fn4 c);
/* 1056836 */ static void coforall_fn4(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, int32_t c_sublocid_any, chpl___EndCount _coforallCount, _ir_initOnLocales_AbstractRootLocale* const chpl__iter, RootLocale this7, int64_t _ln, c_string _fn);
/*   67464 */ static int64_t chpl_id3(RootLocale this7, int64_t _ln, c_string _fn);
/*   67536 */ static int64_t getChildCount3(RootLocale this7, int64_t _ln, c_string _fn);
/*   67621 */ static locale getChild3(RootLocale this7, int64_t idx, int64_t _ln, c_string _fn);
/*   67700 */ static DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray(RootLocale this7, int64_t _ln, c_string _fn);
/* 1038188 */ static void getDefaultLocaleArray2(RootLocale this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
/*   67714 */ static locale localeIDtoLocale2(RootLocale this7, chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
/*   67797 */ static chpl_opaque chpl_here_alloc(int64_t size, int16_t md, int64_t _ln, c_string _fn);
/*   67962 */ static void chpl_here_free(chpl_opaque ptr, int64_t _ln, c_string _fn);
/*   68093 */ void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
/*   68154 */ void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
/*   68215 */ void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
/*   68379 */ void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn);
/*   68416 */ void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn);
/*   68453 */ void chpl_taskListProcess(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
/*   68469 */ void chpl_taskListExecute(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
/*   68485 */ void chpl_taskListFree(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
/*  235320 */ static void chpl__init_LocaleTree(int64_t _ln, c_string _fn);
/*  195962 */ static chpl_localeTreeRecord _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, int64_t _ln, c_string _fn);
/*  116288 */ static void chpl_initLocaleTree(int64_t _ln, c_string _fn);
/*  235308 */ static void chpl__init_LocalesArray(int64_t _ln, c_string _fn);
/*  235263 */ static void chpl__init_MemConsistency(int64_t _ln, c_string _fn);
/*  235335 */ static void chpl__init_MemTracking(int64_t _ln, c_string _fn);
/*  127504 */ void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaks, _ref_chpl_bool ret_memLeaksTable, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog, int64_t _ln, c_string _fn);
/*  235269 */ static void chpl__init_NetworkAtomics(int64_t _ln, c_string _fn);
/*  235254 */ void chpl__init_PrintModuleInitOrder(int64_t _ln, c_string _fn);
/*   14676 */ static void printModuleInit(c_string s1, c_string s2, int64_t len, int64_t _ln, c_string _fn);
/*   14743 */ static void initPrint(void);
/*  235257 */ static void chpl__init_String(int64_t _ln, c_string _fn);
/*  191281 */ static object _construct_object(object meme);
/*  460692 */ static void chpl__auto_destroy_object(object this7, int64_t _ln, c_string _fn);
/* 1273156 */ void chpl__heapAllocateGlobals(void);
/* 1273314 */ void chpl__init_preInit(int64_t _ln, c_string _fn);
/*  235353 */ static void chpl__init_BaseStringType(int64_t _ln, c_string _fn);
/*  235389 */ static void chpl__init_CommDiagnostics(int64_t _ln, c_string _fn);
/*  235371 */ static void chpl__init_DSIUtil(int64_t _ln, c_string _fn);
/* 1040024 */ static void createTuple(int64_t val, _ref__tuple_1_star_int64_t _retArg, int64_t _ln, c_string _fn);
/* 1044582 */ static void _computeChunkStuff(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, _tuple_1_star_range_int64_t_bounded_F* const ranges, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn);
/*  899629 */ static int64_t _computeNumChunks(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, uint64_t numElems, int64_t _ln, c_string _fn);
/*  906651 */ static uint64_t intCeilXDivByY(uint64_t x, uint64_t y, int64_t _ln, c_string _fn);
/* 1044392 */ static void _computeBlock(int64_t numelems, int64_t numblocks, int64_t blocknum, int64_t wayhi, int64_t waylo, int64_t lo, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn);
/*  235395 */ static void chpl__init_Error(int64_t _ln, c_string _fn);
/*  185537 */ static c_string quote_string(chpl_string s, int64_t len, int64_t _ln, c_string _fn);
/*  185723 */ static void ioerror(syserr error, chpl_string msg, chpl_string path, int64_t _ln, c_string _fn);
/*  185809 */ static void ioerror2(syserr error, chpl_string msg, chpl_string path, int64_t offset, int64_t _ln, c_string _fn);
/*  235380 */ static void chpl__init_IO(int64_t _ln, c_string _fn);
/* 1041080 */ static void defaultIOStyle(_ref_iostyle _retArg, int64_t _ln, c_string _fn);
/*  199438 */ static file _construct_file(locale home, qio_file_ptr_t _file_internal, file* const meme, int64_t _ln, c_string _fn);
/*  153968 */ static file chpl__initCopy5(file* const x, int64_t _ln, c_string _fn);
/*  154001 */ static void chpl___ASSIGN_5(_ref_file ret, file* const x, int64_t _ln, c_string _fn);
/*  154068 */ static void check(_ref_file this7, int64_t _ln, c_string _fn);
/*  154097 */ static void chpl___TILDE_file(_ref_file this7, int64_t _ln, c_string _fn);
/* 1041393 */ static void _style(_ref_file this7, _ref_iostyle _retArg, int64_t _ln, c_string _fn);
/*  154360 */ static chpl_string getPath(_ref_file this7, _ref_syserr error, int64_t _ln, c_string _fn);
/*  154459 */ static chpl_string tryGetPath(_ref_file this7, int64_t _ln, c_string _fn);
/* 1038454 */ static void openfd(int32_t fd, _ref_syserr error, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn);
/* 1040891 */ static void openfd2(int32_t fd, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn);
/* 1038600 */ static void openfp(_cfile fp, _ref_syserr error, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn);
/* 1041500 */ static void openfp2(_cfile fp, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn);
/*  726813 */ static channel_F_dynamic_T _construct_channel(locale home, qio_channel_ptr_t _channel_internal, channel_F_dynamic_T* const meme, int64_t _ln, c_string _fn);
/*  738391 */ static channel_T_dynamic_T _construct_channel2(locale home, qio_channel_ptr_t _channel_internal, channel_T_dynamic_T* const meme, int64_t _ln, c_string _fn);
/*  737917 */ static channel_F_dynamic_T chpl__initCopy6(channel_F_dynamic_T* const x, int64_t _ln, c_string _fn);
/*  741833 */ static channel_T_dynamic_T chpl__initCopy7(channel_T_dynamic_T* const x, int64_t _ln, c_string _fn);
/*  737766 */ static void chpl___ASSIGN_6(_ref_channel_F_dynamic_T ret, channel_F_dynamic_T* const x, int64_t _ln, c_string _fn);
/*  741682 */ static void chpl___ASSIGN_7(_ref_channel_T_dynamic_T ret, channel_T_dynamic_T* const x, int64_t _ln, c_string _fn);
/*  735255 */ static channel_F_dynamic_T channel(file* const f, _ref_syserr error, int32_t hints, int64_t start, int64_t end, iostyle* const local_style, int64_t _ln, c_string _fn);
/*  741373 */ static channel_T_dynamic_T channel2(file* const f, _ref_syserr error, int32_t hints, int64_t start, int64_t end, iostyle* const local_style, int64_t _ln, c_string _fn);
/*  726973 */ static void chpl___TILDE_channel(_ref_channel_F_dynamic_T this7, int64_t _ln, c_string _fn);
/*  738551 */ static void chpl___TILDE_channel2(_ref_channel_T_dynamic_T this7, int64_t _ln, c_string _fn);
/*  199637 */ static ioNewline _construct_ioNewline(chpl_bool skipWhitespaceOnly, ioNewline* const meme, int64_t _ln, c_string _fn);
/*  199679 */ static ioLiteral _construct_ioLiteral(c_string val, chpl_bool ignoreWhiteSpace, ioLiteral* const meme, int64_t _ln, c_string _fn);
/*  696240 */ static void chpl___ASSIGN_8(_ref_ioLiteral _arg1, ioLiteral* const _arg2, int64_t _ln, c_string _fn);
/*  832874 */ static void _ch_ioerror(_ref_channel_T_dynamic_T this7, syserr error, chpl_string msg, int64_t _ln, c_string _fn);
/* 1041131 */ static void reader(_ref_file this7, _ref_syserr error, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_F_dynamic_T _retArg, int64_t _ln, c_string _fn);
/* 1041266 */ static void reader2(_ref_file this7, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_F_dynamic_T _retArg, int64_t _ln, c_string _fn);
/* 1041696 */ static void writer(_ref_file this7, _ref_syserr error, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_T_dynamic_T _retArg, int64_t _ln, c_string _fn);
/* 1041831 */ static void writer2(_ref_file this7, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_T_dynamic_T _retArg, int64_t _ln, c_string _fn);
/*  846142 */ static syserr _write_text_internal(qio_channel_ptr_t _channel_internal, chpl_string x, int64_t _ln, c_string _fn);
/*  860301 */ static syserr _write_text_internal2(qio_channel_ptr_t _channel_internal, int64_t x, int64_t _ln, c_string _fn);
/*  943504 */ static syserr _write_text_internal3(qio_channel_ptr_t _channel_internal, c_string x, int64_t _ln, c_string _fn);
/*  949226 */ static syserr _write_text_internal4(qio_channel_ptr_t _channel_internal, uint32_t x, int64_t _ln, c_string _fn);
/*  959224 */ static syserr _write_text_internal5(qio_channel_ptr_t _channel_internal, taskState x, int64_t _ln, c_string _fn);
/*  850125 */ static chpl_string _args_to_proto(chpl_string _e0_args, ioNewline* const _e1_args, chpl_string preArg, int64_t _ln, c_string _fn);
/*  861350 */ static chpl_string _args_to_proto2(chpl_string _e0_args, int64_t _e1_args, ioNewline* const _e2_args, chpl_string preArg, int64_t _ln, c_string _fn);
/*  964863 */ static chpl_string _args_to_proto3(chpl_string _e0_args, c_string _e1_args, chpl_string _e2_args, uint32_t _e3_args, chpl_string _e4_args, taskState _e5_args, ioNewline* const _e6_args, chpl_string preArg, int64_t _ln, c_string _fn);
/*  830769 */ static chpl_bool writeln(_ref_channel_T_dynamic_T this7, chpl_string _e0_args, int64_t _ln, c_string _fn);
/*  855883 */ static chpl_bool writeln2(_ref_channel_T_dynamic_T this7, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
/*  936429 */ static chpl_bool writeln3(_ref_channel_T_dynamic_T this7, chpl_string _e0_args, c_string _e1_args, chpl_string _e2_args, uint32_t _e3_args, chpl_string _e4_args, taskState _e5_args, int64_t _ln, c_string _fn);
/*  830567 */ static void writeln4(chpl_string _e0_args, int64_t _ln, c_string _fn);
/*  855586 */ static void writeln5(chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
/*  235374 */ static void chpl__init_List(int64_t _ln, c_string _fn);
/*  514909 */ static listNode_BaseArr _construct_listNode(BaseArr data, listNode_BaseArr next, listNode_BaseArr meme, int64_t _ln, c_string _fn);
/*  515073 */ static void chpl__auto_destroy_listNode(listNode_BaseArr this7, int64_t _ln, c_string _fn);
/*  515912 */ static void chpl__auto_destroy_listNode2(listNode_BaseDom this7, int64_t _ln, c_string _fn);
/*  515128 */ static list_BaseArr _construct_list(listNode_BaseArr first, listNode_BaseArr last, int64_t length2, list_BaseArr* const meme, int64_t _ln, c_string _fn);
/*  515967 */ static list_BaseDom _construct_list2(listNode_BaseDom first, listNode_BaseDom last, int64_t length2, list_BaseDom* const meme, int64_t _ln, c_string _fn);
/*  564619 */ static void remove3(_ref_list_BaseDom this7, BaseDom x, int64_t _ln, c_string _fn);
/*  607421 */ static void remove4(_ref_list_BaseArr this7, BaseArr x, int64_t _ln, c_string _fn);
/*  601964 */ static void append(_ref_list_BaseArr this7, BaseArr e, int64_t _ln, c_string _fn);
/*  235356 */ static void chpl__init_NewString(int64_t _ln, c_string _fn);
/*  197962 */ static string_refcnt _construct_string_refcnt(atomic_refcnt* const val, string_refcnt meme, int64_t _ln, c_string _fn);
/*  440542 */ static void chpl__auto_destroy_string_refcnt(string_refcnt this7, int64_t _ln, c_string _fn);
/*  198033 */ static string_rec _construct_string_rec(c_string base, int64_t len, locale home, string_refcnt refCnt, string_refcnt aliasRefCnt, string_rec* const meme, int64_t _ln, c_string _fn);
/*  129055 */ static string_rec string_rec2(int64_t _ln, c_string _fn);
/*  129122 */ static void chpl___TILDE_string_rec(_ref_string_rec this7, int64_t _ln, c_string _fn);
/*  129278 */ static void reinitString(_ref_string_rec this7, c_string s, int64_t slen, int64_t _ln, c_string _fn);
/*  131359 */ static void chpl___ASSIGN_9(_ref_string_rec lhs, c_string rhs_c, int64_t _ln, c_string _fn);
/*  235398 */ static void chpl__init_Regexp(int64_t _ln, c_string _fn);
/*  235368 */ static void chpl__init_Sys(int64_t _ln, c_string _fn);
/*  235377 */ static void chpl__init_SysBasic(int64_t _ln, c_string _fn);
/*  235392 */ static void chpl__init_SysCTypes(int64_t _ln, c_string _fn);
/*  235359 */ static void chpl__init_Types(int64_t _ln, c_string _fn);
/*  600442 */ static int64_t min2(int64_t _ln, c_string _fn);
/*  904995 */ static uint64_t min3(int64_t _ln, c_string _fn);
/*  600093 */ static int64_t max2(int64_t _ln, c_string _fn);
/*  235347 */ static void chpl__init_Hui(int64_t _ln, c_string _fn);
/* 1052209 */ static void chpl__autoDestroyGlobals(void);
/*  197897 */ static Actor _construct_Actor(chpl_string name, uint64_t age, Actor meme, int64_t _ln, c_string _fn);
/*  440448 */ static void chpl__auto_destroy_Actor(Actor this7, int64_t _ln, c_string _fn);
/*  128656 */ static void sayhello(int64_t level);
/*  128675 */ static int64_t factorial(int64_t x);
/*  422069 */ int64_t chpl_gen_main(chpl_main_argument* const _arg);
/*  128768 */ static void chpl_user_main(void);
/*** Function Pointer Table ***/

chpl_fn_p chpl_ftable[] = {
  (chpl_fn_p)wrapcoforall_fn,
  (chpl_fn_p)wrapcoforall_fn2,
  (chpl_fn_p)wrapcoforall_fn3,
  (chpl_fn_p)wrapcoforall_fn4
};
/*** Virtual Method Table ***/

chpl_fn_p chpl_vmtable[] = {
  /* _class_localscoforall_fn */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn2 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpl___OpaqueIndex */
  (chpl_fn_p)chpl__auto_destroy__OpaqueIndex,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpl_TableEntry_chpl_taskID_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpl_string */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpldev_Task */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_locale */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_localesSignal */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpl___EndCount */
  (chpl_fn_p)chpl__auto_destroy__EndCount,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDist */
  (chpl_fn_p)chpl__auto_destroy_BaseDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDom */
  (chpl_fn_p)chpl__auto_destroy_BaseDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseRectangularDom */
  (chpl_fn_p)chpl__auto_destroy_BaseRectangularDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseAssociativeDom */
  (chpl_fn_p)chpl__auto_destroy_BaseAssociativeDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseArr */
  (chpl_fn_p)chpl__auto_destroy_BaseArr,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)dsiGetBaseDom,
  (chpl_fn_p)dsiDestroyData,
  (chpl_fn_p)dsiReallocate,
  /* Writer */
  (chpl_fn_p)chpl__auto_destroy_Writer,
  (chpl_fn_p)writePrimitive4,
  (chpl_fn_p)writePrimitive,
  (chpl_fn_p)writePrimitive3,
  (chpl_fn_p)writePrimitive2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* Reader */
  (chpl_fn_p)chpl__auto_destroy_Reader,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* StringWriter */
  (chpl_fn_p)chpl___TILDE_StringWriter,
  (chpl_fn_p)writePrimitive8,
  (chpl_fn_p)writePrimitive5,
  (chpl_fn_p)writePrimitive7,
  (chpl_fn_p)writePrimitive6,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* locale */
  (chpl_fn_p)chpl__auto_destroy_locale,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)getChild,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* AbstractLocaleModel */
  (chpl_fn_p)chpl__auto_destroy_AbstractLocaleModel,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)getChild,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* AbstractRootLocale */
  (chpl_fn_p)chpl__auto_destroy_AbstractRootLocale,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)getChild,
  (chpl_fn_p)localeIDtoLocale,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* localesSignal */
  (chpl_fn_p)chpl__auto_destroy_localesSignal,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpldev_taskTable_t */
  (chpl_fn_p)chpl__auto_destroy_chpldev_taskTable_t,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn3 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultAssociativeDom_chpl_taskID_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultAssociativeDom,
  (chpl_fn_p)dsiLinksDistribution2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultAssociativeArr,
  (chpl_fn_p)clearEntry2,
  (chpl_fn_p)_backupArray2,
  (chpl_fn_p)_removeArrayBackup2,
  (chpl_fn_p)_preserveArrayElement2,
  (chpl_fn_p)dsiGetBaseDom2,
  (chpl_fn_p)dsiDestroyData,
  (chpl_fn_p)dsiReallocate,
  /* DefaultDist */
  (chpl_fn_p)chpl__auto_destroy_DefaultDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularDom_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularDom,
  (chpl_fn_p)dsiLinksDistribution3,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr3,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)dsiGetBaseDom5,
  (chpl_fn_p)dsiDestroyData4,
  (chpl_fn_p)dsiReallocate4,
  /* DefaultRectangularArr_chpldev_Task_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr4,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)dsiGetBaseDom6,
  (chpl_fn_p)dsiDestroyData5,
  (chpl_fn_p)dsiReallocate5,
  /* DefaultRectangularArr_locale_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)dsiGetBaseDom3,
  (chpl_fn_p)dsiDestroyData2,
  (chpl_fn_p)dsiReallocate2,
  /* DefaultRectangularArr_localesSignal_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr2,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)dsiGetBaseDom4,
  (chpl_fn_p)dsiDestroyData3,
  (chpl_fn_p)dsiReallocate3,
  /* LocaleModel */
  (chpl_fn_p)chpl__auto_destroy_LocaleModel,
  (chpl_fn_p)getChildCount2,
  (chpl_fn_p)chpl_id2,
  (chpl_fn_p)getChild2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* RootLocale */
  (chpl_fn_p)chpl__auto_destroy_RootLocale,
  (chpl_fn_p)getChildCount3,
  (chpl_fn_p)chpl_id3,
  (chpl_fn_p)getChild3,
  (chpl_fn_p)localeIDtoLocale2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn4 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* object */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseArr */
  (chpl_fn_p)chpl__auto_destroy_listNode,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseDom */
  (chpl_fn_p)chpl__auto_destroy_listNode2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* string_refcnt */
  (chpl_fn_p)chpl__auto_destroy_string_refcnt,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* Actor */
  (chpl_fn_p)chpl__auto_destroy_Actor,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL
};
/*** Global Variables ***/

static atomic_int64 numPrivateObjects;
static int64_t taskCntType;
static chpl_bool chpl__testParOn;
static locale rootLocale;
static locale origRootLocale;
static locale dummyLocale;
static int64_t numLocales;
static chpldev_taskTable_t chpldev_taskTable;
static int64_t numThreadsPerLocale;
static int64_t chpl_table_index_type;
static int64_t dataParTasksPerLocale;
static chpl_bool dataParIgnoreRunningTasks;
static int64_t dataParMinGranularity;
static DefaultDist defaultDist;
static chpl_bool doneCreatingLocales;
static int32_t chpl_nodeID_t;
static int32_t chpl_sublocID_t;
static DefaultRectangularDom_1_int64_t_F chpl_emptyLocaleSpace;
static DefaultRectangularArr_locale_1_int64_t_F chpl_emptyLocales;
static chpl_localeTreeRecord chpl_localeTree;
static DefaultRectangularArr_locale_1_int64_t_F Locales;
static DefaultRectangularDom_1_int64_t_F LocaleSpace;
static chpl_bool memTrack;
static chpl_bool memStats;
static chpl_bool memLeaks;
static chpl_bool memLeaksTable;
static uint64_t memMax;
static uint64_t memThreshold;
static c_string memLog;
static c_string memLeaksLog;
static string_rec s_memLog;
static string_rec s_memLeaksLog;
static int32_t LINENO;
static chpl_bool printModuleInitOrder;
static int32_t moduleInitLevel;
static chpl_bool chpl__init_DSIUtil_p;
static chpl_bool chpl__init_Error_p;
static chpl_bool chpl__init_IO_p;
static chpl_bool chpl__init_List_p;
static chpl_bool chpl__init_Regexp_p;
static chpl_bool chpl__init_SysBasic_p;
static chpl_bool chpl__init_SysCTypes_p;
static chpl_bool chpl__init_Types_p;
static chpl_bool chpl__init_Hui_p;
static chpl_bool chpl__init_AtomicsCommon_p;
static chpl_bool chpl__init_ChapelDistribution_p;
static chpl_bool chpl__init_ChapelDynDispHack_p;
static chpl_bool chpl__init_MemConsistency_p;
static chpl_bool chpl__init_Sys_p;
static chpl_bool chpl__init_NetworkAtomics_p;
static chpl_bool chpl__init_ChapelArray_p;
static chpl_bool chpl__init_ChapelIO_p;
static chpl_bool chpl__init_ChapelLocale_p;
static chpl_bool chpl__init_ChapelNumLocales_p;
static chpl_bool chpl__init_ChapelRange_p;
static chpl_bool chpl__init_ChapelTaskTable_p;
static chpl_bool chpl__init_CommDiagnostics_p;
static chpl_bool chpl__init_DefaultAssociative_p;
static chpl_bool chpl__init_DefaultRectangular_p;
static chpl_bool chpl__init_MemTracking_p;
static chpl_bool chpl__init_String_p;
static chpl_bool chpl__init_ChapelBase_p;
static chpl_bool chpl__init_ChapelStandard_p;
static chpl_bool chpl__init_ChapelTuple_p;
static chpl_bool chpl__init_ChapelUtil_p;
static chpl_bool chpl__init_LocaleTree_p;
static chpl_bool chpl__init_ChapelThreads_p;
static chpl_bool chpl__init_LocaleModel_p;
static chpl_bool chpl__init_PrintModuleInitOrder_p;
static chpl_bool chpl__init_LocalesArray_p;
static chpl_bool chpl__init_Atomics_p;
static chpl_bool chpl__init_BaseStringType_p;
static chpl_bool chpl__init_NewString_p;
static chpl_bool chpl__init_CString_p;
static c_string baseType;
static int32_t IOHINT_NONE;
static int32_t IOHINT_RANDOM;
static int32_t IOHINT_SEQUENTIAL;
static int32_t IOHINT_CACHED;
static int32_t IOHINT_PARALLEL;
static chpl_string _r;
static chpl_string _rw;
static chpl_string _cw;
static chpl_string _cwr;
static _tuple_1_star_c_string _trues;
static _tuple_1_star_c_string _falses;
static chpl_string _i;
static _tuple_6_star_chpl_string _arg_to_proto_names;
static channel_F_dynamic_T stdin2;
static channel_T_dynamic_T stdout2;
static channel_T_dynamic_T stderr2;
static chpl_string message;
static _tuple_2_int64_t__real64 gv_t;
static chpl_bool gv_b;
static Actor globalActor;
const int chpl_numGlobalsOnHeap = 0;

ptr_wide_ptr_t chpl_globals_registry[1];
const int chpl_heterogeneous = 0;

const char* chpl_mem_descs[] = {
  "this",
  "locale",
  "listNode(BaseArr)",
  "listNode(BaseDom)",
  "DefaultDist",
  "domain(1,int(64),false)",
  "_ic_these__ref_list_BaseArr",
  "_ddata(locale)",
  "[domain(1,int(64),false)] locale",
  "_ic_these__ref_range_int64_t_bounded_F",
  "RootLocale",
  "_ic_these_DefaultRectangularDom_1_int64_t_F",
  "_ic_initOnLocales_AbstractRootLocale",
  "_ddata(localesSignal)",
  "[domain(1,int(64),false)] localesSignal",
  "_EndCount",
  "_ic_these_DefaultRectangularArr_localesSignal_1_int64_t_F",
  "localesSignal",
  "StringWriter",
  "LocaleModel",
  "_ddata(chpl_TableEntry(chpl_taskID_t))",
  "[domain(1,int(64),false)] chpl_TableEntry(chpl_taskID_t)",
  "DefaultAssociativeDom(chpl_taskID_t,false)",
  "_ddata(chpldev_Task)",
  "[domain(1,int(64),false)] chpldev_Task",
  "[DefaultAssociativeDom(chpl_taskID_t,false)] chpldev_Task",
  "_ic_these_DefaultRectangularArr_locale_1_int64_t_F",
  "chpldev_taskTable_t",
  "string_refcnt",
  "Actor",
  "_ic__lookForSlots_DefaultAssociativeDom_chpl_taskID_t_F",
  "_ic_these_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F",
  "_ic__fullSlots_DefaultAssociativeDom_chpl_taskID_t_F",
  "_ic_these_DefaultAssociativeDom_chpl_taskID_t_F",
  "_ic_these_DefaultRectangularArr_chpldev_Task_1_int64_t_F",
  "_ddata(string)",
  "bundled args"
};
const int chpl_mem_numDescs = 37;

void* const chpl_private_broadcast_table[] = {
  &chpl_verbose_comm,
  &chpl_comm_diagnostics,
  &chpl_verbose_mem
};
#include "chpl-gen-includes.h"
