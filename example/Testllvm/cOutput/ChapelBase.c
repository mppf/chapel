/* ChapelBase.chpl:24 */
/*  235248 */ static void chpl__init_ChapelBase(int64_t _ln, c_string _fn) {
  /* 1273327 */ c_string modFormatStr;
  /* 1273328 */ c_string modStr;
  /* 1273346 */ _ref_int32_t refIndentLevel = NULL;
  /* 235249*/ /* 1273365*/ if (chpl__init_ChapelBase_p) /* 1273366*/ {
    /* 1273362*/ goto _exit_chpl__init_ChapelBase;
  }
  /* 1273338*/ modFormatStr = "%*s\n";
  /* 1273341*/ modStr = "ChapelBase";
  /* 1273344*/ printModuleInit(modFormatStr, modStr, INT64(10), _ln, _fn);
  /* 1273350*/ refIndentLevel = &moduleInitLevel;
  /* 1273353*/ *(refIndentLevel) += INT64(1);
  /* 1273325*/ chpl__init_ChapelBase_p = true;
  /* 1273356*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelBase:;
  /* 263384*/ return;
}

/* ChapelTaskTable.chpl:54 */
/*  961479 */ static c_string _cast(taskState this7, int64_t _ln, c_string _fn) {
  /*  961490 */ c_string ret;
  /* 1208916 */ int64_t call_tmp;
  /* 1208926 */ int64_t call_tmp2;
  /* 1100761 */ chpl_bool call_tmp3;
  /* 1208936 */ int64_t call_tmp4;
  /* 1208946 */ int64_t call_tmp5;
  /* 1100771 */ chpl_bool call_tmp6;
  /* 1208956 */ int64_t call_tmp7;
  /* 1208966 */ int64_t call_tmp8;
  /* 1100781 */ chpl_bool call_tmp9;
  /* 961838*/ /* 1208918*/ call_tmp = ((int64_t)(this7));
  /* 1208928*/ call_tmp2 = ((int64_t)(taskState_pending));
  /* 1100763*/ call_tmp3 = (call_tmp == call_tmp2);
  /* 961857*/ if (call_tmp3) /* 961850*/ {
    /* 961851*/ ret = "pending";
    /* 961856*/ goto _end__cast;
  }
  /* 1208938*/ call_tmp4 = ((int64_t)(this7));
  /* 1208948*/ call_tmp5 = ((int64_t)(taskState_active));
  /* 1100773*/ call_tmp6 = (call_tmp4 == call_tmp5);
  /* 961874*/ if (call_tmp6) /* 961867*/ {
    /* 961868*/ ret = "active";
    /* 961873*/ goto _end__cast;
  }
  /* 1208958*/ call_tmp7 = ((int64_t)(this7));
  /* 1208968*/ call_tmp8 = ((int64_t)(taskState_suspended));
  /* 1100783*/ call_tmp9 = (call_tmp7 == call_tmp8);
  /* 961891*/ if (call_tmp9) /* 961884*/ {
    /* 961885*/ ret = "suspended";
    /* 961890*/ goto _end__cast;
  }
  /* 961892*/ ret = "";
  _end__cast:;
  /* 961898*/ return ret;
}

/* ChapelBase.chpl:183 */
/*  534693 */ static void compilerAssert(void) {
  /* 534700*/ /* 534721*/ return;
}

/* ChapelBase.chpl:663 */
/*  597510 */ static void init_elts(_ddata_locale x, int64_t s, int64_t _ln, c_string _fn) {
  /*  597528 */ range_int64_t_bounded_F call_tmp;
  /* 1039806 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1263307 */ range_int64_t_bounded_F _ic__F0_this;
  /* 1062839 */ _ref_range_int64_t_bounded_F this7 = NULL;
  /* 1062729 */ int64_t i;
  /* 1128576 */ int64_t ret;
  /* 1062762 */ int64_t end;
  /* 1128917 */ int64_t ret2;
  /* 1117620 */ locale call_tmp2 = NULL;
  /* 1104244 */ int64_t call_tmp3;
  /* 597525*/ /* 1039809*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 597533*/ _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1126869*/ _ic__F0_this = call_tmp;
  /* 1062844*/ this7 = &_ic__F0_this;
  /* 1128256*/ checkIfIterWillOverflow(this7, true, _ln, _fn);
  /* 1128578*/ ret = (&_ic__F0_this)->_low;
  /* 1128919*/ ret2 = (&_ic__F0_this)->_high;
  /* 1062776*/ end = ret2;
  /* 1062779*/ for (i = ret; ((i <= end)); i += INT64(1)) {
    /* 1117622*/ call_tmp2 = ((locale)(nil));
    /* 1104246*/ call_tmp3 = (i - INT64(1));
    /* 1062832*/ *(x + call_tmp3) = call_tmp2;
  }
  /* 597590*/ return;
}

/* ChapelBase.chpl:663 */
/*  645302 */ static void init_elts2(_ddata_localesSignal x, int64_t s, int64_t _ln, c_string _fn) {
  /*  645320 */ range_int64_t_bounded_F call_tmp;
  /* 1040607 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1263327 */ range_int64_t_bounded_F _ic__F0_this;
  /* 1063231 */ _ref_range_int64_t_bounded_F this7 = NULL;
  /* 1063121 */ int64_t i;
  /* 1128586 */ int64_t ret;
  /* 1063154 */ int64_t end;
  /* 1128927 */ int64_t ret2;
  /* 1135066 */ localesSignal call_tmp2 = NULL;
  /* 1104254 */ int64_t call_tmp3;
  /* 645317*/ /* 1040610*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 645325*/ _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1126926*/ _ic__F0_this = call_tmp;
  /* 1063236*/ this7 = &_ic__F0_this;
  /* 1128267*/ checkIfIterWillOverflow(this7, true, _ln, _fn);
  /* 1128588*/ ret = (&_ic__F0_this)->_low;
  /* 1128929*/ ret2 = (&_ic__F0_this)->_high;
  /* 1063168*/ end = ret2;
  /* 1063171*/ for (i = ret; ((i <= end)); i += INT64(1)) {
    /* 1135068*/ call_tmp2 = ((localesSignal)(nil));
    /* 1104256*/ call_tmp3 = (i - INT64(1));
    /* 1063224*/ *(x + call_tmp3) = call_tmp2;
  }
  /* 645382*/ return;
}

/* ChapelBase.chpl:663 */
/*  757770 */ static void init_elts3(_ddata_chpl_TableEntry_chpl_taskID_t x, int64_t s, int64_t _ln, c_string _fn) {
  /*  757788 */ range_int64_t_bounded_F call_tmp;
  /* 1042223 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1263347 */ range_int64_t_bounded_F _ic__F0_this;
  /* 1064067 */ _ref_range_int64_t_bounded_F this7 = NULL;
  /* 1063957 */ int64_t i;
  /* 1128596 */ int64_t ret;
  /* 1063990 */ int64_t end;
  /* 1128937 */ int64_t ret2;
  /* 1145279 */ chpl_TableEntry_chpl_taskID_t this8;
  /* 1145289 */ chpl__hash_status x2;
  /* 1145306 */ chpl_taskID_t ret3;
  /* 1145315 */ chpl_TableEntry_chpl_taskID_t wrap_call_tmp;
  /* 1104304 */ int64_t call_tmp2;
  /* 757785*/ /* 1042226*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 757793*/ _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1126983*/ _ic__F0_this = call_tmp;
  /* 1064072*/ this7 = &_ic__F0_this;
  /* 1128278*/ checkIfIterWillOverflow(this7, true, _ln, _fn);
  /* 1128598*/ ret = (&_ic__F0_this)->_low;
  /* 1128939*/ ret2 = (&_ic__F0_this)->_high;
  /* 1064004*/ end = ret2;
  /* 1064007*/ for (i = ret; ((i <= end)); i += INT64(1)) {
    /* 1145281*/ (&this8)->status = chpl__hash_status_empty;
    /* 1145285*/ (&this8)->idx = chpl_nullTaskID;
    /* 1145299*/ x2 = chpl__hash_status_empty;
    /* 1145302*/ (&this8)->status = x2;
    /* 1145308*/ ret3 = chpl_nullTaskID;
    /* 1145311*/ (&this8)->idx = ret3;
    /* 1145317*/ wrap_call_tmp = _construct_chpl_TableEntry(x2, ret3, &this8, _ln, _fn);
    /* 1104306*/ call_tmp2 = (i - INT64(1));
    /* 1064060*/ *(x + call_tmp2) = wrap_call_tmp;
  }
  /* 757850*/ return;
}

/* ChapelBase.chpl:663 */
/*  782215 */ static void init_elts4(_ddata_chpldev_Task x, int64_t s, int64_t _ln, c_string _fn) {
  /*  782233 */ range_int64_t_bounded_F call_tmp;
  /* 1042391 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1263367 */ range_int64_t_bounded_F _ic__F0_this;
  /* 1064208 */ _ref_range_int64_t_bounded_F this7 = NULL;
  /* 1064098 */ int64_t i;
  /* 1128606 */ int64_t ret;
  /* 1064131 */ int64_t end;
  /* 1128947 */ int64_t ret2;
  /* 1117955 */ chpldev_Task this8;
  /* 1117989 */ chpldev_Task wrap_call_tmp;
  /* 1104314 */ int64_t call_tmp2;
  /* 782230*/ /* 1042394*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 782238*/ _build_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1127040*/ _ic__F0_this = call_tmp;
  /* 1064213*/ this7 = &_ic__F0_this;
  /* 1128289*/ checkIfIterWillOverflow(this7, true, _ln, _fn);
  /* 1128608*/ ret = (&_ic__F0_this)->_low;
  /* 1128949*/ ret2 = (&_ic__F0_this)->_high;
  /* 1064145*/ end = ret2;
  /* 1064148*/ for (i = ret; ((i <= end)); i += INT64(1)) {
    /* 1117957*/ (&this8)->state = taskState_pending;
    /* 1117961*/ (&this8)->lineno = UINT32(0);
    /* 1117965*/ (&this8)->filename = "";
    /* 1117969*/ (&this8)->tl_info = UINT64(0);
    /* 1117973*/ (&this8)->state = taskState_pending;
    /* 1117977*/ (&this8)->lineno = UINT32(0);
    /* 1117981*/ (&this8)->filename = "";
    /* 1117985*/ (&this8)->tl_info = UINT64(0);
    /* 1117991*/ wrap_call_tmp = _construct_chpldev_Task(taskState_pending, UINT32(0), "", UINT64(0), &this8, _ln, _fn);
    /* 1104316*/ call_tmp2 = (i - INT64(1));
    /* 1064201*/ *(x + call_tmp2) = wrap_call_tmp;
  }
  /* 782295*/ return;
}

/* ChapelBase.chpl:776 */
/*  191383 */ static chpl___EndCount _construct__EndCount(atomic_int64* const i, int64_t taskCnt, chpl_task_list_p taskList, chpl___EndCount meme, int64_t _ln, c_string _fn) {
  /*  191385 */ chpl___EndCount this7 = NULL;
  /*  191398 */ object T = NULL;
  /* 191384*/ /* 191393*/ this7 = meme;
  /* 1275158*/ chpl_check_nil(this7, INT64(776), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 191405*/ T = &((this7)->super);
  /* 191396*/ _construct_object(T);
  /* 1275160*/ chpl_check_nil(this7, INT64(777), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 191421*/ (this7)->i = *(i);
  /* 1275162*/ chpl_check_nil(this7, INT64(778), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 191434*/ (this7)->taskCnt = taskCnt;
  /* 1275164*/ chpl_check_nil(this7, INT64(779), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 191444*/ (this7)->taskList = taskList;
  /* 191449*/ return this7;
}

/* ChapelBase.chpl:776 */
/*  422557 */ static void chpl__auto_destroy__EndCount(chpl___EndCount this7, int64_t _ln, c_string _fn) {
  /* 1033183 */ _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  /* 1097769 */ _ref_atomic_int_least64_t call_tmp = NULL;
  /* 422558*/ /* 1275642*/ chpl_check_nil(this7, INT64(777), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1033188*/ _field_destructor_tmp_ = &((this7)->i);
  /* 1275906*/ chpl_check_nil(_field_destructor_tmp_, INT64(777), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1097771*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1097777*/ atomic_destroy_int_least64_t(call_tmp);
  /* 422563*/ return;
}

/* ChapelBase.chpl:803 */
/*    9477 */ static void _upEndCount(chpl___EndCount e, int64_t _ln, c_string _fn) {
  /* 1272191 */ memory_order local_memory_order_relaxed;
  /* 1272184 */ memory_order local_memory_order_release;
  /* 1116401 */ _ref_atomic_int64 call_tmp = NULL;
  /* 1103495 */ _ref_atomic_int_least64_t call_tmp2 = NULL;
  /* 1116435 */ _ref_int64_t call_tmp3 = NULL;
  /*  315357 */ locale call_tmp4 = NULL;
  /* 1106301 */ int32_t call_tmp5;
  /* 1106307 */ chpl_localeID_t call_tmp6;
  /* 1106309 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106320 */ chpl_localeID_t call_tmp7;
  /* 1106327 */ locale call_tmp8 = NULL;
  /* 1106001 */ _ref_atomic_int64 call_tmp9 = NULL;
  /* 1106010 */ _ref_atomic_int_least64_t call_tmp10 = NULL;
  /* 9478*/ /* 1272192*/ local_memory_order_relaxed = memory_order_relaxed;
  /* 1272185*/ local_memory_order_release = memory_order_release;
  /* 9514*/ chpl_rmem_consist_fence(local_memory_order_release, _ln, _fn);
  /* 1276118*/ chpl_check_nil(e, INT64(813), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1116403*/ call_tmp = &((e)->i);
  /* 1275930*/ chpl_check_nil(call_tmp, INT64(813), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1103497*/ call_tmp2 = &((call_tmp)->_v);
  /* 1103503*/ atomic_fetch_add_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
  /* 1276124*/ chpl_check_nil(e, INT64(814), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1116437*/ call_tmp3 = &((e)->taskCnt);
  /* 1116193*/ *(call_tmp3) += INT64(1);
  /* 1106303*/ call_tmp5 = chpl_task_getRequestedSubloc();
  /* 1106311*/ ret_to_arg_ref_tmp_ = &call_tmp6;
  /* 1106316*/ chpl_buildLocaleID(chpl_nodeID, call_tmp5, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106322*/ call_tmp7 = chpl__initCopy_chpl_rt_localeID_t(call_tmp6);
  /* 1106329*/ call_tmp8 = chpl_localeID_to_locale(&call_tmp7, _ln, _fn);
  /* 315360*/ call_tmp4 = call_tmp8;
  /* 1275944*/ chpl_check_nil(call_tmp4, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1106003*/ call_tmp9 = &((call_tmp4)->runningTaskCounter);
  /* 1275946*/ chpl_check_nil(call_tmp9, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1106012*/ call_tmp10 = &((call_tmp9)->_v);
  /* 1106018*/ atomic_fetch_add_explicit_int_least64_t(call_tmp10, INT64(1), local_memory_order_relaxed);
  /* 262012*/ return;
}

/* ChapelBase.chpl:824 */
/*    9566 */ static void _downEndCount(chpl___EndCount e, int64_t _ln, c_string _fn) {
  /* 1272197 */ memory_order local_memory_order_release;
  /* 1116411 */ _ref_atomic_int64 call_tmp = NULL;
  /* 1103597 */ _ref_atomic_int_least64_t call_tmp2 = NULL;
  /* 9567*/ /* 1272198*/ local_memory_order_release = memory_order_release;
  /* 1276120*/ chpl_check_nil(e, INT64(825), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1116413*/ call_tmp = &((e)->i);
  /* 1275932*/ chpl_check_nil(call_tmp, INT64(825), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1103599*/ call_tmp2 = &((call_tmp)->_v);
  /* 1103605*/ atomic_fetch_sub_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
  /* 262014*/ return;
}

/* ChapelBase.chpl:831 */
/*    9591 */ static void _waitEndCount(chpl___EndCount e, int64_t _ln, c_string _fn) {
  /* 1272210 */ memory_order local_memory_order_acquire;
  /* 1272203 */ memory_order local_memory_order_relaxed;
  /* 1138268 */ chpl_task_list_p ret;
  /* 1116421 */ _ref_atomic_int64 call_tmp = NULL;
  /* 1103672 */ chpl_bool T;
  /* 1103674 */ _ref_atomic_int_least64_t call_tmp2 = NULL;
  /* 1103681 */ int64_t call_tmp3;
  /* 1103689 */ chpl_bool call_tmp4;
  /* 1103704 */ _ref_atomic_int_least64_t call_tmp5 = NULL;
  /* 1103711 */ int64_t call_tmp6;
  /* 1103719 */ chpl_bool call_tmp7;
  /* 1098033 */ int64_t ret2;
  /*  315425 */ locale call_tmp8 = NULL;
  /* 1106337 */ int32_t call_tmp9;
  /* 1106343 */ chpl_localeID_t call_tmp10;
  /* 1106345 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106356 */ chpl_localeID_t call_tmp11;
  /* 1106363 */ locale call_tmp12 = NULL;
  /* 1106054 */ _ref_atomic_int64 call_tmp13 = NULL;
  /* 1106063 */ _ref_atomic_int_least64_t call_tmp14 = NULL;
  /* 1138278 */ chpl_task_list_p ret3;
  /* 9592*/ /* 1272211*/ local_memory_order_acquire = memory_order_acquire;
  /* 1272204*/ local_memory_order_relaxed = memory_order_relaxed;
  /* 1277046*/ chpl_check_nil(e, INT64(833), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1138270*/ ret = (e)->taskList;
  /* 9603*/ chpl_taskListExecute(ret, _ln, _fn);
  /* 1276122*/ chpl_check_nil(e, INT64(836), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1116423*/ call_tmp = &((e)->i);
  /* 1275934*/ chpl_check_nil(call_tmp, INT64(836), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1103676*/ call_tmp2 = &((call_tmp)->_v);
  /* 1103683*/ call_tmp3 = atomic_load_explicit_int_least64_t(call_tmp2, local_memory_order_relaxed);
  /* 1103691*/ call_tmp4 = (call_tmp3 != INT64(0));
  /* 1103696*/ T = call_tmp4;
  /* 1103699*/ while (T) {
    /* 1103703*/ chpl_task_yield();
    /* 1275936*/ chpl_check_nil(call_tmp, INT64(836), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
    /* 1103706*/ call_tmp5 = &((call_tmp)->_v);
    /* 1103713*/ call_tmp6 = atomic_load_explicit_int_least64_t(call_tmp5, local_memory_order_relaxed);
    /* 1103721*/ call_tmp7 = (call_tmp6 != INT64(0));
    /* 1103726*/ T = call_tmp7;
  }
  /* 1103730*/ atomic_thread_fence(local_memory_order_acquire);
  /* 1275920*/ chpl_check_nil(e, INT64(838), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1098035*/ ret2 = (e)->taskCnt;
  /* 1106339*/ call_tmp9 = chpl_task_getRequestedSubloc();
  /* 1106347*/ ret_to_arg_ref_tmp_ = &call_tmp10;
  /* 1106352*/ chpl_buildLocaleID(chpl_nodeID, call_tmp9, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106358*/ call_tmp11 = chpl__initCopy_chpl_rt_localeID_t(call_tmp10);
  /* 1106365*/ call_tmp12 = chpl_localeID_to_locale(&call_tmp11, _ln, _fn);
  /* 315428*/ call_tmp8 = call_tmp12;
  /* 1275952*/ chpl_check_nil(call_tmp8, INT64(839), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1106056*/ call_tmp13 = &((call_tmp8)->runningTaskCounter);
  /* 1275954*/ chpl_check_nil(call_tmp13, INT64(839), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1106065*/ call_tmp14 = &((call_tmp13)->_v);
  /* 1106071*/ atomic_fetch_sub_explicit_int_least64_t(call_tmp14, ret2, local_memory_order_relaxed);
  /* 1277048*/ chpl_check_nil(e, INT64(849), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1138280*/ ret3 = (e)->taskList;
  /* 9685*/ chpl_taskListFree(ret3, _ln, _fn);
  /* 262016*/ return;
}

/* ChapelBase.chpl:862 */
/*    9729 */ static void _waitEndCount2(chpl___EndCount _endCount, int64_t _ln, c_string _fn) {
  /* 9730*/ /* 9741*/ _waitEndCount(_endCount, _ln, _fn);
  /* 262022*/ return;
}

/* ChapelBase.chpl:868 */
/*  505067 */ static int64_t _command_line_cast(c_string x, int64_t _ln, c_string _fn) {
  /* 1119592 */ int64_t call_tmp;
  /* 505084*/ /* 1119594*/ call_tmp = c_string_to_int64_t(x, _ln, _fn);
  /* 505099*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  508009 */ static chpl_bool _command_line_cast2(c_string x, int64_t _ln, c_string _fn) {
  /* 1119622 */ chpl_bool call_tmp;
  /* 508026*/ /* 1119624*/ call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  /* 508041*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  514202 */ static int64_t _command_line_cast3(c_string x, int64_t _ln, c_string _fn) {
  /* 1119602 */ int64_t call_tmp;
  /* 514219*/ /* 1119604*/ call_tmp = c_string_to_int64_t(x, _ln, _fn);
  /* 514234*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  535226 */ static int64_t _command_line_cast4(c_string x, int64_t _ln, c_string _fn) {
  /* 1119612 */ int64_t call_tmp;
  /* 535243*/ /* 1119614*/ call_tmp = c_string_to_int64_t(x, _ln, _fn);
  /* 535258*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  801581 */ static chpl_bool _command_line_cast5(c_string x, int64_t _ln, c_string _fn) {
  /* 1119632 */ chpl_bool call_tmp;
  /* 801598*/ /* 1119634*/ call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  /* 801613*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  801626 */ static chpl_bool _command_line_cast6(c_string x, int64_t _ln, c_string _fn) {
  /* 1119642 */ chpl_bool call_tmp;
  /* 801643*/ /* 1119644*/ call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  /* 801658*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  801671 */ static chpl_bool _command_line_cast7(c_string x, int64_t _ln, c_string _fn) {
  /* 1119652 */ chpl_bool call_tmp;
  /* 801688*/ /* 1119654*/ call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  /* 801703*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  801716 */ static chpl_bool _command_line_cast8(c_string x, int64_t _ln, c_string _fn) {
  /* 1119662 */ chpl_bool call_tmp;
  /* 801733*/ /* 1119664*/ call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  /* 801748*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  805832 */ static uint64_t _command_line_cast9(c_string x, int64_t _ln, c_string _fn) {
  /* 1150112 */ uint64_t call_tmp;
  /* 805849*/ /* 1150114*/ call_tmp = c_string_to_uint64_t(x, _ln, _fn);
  /* 805864*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  808535 */ static uint64_t _command_line_cast10(c_string x, int64_t _ln, c_string _fn) {
  /* 1150122 */ uint64_t call_tmp;
  /* 808552*/ /* 1150124*/ call_tmp = c_string_to_uint64_t(x, _ln, _fn);
  /* 808567*/ return call_tmp;
}

/* ChapelBase.chpl:868 */
/*  808580 */ static c_string _command_line_cast11(c_string x, int64_t _ln, c_string _fn) {
  /* 1104613 */ chpl_string call_tmp;
  /* 1119390 */ c_string call_tmp2;
  /* 808597*/ /* 1104615*/ string_from_c_string(&call_tmp, x, INT64(0), INT64(0), _ln, _fn);
  /* 1119392*/ c_string_from_string(&call_tmp2, &call_tmp, _ln, _fn);
  /* 808612*/ return call_tmp2;
}

/* ChapelBase.chpl:868 */
/*  812399 */ static c_string _command_line_cast12(c_string x, int64_t _ln, c_string _fn) {
  /* 1104629 */ chpl_string call_tmp;
  /* 1119399 */ c_string call_tmp2;
  /* 812416*/ /* 1104631*/ string_from_c_string(&call_tmp, x, INT64(0), INT64(0), _ln, _fn);
  /* 1119401*/ c_string_from_string(&call_tmp2, &call_tmp, _ln, _fn);
  /* 812431*/ return call_tmp2;
}

/* ChapelBase.chpl:868 */
/*  819875 */ static chpl_string _command_line_cast13(c_string x, int64_t _ln, c_string _fn) {
  /*  819883 */ chpl_string ret;
  /* 1104645 */ chpl_string call_tmp;
  /* 819892*/ /* 1104647*/ string_from_c_string(&call_tmp, x, INT64(0), INT64(0), _ln, _fn);
  /* 819903*/ ret = call_tmp;
  /* 819907*/ return ret;
}

/* ChapelBase.chpl:868 */
/*  852707 */ static chpl_bool _command_line_cast14(c_string x, int64_t _ln, c_string _fn) {
  /* 1119672 */ chpl_bool call_tmp;
  /* 852724*/ /* 1119674*/ call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
  /* 852739*/ return call_tmp;
}

/* ChapelBase.chpl:1013 */
/*  535042 */ static DefaultDist chpl__autoCopy(DefaultDist x, int64_t _ln, c_string _fn) {
  /* 1272412 */ memory_order local_memory_order_seq_cst;
  /* 1107070 */ DefaultDist ret = NULL;
  /*  535126 */ BaseDist coerce_tmp = NULL;
  /* 1119851 */ BaseDist call_tmp = NULL;
  /* 1119883 */ _ref_atomic_refcnt call_tmp2 = NULL;
  /* 1119890 */ _ref_atomic_int64 call_tmp3 = NULL;
  /* 1119897 */ memory_order default_argorder;
  /* 1119904 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /* 535060*/ /* 1272413*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1107079*/ ret = x;
  /* 1119853*/ call_tmp = ((BaseDist)(ret));
  /* 535131*/ coerce_tmp = call_tmp;
  /* 1119882*/ compilerAssert();
  /* 1276366*/ chpl_check_nil(coerce_tmp, INT64(1014), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1119885*/ call_tmp2 = &((coerce_tmp)->_distCnt);
  /* 1276368*/ chpl_check_nil(call_tmp2, INT64(1014), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1119892*/ call_tmp3 = &((call_tmp2)->_cnt);
  /* 1119899*/ default_argorder = local_memory_order_seq_cst;
  /* 1276370*/ chpl_check_nil(call_tmp3, INT64(1014), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1119906*/ call_tmp4 = &((call_tmp3)->_v);
  /* 1119912*/ atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  /* 535097*/ return x;
}

/* ChapelBase.chpl:1021 */
/* 1014574 */ static DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272628 */ memory_order local_memory_order_seq_cst;
  /* 1121868 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1014638 */ BaseDom coerce_tmp = NULL;
  /* 1122242 */ BaseDom call_tmp = NULL;
  /* 1130356 */ _ref_atomic_refcnt call_tmp2 = NULL;
  /* 1130363 */ _ref_atomic_int64 call_tmp3 = NULL;
  /* 1130370 */ memory_order default_argorder;
  /* 1130377 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /* 1014592*/ /* 1272629*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1121877*/ ret = x;
  /* 1122244*/ call_tmp = ((BaseDom)(ret));
  /* 1014643*/ coerce_tmp = call_tmp;
  /* 1130355*/ compilerAssert();
  /* 1276768*/ chpl_check_nil(coerce_tmp, INT64(1022), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1130358*/ call_tmp2 = &((coerce_tmp)->_domCnt);
  /* 1276770*/ chpl_check_nil(call_tmp2, INT64(1022), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1130365*/ call_tmp3 = &((call_tmp2)->_cnt);
  /* 1130372*/ default_argorder = local_memory_order_seq_cst;
  /* 1276772*/ chpl_check_nil(call_tmp3, INT64(1022), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1130379*/ call_tmp4 = &((call_tmp3)->_v);
  /* 1130385*/ atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  /* 1014629*/ return x;
}

/* ChapelBase.chpl:1021 */
/* 1017854 */ static DefaultAssociativeDom_chpl_taskID_t_F chpl__autoCopy3(DefaultAssociativeDom_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  /* 1272646 */ memory_order local_memory_order_seq_cst;
  /* 1146677 */ DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  /* 1017918 */ BaseDom coerce_tmp = NULL;
  /* 1146838 */ BaseDom call_tmp = NULL;
  /* 1130394 */ _ref_atomic_refcnt call_tmp2 = NULL;
  /* 1130401 */ _ref_atomic_int64 call_tmp3 = NULL;
  /* 1130408 */ memory_order default_argorder;
  /* 1130415 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /* 1017872*/ /* 1272647*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1146686*/ ret = x;
  /* 1146840*/ call_tmp = ((BaseDom)(ret));
  /* 1017923*/ coerce_tmp = call_tmp;
  /* 1130393*/ compilerAssert();
  /* 1276774*/ chpl_check_nil(coerce_tmp, INT64(1022), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1130396*/ call_tmp2 = &((coerce_tmp)->_domCnt);
  /* 1276776*/ chpl_check_nil(call_tmp2, INT64(1022), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1130403*/ call_tmp3 = &((call_tmp2)->_cnt);
  /* 1130410*/ default_argorder = local_memory_order_seq_cst;
  /* 1276778*/ chpl_check_nil(call_tmp3, INT64(1022), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1130417*/ call_tmp4 = &((call_tmp3)->_v);
  /* 1130423*/ atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  /* 1017909*/ return x;
}

/* ChapelBase.chpl:1029 */
/*  722665 */ static DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy4(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272487 */ memory_order local_memory_order_seq_cst;
  /* 1130609 */ DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  /*  722749 */ BaseArr coerce_tmp = NULL;
  /* 1129787 */ BaseArr call_tmp = NULL;
  /* 1140310 */ _ref_atomic_refcnt call_tmp2 = NULL;
  /* 1140317 */ _ref_atomic_int64 call_tmp3 = NULL;
  /* 1140324 */ memory_order default_argorder;
  /* 1140331 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /* 722683*/ /* 1272488*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1130618*/ ret = x;
  /* 1129789*/ call_tmp = ((BaseArr)(ret));
  /* 722754*/ coerce_tmp = call_tmp;
  /* 1140309*/ compilerAssert();
  /* 1277090*/ chpl_check_nil(coerce_tmp, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140312*/ call_tmp2 = &((coerce_tmp)->_arrCnt);
  /* 1277092*/ chpl_check_nil(call_tmp2, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140319*/ call_tmp3 = &((call_tmp2)->_cnt);
  /* 1140326*/ default_argorder = local_memory_order_seq_cst;
  /* 1277094*/ chpl_check_nil(call_tmp3, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140333*/ call_tmp4 = &((call_tmp3)->_v);
  /* 1140339*/ atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  /* 722720*/ return x;
}

/* ChapelBase.chpl:1029 */
/* 1015472 */ static DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy5(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272634 */ memory_order local_memory_order_seq_cst;
  /* 1135567 */ DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  /* 1015536 */ BaseArr coerce_tmp = NULL;
  /* 1135302 */ BaseArr call_tmp = NULL;
  /* 1140348 */ _ref_atomic_refcnt call_tmp2 = NULL;
  /* 1140355 */ _ref_atomic_int64 call_tmp3 = NULL;
  /* 1140362 */ memory_order default_argorder;
  /* 1140369 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /* 1015490*/ /* 1272635*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1135576*/ ret = x;
  /* 1135304*/ call_tmp = ((BaseArr)(ret));
  /* 1015541*/ coerce_tmp = call_tmp;
  /* 1140347*/ compilerAssert();
  /* 1277096*/ chpl_check_nil(coerce_tmp, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140350*/ call_tmp2 = &((coerce_tmp)->_arrCnt);
  /* 1277098*/ chpl_check_nil(call_tmp2, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140357*/ call_tmp3 = &((call_tmp2)->_cnt);
  /* 1140364*/ default_argorder = local_memory_order_seq_cst;
  /* 1277100*/ chpl_check_nil(call_tmp3, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140371*/ call_tmp4 = &((call_tmp3)->_v);
  /* 1140377*/ atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  /* 1015527*/ return x;
}

/* ChapelBase.chpl:1029 */
/* 1017750 */ static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl__autoCopy6(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272640 */ memory_order local_memory_order_seq_cst;
  /* 1145869 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = NULL;
  /* 1017814 */ BaseArr coerce_tmp = NULL;
  /* 1145553 */ BaseArr call_tmp = NULL;
  /* 1140386 */ _ref_atomic_refcnt call_tmp2 = NULL;
  /* 1140393 */ _ref_atomic_int64 call_tmp3 = NULL;
  /* 1140400 */ memory_order default_argorder;
  /* 1140407 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /* 1017768*/ /* 1272641*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1145878*/ ret = x;
  /* 1145555*/ call_tmp = ((BaseArr)(ret));
  /* 1017819*/ coerce_tmp = call_tmp;
  /* 1140385*/ compilerAssert();
  /* 1277102*/ chpl_check_nil(coerce_tmp, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140388*/ call_tmp2 = &((coerce_tmp)->_arrCnt);
  /* 1277104*/ chpl_check_nil(call_tmp2, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140395*/ call_tmp3 = &((call_tmp2)->_cnt);
  /* 1140402*/ default_argorder = local_memory_order_seq_cst;
  /* 1277106*/ chpl_check_nil(call_tmp3, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140409*/ call_tmp4 = &((call_tmp3)->_v);
  /* 1140415*/ atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  /* 1017805*/ return x;
}

/* ChapelBase.chpl:1029 */
/* 1017958 */ static DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl__autoCopy7(DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272652 */ memory_order local_memory_order_seq_cst;
  /* 1148540 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = NULL;
  /* 1018022 */ BaseArr coerce_tmp = NULL;
  /* 1148224 */ BaseArr call_tmp = NULL;
  /* 1140424 */ _ref_atomic_refcnt call_tmp2 = NULL;
  /* 1140431 */ _ref_atomic_int64 call_tmp3 = NULL;
  /* 1140438 */ memory_order default_argorder;
  /* 1140445 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /* 1017976*/ /* 1272653*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1148549*/ ret = x;
  /* 1148226*/ call_tmp = ((BaseArr)(ret));
  /* 1018027*/ coerce_tmp = call_tmp;
  /* 1140423*/ compilerAssert();
  /* 1277108*/ chpl_check_nil(coerce_tmp, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140426*/ call_tmp2 = &((coerce_tmp)->_arrCnt);
  /* 1277110*/ chpl_check_nil(call_tmp2, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140433*/ call_tmp3 = &((call_tmp2)->_cnt);
  /* 1140440*/ default_argorder = local_memory_order_seq_cst;
  /* 1277112*/ chpl_check_nil(call_tmp3, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140447*/ call_tmp4 = &((call_tmp3)->_v);
  /* 1140453*/ atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  /* 1018013*/ return x;
}

/* ChapelBase.chpl:1029 */
/* 1018062 */ static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl__autoCopy8(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  /* 1272658 */ memory_order local_memory_order_seq_cst;
  /* 1149268 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  /* 1018126 */ BaseArr coerce_tmp = NULL;
  /* 1149003 */ BaseArr call_tmp = NULL;
  /* 1140462 */ _ref_atomic_refcnt call_tmp2 = NULL;
  /* 1140469 */ _ref_atomic_int64 call_tmp3 = NULL;
  /* 1140476 */ memory_order default_argorder;
  /* 1140483 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /* 1018080*/ /* 1272659*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1149277*/ ret = x;
  /* 1149005*/ call_tmp = ((BaseArr)(ret));
  /* 1018131*/ coerce_tmp = call_tmp;
  /* 1140461*/ compilerAssert();
  /* 1277114*/ chpl_check_nil(coerce_tmp, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140464*/ call_tmp2 = &((coerce_tmp)->_arrCnt);
  /* 1277116*/ chpl_check_nil(call_tmp2, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140471*/ call_tmp3 = &((call_tmp2)->_cnt);
  /* 1140478*/ default_argorder = local_memory_order_seq_cst;
  /* 1277118*/ chpl_check_nil(call_tmp3, INT64(1030), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1140485*/ call_tmp4 = &((call_tmp3)->_v);
  /* 1140491*/ atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  /* 1018117*/ return x;
}

/* ChapelBase.chpl:1074 */
/* 1014508 */ static void chpl__autoDestroy(DefaultDist x, int64_t _ln, c_string _fn) {
  /* 1014515*/ /* 1275682*/ chpl_check_nil(x, INT64(1075), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1034203*/ chpl___TILDE__distribution(x, _ln, _fn);
  /* 1014518*/ return;
}

/* ChapelBase.chpl:1079 */
/* 1014660 */ static void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1014667*/ /* 1275684*/ chpl_check_nil(x, INT64(1080), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1034221*/ chpl___TILDE__domain(x, _ln, _fn);
  /* 1014670*/ return;
}

/* ChapelBase.chpl:1079 */
/* 1017940 */ static void chpl__autoDestroy3(DefaultAssociativeDom_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  /* 1017947*/ /* 1275692*/ chpl_check_nil(x, INT64(1080), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1034317*/ chpl___TILDE__domain2(x, _ln, _fn);
  /* 1017950*/ return;
}

/* ChapelBase.chpl:1084 */
/* 1014910 */ static void chpl__autoDestroy4(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1014917*/ /* 1275686*/ chpl_check_nil(x, INT64(1085), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1034231*/ chpl___TILDE__array(x, _ln, _fn);
  /* 1014920*/ return;
}

/* ChapelBase.chpl:1084 */
/* 1015558 */ static void chpl__autoDestroy5(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1015565*/ /* 1275688*/ chpl_check_nil(x, INT64(1085), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1034241*/ chpl___TILDE__array2(x, _ln, _fn);
  /* 1015568*/ return;
}

/* ChapelBase.chpl:1084 */
/* 1017836 */ static void chpl__autoDestroy6(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1017843*/ /* 1275690*/ chpl_check_nil(x, INT64(1085), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1034315*/ chpl___TILDE__array3(x, _ln, _fn);
  /* 1017846*/ return;
}

/* ChapelBase.chpl:1084 */
/* 1018044 */ static void chpl__autoDestroy7(DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1018051*/ /* 1275694*/ chpl_check_nil(x, INT64(1085), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1034319*/ chpl___TILDE__array4(x, _ln, _fn);
  /* 1018054*/ return;
}

/* ChapelBase.chpl:1084 */
/* 1018148 */ static void chpl__autoDestroy8(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  /* 1018155*/ /* 1275696*/ chpl_check_nil(x, INT64(1085), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelBase.chpl");
  /* 1034321*/ chpl___TILDE__array5(x, _ln, _fn);
  /* 1018158*/ return;
}

