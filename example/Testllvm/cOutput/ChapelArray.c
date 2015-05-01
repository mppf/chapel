/* ChapelArray.chpl:23 */
/*  235311 */ static void chpl__init_ChapelArray(int64_t _ln, c_string _fn) {
  /* 1274065 */ c_string modFormatStr;
  /* 1274066 */ c_string modStr;
  /* 1274082 */ _ref_int32_t refIndentLevel = NULL;
  /* 1096870 */ atomic_int64 this7;
  /* 1096872 */ atomic_int_least64_t ret;
  /* 1096874 */ atomic_int_least64_t type_tmp;
  /* 1096879 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1096893 */ atomic_int64 wrap_call_tmp;
  /* 235312*/ /* 1274101*/ if (chpl__init_ChapelArray_p) /* 1274102*/ {
    /* 1274098*/ goto _exit_chpl__init_ChapelArray;
  }
  /* 1274074*/ modFormatStr = "%*s\n";
  /* 1274077*/ modStr = "ChapelArray";
  /* 1274080*/ printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  /* 1274086*/ refIndentLevel = &moduleInitLevel;
  /* 1274089*/ *(refIndentLevel) += INT64(1);
  /* 1274063*/ chpl__init_ChapelArray_p = true;
  /* 1273245*/ {
    /* 1273246*/ chpl__init_ChapelBase(_ln, _fn);
    /* 1273248*/ chpl__init_ChapelTuple(_ln, _fn);
    /* 1273250*/ chpl__init_ChapelLocale(_ln, _fn);
  }
  /* 1096876*/ ret = type_tmp;
  /* 1096881*/ _ref_tmp_ = &ret;
  /* 1096886*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  /* 1096889*/ (&this7)->_v = ret;
  /* 1096895*/ wrap_call_tmp = _construct_atomic_int64(ret, &this7, _ln, _fn);
  /* 296778*/ numPrivateObjects = wrap_call_tmp;
  /* 1274092*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelArray:;
  /* 278612*/ return;
}

/* ChapelArray.chpl:123 */
/* 1039665 */ static void _newArray(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1130677 */ DefaultRectangularArr_locale_1_int64_t_F this7 = NULL;
  /* 1130695 */ DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp = NULL;
  /* 1039669*/ /* 1130679*/ this7 = nil;
  /* 1130687*/ this7 = value;
  /* 1130697*/ wrap_call_tmp = _construct__array(value, this7, _ln, _fn);
  /* 1039698*/ *(_retArg) = chpl__autoCopy4(wrap_call_tmp, _ln, _fn);
  /* 1039692*/ return;
}

/* ChapelArray.chpl:123 */
/* 1040543 */ static void _newArray2(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1135601 */ DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
  /* 1135619 */ DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp = NULL;
  /* 1040547*/ /* 1135603*/ this7 = nil;
  /* 1135611*/ this7 = value;
  /* 1135621*/ wrap_call_tmp = _construct__array2(value, this7, _ln, _fn);
  /* 1040576*/ *(_retArg) = chpl__autoCopy5(wrap_call_tmp, _ln, _fn);
  /* 1040570*/ return;
}

/* ChapelArray.chpl:123 */
/* 1042159 */ static void _newArray3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F value, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1145920 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7 = NULL;
  /* 1145938 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F wrap_call_tmp = NULL;
  /* 1042163*/ /* 1145922*/ this7 = nil;
  /* 1145930*/ this7 = value;
  /* 1145940*/ wrap_call_tmp = _construct__array3(value, this7, _ln, _fn);
  /* 1042192*/ *(_retArg) = chpl__autoCopy6(wrap_call_tmp, _ln, _fn);
  /* 1042186*/ return;
}

/* ChapelArray.chpl:123 */
/* 1042327 */ static void _newArray5(DefaultRectangularArr_chpldev_Task_1_int64_t_F value, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1148591 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F this7 = NULL;
  /* 1148609 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F wrap_call_tmp = NULL;
  /* 1042331*/ /* 1148593*/ this7 = nil;
  /* 1148601*/ this7 = value;
  /* 1148611*/ wrap_call_tmp = _construct__array4(value, this7, _ln, _fn);
  /* 1042360*/ *(_retArg) = chpl__autoCopy7(wrap_call_tmp, _ln, _fn);
  /* 1042354*/ return;
}

/* ChapelArray.chpl:123 */
/* 1042257 */ static void _newArray4(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F value, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1149285 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7 = NULL;
  /* 1149303 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F wrap_call_tmp = NULL;
  /* 1042261*/ /* 1149287*/ this7 = nil;
  /* 1149295*/ this7 = value;
  /* 1149305*/ wrap_call_tmp = _construct__array5(value, this7, _ln, _fn);
  /* 1042290*/ *(_retArg) = chpl__autoCopy8(wrap_call_tmp, _ln, _fn);
  /* 1042284*/ return;
}

/* ChapelArray.chpl:130 */
/* 1049705 */ static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1122102 */ DefaultRectangularDom_1_int64_t_F this7 = NULL;
  /* 1122120 */ DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
  /* 1049709*/ /* 1122104*/ this7 = nil;
  /* 1122112*/ this7 = value;
  /* 1122122*/ wrap_call_tmp = _construct__domain(value, this7, _ln, _fn);
  /* 1049738*/ *(_retArg) = chpl__autoCopy2(wrap_call_tmp, _ln, _fn);
  /* 1049732*/ return;
}

/* ChapelArray.chpl:130 */
/* 1050881 */ static void _newDomain2(DefaultAssociativeDom_chpl_taskID_t_F value, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1146728 */ DefaultAssociativeDom_chpl_taskID_t_F this7 = NULL;
  /* 1146746 */ DefaultAssociativeDom_chpl_taskID_t_F wrap_call_tmp = NULL;
  /* 1050885*/ /* 1146730*/ this7 = nil;
  /* 1146738*/ this7 = value;
  /* 1146748*/ wrap_call_tmp = _construct__domain2(value, this7, _ln, _fn);
  /* 1050914*/ *(_retArg) = chpl__autoCopy3(wrap_call_tmp, _ln, _fn);
  /* 1050908*/ return;
}

/* ChapelArray.chpl:137 */
/* 1040736 */ static void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1122072 */ DefaultRectangularDom_1_int64_t_F this7 = NULL;
  /* 1122090 */ DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
  /* 1040740*/ /* 1122074*/ this7 = nil;
  /* 1122082*/ this7 = value;
  /* 1122092*/ wrap_call_tmp = _construct__domain(value, this7, _ln, _fn);
  /* 1040769*/ *(_retArg) = chpl__autoCopy2(wrap_call_tmp, _ln, _fn);
  /* 1040763*/ return;
}

/* ChapelArray.chpl:144 */
/* 1039312 */ static void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  /* 1039320 */ DefaultDist call_tmp = NULL;
  /* 1039316*/ /* 1275700*/ chpl_check_nil(value, INT64(148), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1039322*/ call_tmp = _distribution(value, _ln, _fn);
  /* 1039345*/ *(_retArg) = chpl__autoCopy(call_tmp, _ln, _fn);
  /* 1039339*/ return;
}

/* ChapelArray.chpl:151 */
/* 1039527 */ static void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  /* 1039535 */ DefaultDist call_tmp = NULL;
  /* 1039531*/ /* 1275704*/ chpl_check_nil(value, INT64(155), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1039537*/ call_tmp = _distribution(value, _ln, _fn);
  /* 1039560*/ *(_retArg) = chpl__autoCopy(call_tmp, _ln, _fn);
  /* 1039554*/ return;
}

/* ChapelArray.chpl:163 */
/* 1051160 */ static void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051167 */ DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  /* 1051174 */ DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
  /* 1051178 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051164*/ /* 1275736*/ chpl_check_nil(d, INT64(166), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051169*/ call_tmp = newRectangularDom(d, _ln, _fn);
  /* 1051180*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1051185*/ _newDomain(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051204*/ *(_retArg) = call_tmp2;
  /* 1051198*/ return;
}

/* ChapelArray.chpl:163 */
/*  536458 */ static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d, int64_t _ln, c_string _fn) {
  /* 1023901 */ chpl___RuntimeTypeInfo _return_tmp_;
  /* 1023900*/ /* 1023903*/ (&_return_tmp_)->d = d;
  /* 1023907*/ return _return_tmp_;
}

/* ChapelArray.chpl:169 */
/* 1051439 */ static void chpl__convertRuntimeTypeToValue2(DefaultDist d, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051446 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp = NULL;
  /* 1051453 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp2 = NULL;
  /* 1051457 */ _ref_DefaultAssociativeDom_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051443*/ /* 1275746*/ chpl_check_nil(d, INT64(171), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051448*/ call_tmp = newAssociativeDom(d, _ln, _fn);
  /* 1051459*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1051464*/ _newDomain2(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051483*/ *(_retArg) = call_tmp2;
  /* 1051477*/ return;
}

/* ChapelArray.chpl:169 */
/*  744046 */ static chpl___RuntimeTypeInfo2 chpl__buildDomainRuntimeType2(DefaultDist d, int64_t _ln, c_string _fn) {
  /* 1024114 */ chpl___RuntimeTypeInfo2 _return_tmp_;
  /* 1024113*/ /* 1024116*/ (&_return_tmp_)->d = d;
  /* 1024120*/ return _return_tmp_;
}

/* ChapelArray.chpl:191 */
/*  573226 */ static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  /*  573399 */ DefaultDist call_tmp = NULL;
  /* 1039521 */ _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  /*  573455 */ chpl___RuntimeTypeInfo call_tmp2;
  /* 573396*/ /* 1039524*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1275274*/ chpl_check_nil(dom, INT64(193), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 573404*/ dist(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 573457*/ call_tmp2 = chpl__buildDomainRuntimeType(call_tmp, _ln, _fn);
  /* 1036739*/ chpl__autoDestroy(call_tmp, _ln, _fn);
  /* 573469*/ return call_tmp2;
}

/* ChapelArray.chpl:217 */
/* 1051220 */ static void chpl__convertRuntimeTypeToValue3(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051227 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  /* 1051231 */ _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051224*/ /* 1051233*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1275738*/ chpl_check_nil(dom, INT64(218), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051238*/ buildArray(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051257*/ *(_retArg) = call_tmp;
  /* 1051251*/ return;
}

/* ChapelArray.chpl:217 */
/*  577417 */ static chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  /* 1023968 */ chpl___RuntimeTypeInfo3 _return_tmp_;
  /* 1023967*/ /* 1023970*/ (&_return_tmp_)->dom = dom;
  /* 1023974*/ return _return_tmp_;
}

/* ChapelArray.chpl:217 */
/* 1051273 */ static void chpl__convertRuntimeTypeToValue4(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051280 */ DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
  /* 1051284 */ _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051277*/ /* 1051286*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1275740*/ chpl_check_nil(dom, INT64(218), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051291*/ buildArray2(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051310*/ *(_retArg) = call_tmp;
  /* 1051304*/ return;
}

/* ChapelArray.chpl:217 */
/*  636347 */ static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  /* 1024035 */ chpl___RuntimeTypeInfo4 _return_tmp_;
  /* 1024034*/ /* 1024037*/ (&_return_tmp_)->dom = dom;
  /* 1024041*/ return _return_tmp_;
}

/* ChapelArray.chpl:217 */
/* 1051333 */ static void chpl__convertRuntimeTypeToValue5(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051340 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = NULL;
  /* 1051344 */ _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051337*/ /* 1051346*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1275742*/ chpl_check_nil(dom, INT64(218), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051351*/ buildArray3(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051370*/ *(_retArg) = call_tmp;
  /* 1051364*/ return;
}

/* ChapelArray.chpl:217 */
/*  748815 */ static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType3(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  /* 1024181 */ chpl___RuntimeTypeInfo5 _return_tmp_;
  /* 1024180*/ /* 1024183*/ (&_return_tmp_)->dom = dom;
  /* 1024187*/ return _return_tmp_;
}

/* ChapelArray.chpl:217 */
/* 1051492 */ static void chpl__convertRuntimeTypeToValue7(DefaultAssociativeDom_chpl_taskID_t_F dom, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051499 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp = NULL;
  /* 1051503 */ _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051496*/ /* 1051505*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1275748*/ chpl_check_nil(dom, INT64(218), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051510*/ buildArray4(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051529*/ *(_retArg) = call_tmp;
  /* 1051523*/ return;
}

/* ChapelArray.chpl:217 */
/*  772316 */ static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType4(DefaultAssociativeDom_chpl_taskID_t_F dom, int64_t _ln, c_string _fn) {
  /* 1024248 */ chpl___RuntimeTypeInfo6 _return_tmp_;
  /* 1024247*/ /* 1024250*/ (&_return_tmp_)->dom = dom;
  /* 1024254*/ return _return_tmp_;
}

/* ChapelArray.chpl:217 */
/* 1051386 */ static void chpl__convertRuntimeTypeToValue6(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051393 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp = NULL;
  /* 1051397 */ _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051390*/ /* 1051399*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1275744*/ chpl_check_nil(dom, INT64(218), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051404*/ buildArray5(dom, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051423*/ *(_retArg) = call_tmp;
  /* 1051417*/ return;
}

/* ChapelArray.chpl:217 */
/*  773260 */ static chpl___RuntimeTypeInfo7 chpl__buildArrayRuntimeType5(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
  /* 1024315 */ chpl___RuntimeTypeInfo7 _return_tmp_;
  /* 1024314*/ /* 1024317*/ (&_return_tmp_)->dom = dom;
  /* 1024321*/ return _return_tmp_;
}

/* DefaultRectangular.chpl:281 */
/* 1059649 */ static void coforall_fn(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const chpl__iter, int64_t _ln, c_string _fn) {
  /* 1258784 */ range_int64_t_bounded_F newRet_x1;
  /* 1059665 */ _tuple_1_star_range_int64_t_bounded_F followMe;
  /* 1059668 */ _tuple_1_star_range_int64_t_bounded_F type_tmp;
  /* 1120466 */ range_int64_t_bounded_F this7;
  /* 1120508 */ range_int64_t_bounded_F wrap_call_tmp;
  /* 1059693 */ _tuple_2_star_int64_t const_tmp;
  /* 1269540 */ int64_t _tmp_x1;
  /* 1269542 */ int64_t _tmp_x2;
  /* 1059697 */ _ref_range_int64_t_bounded_F call_tmp = NULL;
  /* 1059699 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  /* 1059711 */ int64_t call_tmp2;
  /* 1059718 */ _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  /* 1059720 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  /* 1128897 */ int64_t ret;
  /* 1059739 */ _ref_range_int64_t_bounded_F call_tmp4 = NULL;
  /* 1059741 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_3 = NULL;
  /* 1128536 */ int64_t ret2;
  /* 1059760 */ _ref_range_int64_t_bounded_F call_tmp5 = NULL;
  /* 1059762 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_4 = NULL;
  /* 1128546 */ int64_t ret3;
  /* 1059783 */ _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  /* 1059839 */ _ref_range_int64_t_bounded_F call_tmp6 = NULL;
  /* 1059841 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_5 = NULL;
  /* 1059853 */ range_int64_t_bounded_F call_tmp7;
  /* 1059857 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  /* 1245436 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tmp_x12 = NULL;
  /* 1245438 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tmp_x22 = NULL;
  /* 1173028 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F coerce_tmp = NULL;
  /* 1173035 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret4 = NULL;
  /* 1173454 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F coerce_tmp2 = NULL;
  /* 1173461 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret5 = NULL;
  /* 1247036 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _ic__F0_this = NULL;
  /* 1261259 */ range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x1;
  /* 1261267 */ range_int64_t_bounded_F _ic__F9_block_x1;
  /* 1247060 */ int64_t _ic__F12_i;
  /* 1247064 */ int64_t _ic__F14_end;
  /* 1247129 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _ic__F0_this2 = NULL;
  /* 1261285 */ range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x12;
  /* 1261293 */ range_int64_t_bounded_F _ic__F9_block_x12;
  /* 1247153 */ int64_t _ic__F12_i2;
  /* 1247157 */ int64_t _ic__F14_end2;
  /* 1177979 */ _ref_range_int64_t_bounded_F call_tmp8 = NULL;
  /* 1177981 */ _ref_range_int64_t_bounded_F call_tmp9 = NULL;
  /* 1177983 */ DefaultRectangularDom_1_int64_t_F this8 = NULL;
  /* 1177987 */ _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  /* 1177989 */ DefaultRectangularDom_1_int64_t_F this9 = NULL;
  /* 1177993 */ range_int64_t_bounded_F call_tmp11;
  /* 1177995 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  /* 1177999 */ _ref_range_int64_t_bounded_F this10 = NULL;
  /* 1178007 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  /* 1178070 */ DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  /* 1178112 */ _tuple_1_star_int64_t default_argoffset;
  /* 1178114 */ _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_4 = NULL;
  /* 1178395 */ range_int64_t_bounded_F this11;
  /* 1178437 */ range_int64_t_bounded_F wrap_call_tmp2;
  /* 1178479 */ _ref__tuple_1_star_range_int64_t_bounded_F call_tmp12 = NULL;
  /* 1178491 */ int64_t ret7;
  /* 1178508 */ int64_t ret8;
  /* 1178515 */ int64_t call_tmp13;
  /* 1178532 */ _ref__tuple_1_star_range_int64_t_bounded_F call_tmp14 = NULL;
  /* 1178544 */ int64_t ret9;
  /* 1178561 */ int64_t ret10;
  /* 1178568 */ int64_t call_tmp15;
  /* 1263707 */ range_int64_t_bounded_F _ic__F0_this3;
  /* 1178723 */ int64_t ret11;
  /* 1178744 */ int64_t ret12;
  /* 1178760 */ _ref_range_int64_t_bounded_F call_tmp16 = NULL;
  /* 1178762 */ _ref_range_int64_t_bounded_F call_tmp17 = NULL;
  /* 1178764 */ DefaultRectangularDom_1_int64_t_F this12 = NULL;
  /* 1178768 */ _ref_range_int64_t_bounded_F call_tmp18 = NULL;
  /* 1178770 */ DefaultRectangularDom_1_int64_t_F this13 = NULL;
  /* 1178774 */ range_int64_t_bounded_F call_tmp19;
  /* 1178776 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  /* 1178780 */ _ref_range_int64_t_bounded_F this14 = NULL;
  /* 1178788 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T2 = NULL;
  /* 1178851 */ DefaultRectangularDom_1_int64_t_F ret13 = NULL;
  /* 1178893 */ _tuple_1_star_int64_t default_argoffset2;
  /* 1178895 */ _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_6 = NULL;
  /* 1179176 */ range_int64_t_bounded_F this15;
  /* 1179218 */ range_int64_t_bounded_F wrap_call_tmp3;
  /* 1179260 */ _ref__tuple_1_star_range_int64_t_bounded_F call_tmp20 = NULL;
  /* 1179272 */ int64_t ret14;
  /* 1179289 */ int64_t ret15;
  /* 1179296 */ int64_t call_tmp21;
  /* 1179313 */ _ref__tuple_1_star_range_int64_t_bounded_F call_tmp22 = NULL;
  /* 1179325 */ int64_t ret16;
  /* 1179342 */ int64_t ret17;
  /* 1179349 */ int64_t call_tmp23;
  /* 1263727 */ range_int64_t_bounded_F _ic__F0_this4;
  /* 1179504 */ int64_t ret18;
  /* 1179525 */ int64_t ret19;
  /* 1072585 */ chpl_bool isFinished;
  /* 1072584 */ chpl_bool hasMore;
  /* 1179945 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T3 = NULL;
  /* 1179961 */ _tuple_1_star_int64_t ind;
  /* 1179963 */ _tuple_1_star_int64_t this16;
  /* 1179972 */ DefaultRectangularDom_1_int64_t_F ret20 = NULL;
  /* 1179979 */ chpl_bool call_tmp24;
  /* 1179987 */ chpl_bool call_tmp25;
  /* 1179995 */ chpl_string call_tmp26;
  /* 1180008 */ int64_t sum;
  /* 1266402 */ int64_t ret_x1;
  /* 1266406 */ _ref__tuple_1_star_int64_t ret_ = NULL;
  /* 1180025 */ int64_t coerce_tmp3;
  /* 1180039 */ int64_t call_tmp27;
  /* 1180049 */ _ddata_chpl_TableEntry_chpl_taskID_t ret21 = NULL;
  /* 1180056 */ _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp4 = NULL;
  /* 1180061 */ _ref_chpl_TableEntry_chpl_taskID_t call_tmp28 = NULL;
  /* 1180176 */ int64_t T4;
  /* 1179810 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T5 = NULL;
  /* 1179826 */ _tuple_1_star_int64_t ind2;
  /* 1179828 */ _tuple_1_star_int64_t this17;
  /* 1179837 */ DefaultRectangularDom_1_int64_t_F ret22 = NULL;
  /* 1179844 */ chpl_bool call_tmp29;
  /* 1179852 */ chpl_bool call_tmp30;
  /* 1179860 */ chpl_string call_tmp31;
  /* 1179873 */ int64_t sum2;
  /* 1266379 */ int64_t ret_x12;
  /* 1266383 */ _ref__tuple_1_star_int64_t ret_2 = NULL;
  /* 1179890 */ int64_t coerce_tmp5;
  /* 1179904 */ int64_t call_tmp32;
  /* 1179914 */ _ddata_chpl_TableEntry_chpl_taskID_t ret23 = NULL;
  /* 1179921 */ _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp6 = NULL;
  /* 1179926 */ _ref_chpl_TableEntry_chpl_taskID_t call_tmp33 = NULL;
  /* 1059976 */ chpl_TableEntry_chpl_taskID_t coerce_tmp7;
  /* 1180152 */ int64_t T6;
  /* 1180366 */ int64_t T7;
  /* 1180383 */ int64_t T8;
  /* 1180200 */ int64_t T9;
  /* 1059661*/ /* 1120468*/ (&this7)->_low = INT64(0);
  /* 1120472*/ (&this7)->_high = INT64(0);
  /* 1120476*/ (&this7)->_stride = INT64(0);
  /* 1120480*/ (&this7)->_alignment = INT64(0);
  /* 1120484*/ (&this7)->_aligned = false;
  /* 1120488*/ (&this7)->_low = INT64(1);
  /* 1120492*/ (&this7)->_high = INT64(0);
  /* 1120496*/ (&this7)->_stride = INT64(1);
  /* 1120500*/ (&this7)->_alignment = INT64(0);
  /* 1120504*/ (&this7)->_aligned = false;
  /* 1120510*/ wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this7, _ln, _fn);
  /* 1258996*/ *(type_tmp + INT64(0)) = wrap_call_tmp;
  /* 1123509*/ *(type_tmp + INT64(0)) = *(*(locBlock) + INT64(0));
  /* 1059690*/ *(followMe + INT64(0)) = *(*(locBlock) + INT64(0));
  /* 1059701*/ _ref_tmp_ = locBlock;
  /* 1059705*/ call_tmp = this5(_ref_tmp_, parDim, _ln, _fn);
  /* 1059713*/ call_tmp2 = length(call_tmp, _ln, _fn);
  /* 1059722*/ _ref_tmp_2 = locBlock;
  /* 1059726*/ call_tmp3 = this5(_ref_tmp_2, parDim, _ln, _fn);
  /* 1276660*/ chpl_check_nil(call_tmp3, INT64(285), "/export/home/hzhang86/chapel/chapel/modules/internal/DefaultRectangular.chpl");
  /* 1128899*/ ret = (call_tmp3)->_high;
  /* 1059743*/ _ref_tmp_3 = locBlock;
  /* 1059747*/ call_tmp4 = this5(_ref_tmp_3, parDim, _ln, _fn);
  /* 1276648*/ chpl_check_nil(call_tmp4, INT64(286), "/export/home/hzhang86/chapel/chapel/modules/internal/DefaultRectangular.chpl");
  /* 1128538*/ ret2 = (call_tmp4)->_low;
  /* 1059764*/ _ref_tmp_4 = locBlock;
  /* 1059768*/ call_tmp5 = this5(_ref_tmp_4, parDim, _ln, _fn);
  /* 1276650*/ chpl_check_nil(call_tmp5, INT64(287), "/export/home/hzhang86/chapel/chapel/modules/internal/DefaultRectangular.chpl");
  /* 1128548*/ ret3 = (call_tmp5)->_low;
  /* 1059785*/ ret_to_arg_ref_tmp_ = &const_tmp;
  /* 1059790*/ _computeBlock(call_tmp2, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1269548*/ _tmp_x1 = *(const_tmp + INT64(0));
  /* 1269553*/ _tmp_x2 = *(const_tmp + INT64(1));
  /* 1059843*/ _ref_tmp_5 = &followMe;
  /* 1059847*/ call_tmp6 = this5(_ref_tmp_5, parDim, _ln, _fn);
  /* 1059859*/ ret_to_arg_ref_tmp_2 = &call_tmp7;
  /* 1059864*/ _build_range(_tmp_x1, _tmp_x2, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1123533*/ *(call_tmp6) = call_tmp7;
  /* 1258790*/ newRet_x1 = *(followMe + INT64(0));
  /* 1245444*/ _tmp_x12 = *(*(chpl__iter) + INT64(0));
  /* 1245449*/ _tmp_x22 = *(*(chpl__iter) + INT64(1));
  /* 1173030*/ coerce_tmp = _tmp_x12;
  /* 1173037*/ ret4 = coerce_tmp;
  /* 1173456*/ coerce_tmp2 = _tmp_x22;
  /* 1173463*/ ret5 = coerce_tmp2;
  /* 1175454*/ _ic__F0_this = ret4;
  /* 1175550*/ _ic__F0_this2 = ret5;
  /* 1178065*/ T = ret4;
  /* 1277850*/ chpl_check_nil(T, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1178072*/ ret6 = (T)->dom;
  /* 1178116*/ ret_to_arg_ref_tmp_4 = &default_argoffset;
  /* 1178121*/ createTuple(INT64(0), ret_to_arg_ref_tmp_4, _ln, _fn);
  /* 1259595*/ _ic__F8__formal_tmp_followThis_x1 = newRet_x1;
  /* 1178397*/ (&this11)->_low = INT64(0);
  /* 1178401*/ (&this11)->_high = INT64(0);
  /* 1178405*/ (&this11)->_stride = INT64(0);
  /* 1178409*/ (&this11)->_alignment = INT64(0);
  /* 1178413*/ (&this11)->_aligned = false;
  /* 1178417*/ (&this11)->_low = INT64(1);
  /* 1178421*/ (&this11)->_high = INT64(0);
  /* 1178425*/ (&this11)->_stride = INT64(1);
  /* 1178429*/ (&this11)->_alignment = INT64(0);
  /* 1178433*/ (&this11)->_aligned = false;
  /* 1178439*/ wrap_call_tmp2 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this11, _ln, _fn);
  /* 1259602*/ _ic__F9_block_x1 = wrap_call_tmp2;
  /* 1178464*/ call_tmp8 = &_ic__F9_block_x1;
  /* 1178474*/ this8 = ret6;
  /* 1277852*/ chpl_check_nil(this8, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1178481*/ call_tmp12 = &((this8)->ranges);
  /* 1178486*/ call_tmp9 = (*(call_tmp12) + INT64(0));
  /* 1277854*/ chpl_check_nil(call_tmp9, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1178493*/ ret7 = (call_tmp9)->_low;
  /* 1178510*/ ret8 = (&_ic__F8__formal_tmp_followThis_x1)->_low;
  /* 1178517*/ call_tmp13 = (ret7 + ret8);
  /* 1178527*/ this9 = ret6;
  /* 1277856*/ chpl_check_nil(this9, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1178534*/ call_tmp14 = &((this9)->ranges);
  /* 1178539*/ call_tmp10 = (*(call_tmp14) + INT64(0));
  /* 1277858*/ chpl_check_nil(call_tmp10, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1178546*/ ret9 = (call_tmp10)->_low;
  /* 1178563*/ ret10 = (&_ic__F8__formal_tmp_followThis_x1)->_high;
  /* 1178570*/ call_tmp15 = (ret9 + ret10);
  /* 1178575*/ ret_to_arg_ref_tmp_3 = &call_tmp11;
  /* 1178580*/ _build_range(call_tmp13, call_tmp15, ret_to_arg_ref_tmp_3, _ln, _fn);
  /* 1178584*/ *(call_tmp8) = call_tmp11;
  /* 1178687*/ _ic__F0_this3 = _ic__F9_block_x1;
  /* 1178700*/ this10 = &_ic__F0_this3;
  /* 1178710*/ checkIfIterWillOverflow(this10, true, _ln, _fn);
  /* 1178725*/ ret11 = (&_ic__F0_this3)->_low;
  /* 1178746*/ ret12 = (&_ic__F0_this3)->_high;
  /* 1178751*/ _ic__F14_end = ret12;
  /* 1178846*/ T2 = ret5;
  /* 1277860*/ chpl_check_nil(T2, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1178853*/ ret13 = (T2)->dom;
  /* 1178897*/ ret_to_arg_ref_tmp_6 = &default_argoffset2;
  /* 1178902*/ createTuple(INT64(0), ret_to_arg_ref_tmp_6, _ln, _fn);
  /* 1259710*/ _ic__F8__formal_tmp_followThis_x12 = newRet_x1;
  /* 1179178*/ (&this15)->_low = INT64(0);
  /* 1179182*/ (&this15)->_high = INT64(0);
  /* 1179186*/ (&this15)->_stride = INT64(0);
  /* 1179190*/ (&this15)->_alignment = INT64(0);
  /* 1179194*/ (&this15)->_aligned = false;
  /* 1179198*/ (&this15)->_low = INT64(1);
  /* 1179202*/ (&this15)->_high = INT64(0);
  /* 1179206*/ (&this15)->_stride = INT64(1);
  /* 1179210*/ (&this15)->_alignment = INT64(0);
  /* 1179214*/ (&this15)->_aligned = false;
  /* 1179220*/ wrap_call_tmp3 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this15, _ln, _fn);
  /* 1259717*/ _ic__F9_block_x12 = wrap_call_tmp3;
  /* 1179245*/ call_tmp16 = &_ic__F9_block_x12;
  /* 1179255*/ this12 = ret13;
  /* 1277862*/ chpl_check_nil(this12, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1179262*/ call_tmp20 = &((this12)->ranges);
  /* 1179267*/ call_tmp17 = (*(call_tmp20) + INT64(0));
  /* 1277864*/ chpl_check_nil(call_tmp17, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1179274*/ ret14 = (call_tmp17)->_low;
  /* 1179291*/ ret15 = (&_ic__F8__formal_tmp_followThis_x12)->_low;
  /* 1179298*/ call_tmp21 = (ret14 + ret15);
  /* 1179308*/ this13 = ret13;
  /* 1277866*/ chpl_check_nil(this13, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1179315*/ call_tmp22 = &((this13)->ranges);
  /* 1179320*/ call_tmp18 = (*(call_tmp22) + INT64(0));
  /* 1277868*/ chpl_check_nil(call_tmp18, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1179327*/ ret16 = (call_tmp18)->_low;
  /* 1179344*/ ret17 = (&_ic__F8__formal_tmp_followThis_x12)->_high;
  /* 1179351*/ call_tmp23 = (ret16 + ret17);
  /* 1179356*/ ret_to_arg_ref_tmp_5 = &call_tmp19;
  /* 1179361*/ _build_range(call_tmp21, call_tmp23, ret_to_arg_ref_tmp_5, _ln, _fn);
  /* 1179365*/ *(call_tmp16) = call_tmp19;
  /* 1179468*/ _ic__F0_this4 = _ic__F9_block_x12;
  /* 1179481*/ this14 = &_ic__F0_this4;
  /* 1179491*/ checkIfIterWillOverflow(this14, true, _ln, _fn);
  /* 1179506*/ ret18 = (&_ic__F0_this4)->_low;
  /* 1179527*/ ret19 = (&_ic__F0_this4)->_high;
  /* 1179532*/ _ic__F14_end2 = ret19;
  /* 1179951*/ T3 = _ic__F0_this2;
  /* 1179816*/ T5 = _ic__F0_this;
  /* 1278418*/ chpl_check_nil(T3, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1266410*/ ret_ = &((T3)->blk);
  /* 1277880*/ chpl_check_nil(T3, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1180051*/ ret21 = (T3)->shiftedData;
  /* 1180058*/ coerce_tmp4 = ret21;
  /* 1059958*/ for (_ic__F12_i = ret11,_ic__F12_i2 = ret18; (T6 = (_ic__F12_i <= _ic__F14_end),T6); T7 = _ic__F12_i,T7 += INT64(1),_ic__F12_i = T7,T8 = _ic__F12_i2,T8 += INT64(1),_ic__F12_i2 = T8) {
    /* 1179965*/ *(this16 + INT64(0)) = _ic__F12_i2;
    /* 1179969*/ *(ind + INT64(0)) = *(this16 + INT64(0));
    /* 1277876*/ chpl_check_nil(T3, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1179974*/ ret20 = (T3)->dom;
    /* 1277878*/ chpl_check_nil(ret20, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1179981*/ call_tmp24 = dsiMember2(ret20, &this16, _ln, _fn);
    /* 1179989*/ call_tmp25 = (! call_tmp24);
    /* 1180007*/ if (call_tmp25) /* 1179994*/ {
      /* 1179997*/ string_from_c_string(&call_tmp26, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
      /* 1180004*/ halt2(call_tmp26, &this16, _ln, _fn);
    }
    /* 1180010*/ sum = INT64(0);
    /* 1266415*/ ret_x1 = *(*(ret_) + INT64(0));
    /* 1180027*/ coerce_tmp3 = *(ind + INT64(0));
    /* 1180041*/ call_tmp27 = (coerce_tmp3 * ret_x1);
    /* 1180046*/ sum += call_tmp27;
    /* 1180063*/ call_tmp28 = (coerce_tmp4 + sum);
    /* 1180192*/ T4 = (_ic__F12_i2 <= _ic__F14_end2);
    /* 1072608*/ hasMore = (T4 != INT64(0));
    /* 1072595*/ isFinished = (! hasMore);
    /* 1072591*/ if (isFinished) /* 1072592*/ {
      /* 1072589*/ chpl_error("zippered iterations have non-equal lengths", _ln, _fn);
    }
    /* 1179830*/ *(this17 + INT64(0)) = _ic__F12_i;
    /* 1179834*/ *(ind2 + INT64(0)) = *(this17 + INT64(0));
    /* 1277870*/ chpl_check_nil(T5, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1179839*/ ret22 = (T5)->dom;
    /* 1277872*/ chpl_check_nil(ret22, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1179846*/ call_tmp29 = dsiMember2(ret22, &this17, _ln, _fn);
    /* 1179854*/ call_tmp30 = (! call_tmp29);
    /* 1179872*/ if (call_tmp30) /* 1179859*/ {
      /* 1179862*/ string_from_c_string(&call_tmp31, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
      /* 1179869*/ halt2(call_tmp31, &this17, _ln, _fn);
    }
    /* 1179875*/ sum2 = INT64(0);
    /* 1278416*/ chpl_check_nil(T5, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1266387*/ ret_2 = &((T5)->blk);
    /* 1266392*/ ret_x12 = *(*(ret_2) + INT64(0));
    /* 1179892*/ coerce_tmp5 = *(ind2 + INT64(0));
    /* 1179906*/ call_tmp32 = (coerce_tmp5 * ret_x12);
    /* 1179911*/ sum2 += call_tmp32;
    /* 1277874*/ chpl_check_nil(T5, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1179916*/ ret23 = (T5)->shiftedData;
    /* 1179923*/ coerce_tmp6 = ret23;
    /* 1179928*/ call_tmp33 = (coerce_tmp6 + sum2);
    /* 1059978*/ coerce_tmp7 = *(call_tmp28);
    /* 1059983*/ chpl___ASSIGN_4(call_tmp33, &coerce_tmp7, _ln, _fn);
  }
  /* 1180216*/ T9 = (_ic__F12_i2 <= _ic__F14_end2);
  /* 1072626*/ hasMore = (T9 != INT64(0));
  /* 1072613*/ if (hasMore) /* 1072614*/ {
    /* 1072611*/ chpl_error("zippered iterations have non-equal lengths", _ln, _fn);
  }
  /* 1059900*/ _downEndCount(_coforallCount, _ln, _fn);
  /* 1059902*/ return;
}

/* DefaultRectangular.chpl:281 */
/* 1060610 */ static void coforall_fn2(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl___EndCount _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const chpl__iter, int64_t _ln, c_string _fn) {
  /* 1258843 */ range_int64_t_bounded_F newRet_x1;
  /* 1060626 */ _tuple_1_star_range_int64_t_bounded_F followMe;
  /* 1060629 */ _tuple_1_star_range_int64_t_bounded_F type_tmp;
  /* 1120592 */ range_int64_t_bounded_F this7;
  /* 1120634 */ range_int64_t_bounded_F wrap_call_tmp;
  /* 1060654 */ _tuple_2_star_int64_t const_tmp;
  /* 1269562 */ int64_t _tmp_x1;
  /* 1269564 */ int64_t _tmp_x2;
  /* 1060658 */ _ref_range_int64_t_bounded_F call_tmp = NULL;
  /* 1060660 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  /* 1060672 */ int64_t call_tmp2;
  /* 1060679 */ _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  /* 1060681 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  /* 1128907 */ int64_t ret;
  /* 1060700 */ _ref_range_int64_t_bounded_F call_tmp4 = NULL;
  /* 1060702 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_3 = NULL;
  /* 1128556 */ int64_t ret2;
  /* 1060721 */ _ref_range_int64_t_bounded_F call_tmp5 = NULL;
  /* 1060723 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_4 = NULL;
  /* 1128566 */ int64_t ret3;
  /* 1060744 */ _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  /* 1060800 */ _ref_range_int64_t_bounded_F call_tmp6 = NULL;
  /* 1060802 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_5 = NULL;
  /* 1060814 */ range_int64_t_bounded_F call_tmp7;
  /* 1060818 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  /* 1245867 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F _tmp_x12 = NULL;
  /* 1245869 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F _tmp_x22 = NULL;
  /* 1216717 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F coerce_tmp = NULL;
  /* 1216724 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F ret4 = NULL;
  /* 1217143 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F coerce_tmp2 = NULL;
  /* 1217150 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F ret5 = NULL;
  /* 1251510 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F _ic__F0_this = NULL;
  /* 1262097 */ range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x1;
  /* 1262105 */ range_int64_t_bounded_F _ic__F9_block_x1;
  /* 1251534 */ int64_t _ic__F12_i;
  /* 1251538 */ int64_t _ic__F14_end;
  /* 1251603 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F _ic__F0_this2 = NULL;
  /* 1262123 */ range_int64_t_bounded_F _ic__F8__formal_tmp_followThis_x12;
  /* 1262131 */ range_int64_t_bounded_F _ic__F9_block_x12;
  /* 1251627 */ int64_t _ic__F12_i2;
  /* 1251631 */ int64_t _ic__F14_end2;
  /* 1220897 */ _ref_range_int64_t_bounded_F call_tmp8 = NULL;
  /* 1220899 */ _ref_range_int64_t_bounded_F call_tmp9 = NULL;
  /* 1220901 */ DefaultRectangularDom_1_int64_t_F this8 = NULL;
  /* 1220905 */ _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  /* 1220907 */ DefaultRectangularDom_1_int64_t_F this9 = NULL;
  /* 1220911 */ range_int64_t_bounded_F call_tmp11;
  /* 1220913 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  /* 1220917 */ _ref_range_int64_t_bounded_F this10 = NULL;
  /* 1220925 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F T = NULL;
  /* 1220988 */ DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  /* 1221030 */ _tuple_1_star_int64_t default_argoffset;
  /* 1221032 */ _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_4 = NULL;
  /* 1221313 */ range_int64_t_bounded_F this11;
  /* 1221355 */ range_int64_t_bounded_F wrap_call_tmp2;
  /* 1221397 */ _ref__tuple_1_star_range_int64_t_bounded_F call_tmp12 = NULL;
  /* 1221409 */ int64_t ret7;
  /* 1221426 */ int64_t ret8;
  /* 1221433 */ int64_t call_tmp13;
  /* 1221450 */ _ref__tuple_1_star_range_int64_t_bounded_F call_tmp14 = NULL;
  /* 1221462 */ int64_t ret9;
  /* 1221479 */ int64_t ret10;
  /* 1221486 */ int64_t call_tmp15;
  /* 1263807 */ range_int64_t_bounded_F _ic__F0_this3;
  /* 1221641 */ int64_t ret11;
  /* 1221662 */ int64_t ret12;
  /* 1221678 */ _ref_range_int64_t_bounded_F call_tmp16 = NULL;
  /* 1221680 */ _ref_range_int64_t_bounded_F call_tmp17 = NULL;
  /* 1221682 */ DefaultRectangularDom_1_int64_t_F this12 = NULL;
  /* 1221686 */ _ref_range_int64_t_bounded_F call_tmp18 = NULL;
  /* 1221688 */ DefaultRectangularDom_1_int64_t_F this13 = NULL;
  /* 1221692 */ range_int64_t_bounded_F call_tmp19;
  /* 1221694 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  /* 1221698 */ _ref_range_int64_t_bounded_F this14 = NULL;
  /* 1221706 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F T2 = NULL;
  /* 1221769 */ DefaultRectangularDom_1_int64_t_F ret13 = NULL;
  /* 1221811 */ _tuple_1_star_int64_t default_argoffset2;
  /* 1221813 */ _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_6 = NULL;
  /* 1222094 */ range_int64_t_bounded_F this15;
  /* 1222136 */ range_int64_t_bounded_F wrap_call_tmp3;
  /* 1222178 */ _ref__tuple_1_star_range_int64_t_bounded_F call_tmp20 = NULL;
  /* 1222190 */ int64_t ret14;
  /* 1222207 */ int64_t ret15;
  /* 1222214 */ int64_t call_tmp21;
  /* 1222231 */ _ref__tuple_1_star_range_int64_t_bounded_F call_tmp22 = NULL;
  /* 1222243 */ int64_t ret16;
  /* 1222260 */ int64_t ret17;
  /* 1222267 */ int64_t call_tmp23;
  /* 1263827 */ range_int64_t_bounded_F _ic__F0_this4;
  /* 1222422 */ int64_t ret18;
  /* 1222443 */ int64_t ret19;
  /* 1073005 */ chpl_bool isFinished;
  /* 1073004 */ chpl_bool hasMore;
  /* 1222863 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F T3 = NULL;
  /* 1222879 */ _tuple_1_star_int64_t ind;
  /* 1222881 */ _tuple_1_star_int64_t this16;
  /* 1222890 */ DefaultRectangularDom_1_int64_t_F ret20 = NULL;
  /* 1222897 */ chpl_bool call_tmp24;
  /* 1222905 */ chpl_bool call_tmp25;
  /* 1222913 */ chpl_string call_tmp26;
  /* 1222926 */ int64_t sum;
  /* 1266747 */ int64_t ret_x1;
  /* 1266751 */ _ref__tuple_1_star_int64_t ret_ = NULL;
  /* 1222943 */ int64_t coerce_tmp3;
  /* 1222957 */ int64_t call_tmp27;
  /* 1222967 */ _ddata_chpldev_Task ret21 = NULL;
  /* 1222974 */ _ddata_chpldev_Task coerce_tmp4 = NULL;
  /* 1222979 */ _ref_chpldev_Task call_tmp28 = NULL;
  /* 1223094 */ int64_t T4;
  /* 1222728 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F T5 = NULL;
  /* 1222744 */ _tuple_1_star_int64_t ind2;
  /* 1222746 */ _tuple_1_star_int64_t this17;
  /* 1222755 */ DefaultRectangularDom_1_int64_t_F ret22 = NULL;
  /* 1222762 */ chpl_bool call_tmp29;
  /* 1222770 */ chpl_bool call_tmp30;
  /* 1222778 */ chpl_string call_tmp31;
  /* 1222791 */ int64_t sum2;
  /* 1266724 */ int64_t ret_x12;
  /* 1266728 */ _ref__tuple_1_star_int64_t ret_2 = NULL;
  /* 1222808 */ int64_t coerce_tmp5;
  /* 1222822 */ int64_t call_tmp32;
  /* 1222832 */ _ddata_chpldev_Task ret23 = NULL;
  /* 1222839 */ _ddata_chpldev_Task coerce_tmp6 = NULL;
  /* 1222844 */ _ref_chpldev_Task call_tmp33 = NULL;
  /* 1060937 */ chpldev_Task coerce_tmp7;
  /* 1223070 */ int64_t T6;
  /* 1223284 */ int64_t T7;
  /* 1223301 */ int64_t T8;
  /* 1223118 */ int64_t T9;
  /* 1060622*/ /* 1120594*/ (&this7)->_low = INT64(0);
  /* 1120598*/ (&this7)->_high = INT64(0);
  /* 1120602*/ (&this7)->_stride = INT64(0);
  /* 1120606*/ (&this7)->_alignment = INT64(0);
  /* 1120610*/ (&this7)->_aligned = false;
  /* 1120614*/ (&this7)->_low = INT64(1);
  /* 1120618*/ (&this7)->_high = INT64(0);
  /* 1120622*/ (&this7)->_stride = INT64(1);
  /* 1120626*/ (&this7)->_alignment = INT64(0);
  /* 1120630*/ (&this7)->_aligned = false;
  /* 1120636*/ wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this7, _ln, _fn);
  /* 1259003*/ *(type_tmp + INT64(0)) = wrap_call_tmp;
  /* 1123515*/ *(type_tmp + INT64(0)) = *(*(locBlock) + INT64(0));
  /* 1060651*/ *(followMe + INT64(0)) = *(*(locBlock) + INT64(0));
  /* 1060662*/ _ref_tmp_ = locBlock;
  /* 1060666*/ call_tmp = this5(_ref_tmp_, parDim, _ln, _fn);
  /* 1060674*/ call_tmp2 = length(call_tmp, _ln, _fn);
  /* 1060683*/ _ref_tmp_2 = locBlock;
  /* 1060687*/ call_tmp3 = this5(_ref_tmp_2, parDim, _ln, _fn);
  /* 1276662*/ chpl_check_nil(call_tmp3, INT64(285), "/export/home/hzhang86/chapel/chapel/modules/internal/DefaultRectangular.chpl");
  /* 1128909*/ ret = (call_tmp3)->_high;
  /* 1060704*/ _ref_tmp_3 = locBlock;
  /* 1060708*/ call_tmp4 = this5(_ref_tmp_3, parDim, _ln, _fn);
  /* 1276652*/ chpl_check_nil(call_tmp4, INT64(286), "/export/home/hzhang86/chapel/chapel/modules/internal/DefaultRectangular.chpl");
  /* 1128558*/ ret2 = (call_tmp4)->_low;
  /* 1060725*/ _ref_tmp_4 = locBlock;
  /* 1060729*/ call_tmp5 = this5(_ref_tmp_4, parDim, _ln, _fn);
  /* 1276654*/ chpl_check_nil(call_tmp5, INT64(287), "/export/home/hzhang86/chapel/chapel/modules/internal/DefaultRectangular.chpl");
  /* 1128568*/ ret3 = (call_tmp5)->_low;
  /* 1060746*/ ret_to_arg_ref_tmp_ = &const_tmp;
  /* 1060751*/ _computeBlock(call_tmp2, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1269570*/ _tmp_x1 = *(const_tmp + INT64(0));
  /* 1269575*/ _tmp_x2 = *(const_tmp + INT64(1));
  /* 1060804*/ _ref_tmp_5 = &followMe;
  /* 1060808*/ call_tmp6 = this5(_ref_tmp_5, parDim, _ln, _fn);
  /* 1060820*/ ret_to_arg_ref_tmp_2 = &call_tmp7;
  /* 1060825*/ _build_range(_tmp_x1, _tmp_x2, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1123545*/ *(call_tmp6) = call_tmp7;
  /* 1258849*/ newRet_x1 = *(followMe + INT64(0));
  /* 1245875*/ _tmp_x12 = *(*(chpl__iter) + INT64(0));
  /* 1245880*/ _tmp_x22 = *(*(chpl__iter) + INT64(1));
  /* 1216719*/ coerce_tmp = _tmp_x12;
  /* 1216726*/ ret4 = coerce_tmp;
  /* 1217145*/ coerce_tmp2 = _tmp_x22;
  /* 1217152*/ ret5 = coerce_tmp2;
  /* 1219143*/ _ic__F0_this = ret4;
  /* 1219239*/ _ic__F0_this2 = ret5;
  /* 1220983*/ T = ret4;
  /* 1278072*/ chpl_check_nil(T, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1220990*/ ret6 = (T)->dom;
  /* 1221034*/ ret_to_arg_ref_tmp_4 = &default_argoffset;
  /* 1221039*/ createTuple(INT64(0), ret_to_arg_ref_tmp_4, _ln, _fn);
  /* 1260589*/ _ic__F8__formal_tmp_followThis_x1 = newRet_x1;
  /* 1221315*/ (&this11)->_low = INT64(0);
  /* 1221319*/ (&this11)->_high = INT64(0);
  /* 1221323*/ (&this11)->_stride = INT64(0);
  /* 1221327*/ (&this11)->_alignment = INT64(0);
  /* 1221331*/ (&this11)->_aligned = false;
  /* 1221335*/ (&this11)->_low = INT64(1);
  /* 1221339*/ (&this11)->_high = INT64(0);
  /* 1221343*/ (&this11)->_stride = INT64(1);
  /* 1221347*/ (&this11)->_alignment = INT64(0);
  /* 1221351*/ (&this11)->_aligned = false;
  /* 1221357*/ wrap_call_tmp2 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this11, _ln, _fn);
  /* 1260596*/ _ic__F9_block_x1 = wrap_call_tmp2;
  /* 1221382*/ call_tmp8 = &_ic__F9_block_x1;
  /* 1221392*/ this8 = ret6;
  /* 1278074*/ chpl_check_nil(this8, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1221399*/ call_tmp12 = &((this8)->ranges);
  /* 1221404*/ call_tmp9 = (*(call_tmp12) + INT64(0));
  /* 1278076*/ chpl_check_nil(call_tmp9, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1221411*/ ret7 = (call_tmp9)->_low;
  /* 1221428*/ ret8 = (&_ic__F8__formal_tmp_followThis_x1)->_low;
  /* 1221435*/ call_tmp13 = (ret7 + ret8);
  /* 1221445*/ this9 = ret6;
  /* 1278078*/ chpl_check_nil(this9, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1221452*/ call_tmp14 = &((this9)->ranges);
  /* 1221457*/ call_tmp10 = (*(call_tmp14) + INT64(0));
  /* 1278080*/ chpl_check_nil(call_tmp10, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1221464*/ ret9 = (call_tmp10)->_low;
  /* 1221481*/ ret10 = (&_ic__F8__formal_tmp_followThis_x1)->_high;
  /* 1221488*/ call_tmp15 = (ret9 + ret10);
  /* 1221493*/ ret_to_arg_ref_tmp_3 = &call_tmp11;
  /* 1221498*/ _build_range(call_tmp13, call_tmp15, ret_to_arg_ref_tmp_3, _ln, _fn);
  /* 1221502*/ *(call_tmp8) = call_tmp11;
  /* 1221605*/ _ic__F0_this3 = _ic__F9_block_x1;
  /* 1221618*/ this10 = &_ic__F0_this3;
  /* 1221628*/ checkIfIterWillOverflow(this10, true, _ln, _fn);
  /* 1221643*/ ret11 = (&_ic__F0_this3)->_low;
  /* 1221664*/ ret12 = (&_ic__F0_this3)->_high;
  /* 1221669*/ _ic__F14_end = ret12;
  /* 1221764*/ T2 = ret5;
  /* 1278082*/ chpl_check_nil(T2, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1221771*/ ret13 = (T2)->dom;
  /* 1221815*/ ret_to_arg_ref_tmp_6 = &default_argoffset2;
  /* 1221820*/ createTuple(INT64(0), ret_to_arg_ref_tmp_6, _ln, _fn);
  /* 1260704*/ _ic__F8__formal_tmp_followThis_x12 = newRet_x1;
  /* 1222096*/ (&this15)->_low = INT64(0);
  /* 1222100*/ (&this15)->_high = INT64(0);
  /* 1222104*/ (&this15)->_stride = INT64(0);
  /* 1222108*/ (&this15)->_alignment = INT64(0);
  /* 1222112*/ (&this15)->_aligned = false;
  /* 1222116*/ (&this15)->_low = INT64(1);
  /* 1222120*/ (&this15)->_high = INT64(0);
  /* 1222124*/ (&this15)->_stride = INT64(1);
  /* 1222128*/ (&this15)->_alignment = INT64(0);
  /* 1222132*/ (&this15)->_aligned = false;
  /* 1222138*/ wrap_call_tmp3 = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this15, _ln, _fn);
  /* 1260711*/ _ic__F9_block_x12 = wrap_call_tmp3;
  /* 1222163*/ call_tmp16 = &_ic__F9_block_x12;
  /* 1222173*/ this12 = ret13;
  /* 1278084*/ chpl_check_nil(this12, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1222180*/ call_tmp20 = &((this12)->ranges);
  /* 1222185*/ call_tmp17 = (*(call_tmp20) + INT64(0));
  /* 1278086*/ chpl_check_nil(call_tmp17, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1222192*/ ret14 = (call_tmp17)->_low;
  /* 1222209*/ ret15 = (&_ic__F8__formal_tmp_followThis_x12)->_low;
  /* 1222216*/ call_tmp21 = (ret14 + ret15);
  /* 1222226*/ this13 = ret13;
  /* 1278088*/ chpl_check_nil(this13, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1222233*/ call_tmp22 = &((this13)->ranges);
  /* 1222238*/ call_tmp18 = (*(call_tmp22) + INT64(0));
  /* 1278090*/ chpl_check_nil(call_tmp18, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1222245*/ ret16 = (call_tmp18)->_low;
  /* 1222262*/ ret17 = (&_ic__F8__formal_tmp_followThis_x12)->_high;
  /* 1222269*/ call_tmp23 = (ret16 + ret17);
  /* 1222274*/ ret_to_arg_ref_tmp_5 = &call_tmp19;
  /* 1222279*/ _build_range(call_tmp21, call_tmp23, ret_to_arg_ref_tmp_5, _ln, _fn);
  /* 1222283*/ *(call_tmp16) = call_tmp19;
  /* 1222386*/ _ic__F0_this4 = _ic__F9_block_x12;
  /* 1222399*/ this14 = &_ic__F0_this4;
  /* 1222409*/ checkIfIterWillOverflow(this14, true, _ln, _fn);
  /* 1222424*/ ret18 = (&_ic__F0_this4)->_low;
  /* 1222445*/ ret19 = (&_ic__F0_this4)->_high;
  /* 1222450*/ _ic__F14_end2 = ret19;
  /* 1222869*/ T3 = _ic__F0_this2;
  /* 1222734*/ T5 = _ic__F0_this;
  /* 1278438*/ chpl_check_nil(T3, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1266755*/ ret_ = &((T3)->blk);
  /* 1278102*/ chpl_check_nil(T3, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1222969*/ ret21 = (T3)->shiftedData;
  /* 1222976*/ coerce_tmp4 = ret21;
  /* 1060919*/ for (_ic__F12_i = ret11,_ic__F12_i2 = ret18; (T6 = (_ic__F12_i <= _ic__F14_end),T6); T7 = _ic__F12_i,T7 += INT64(1),_ic__F12_i = T7,T8 = _ic__F12_i2,T8 += INT64(1),_ic__F12_i2 = T8) {
    /* 1222883*/ *(this16 + INT64(0)) = _ic__F12_i2;
    /* 1222887*/ *(ind + INT64(0)) = *(this16 + INT64(0));
    /* 1278098*/ chpl_check_nil(T3, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1222892*/ ret20 = (T3)->dom;
    /* 1278100*/ chpl_check_nil(ret20, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1222899*/ call_tmp24 = dsiMember2(ret20, &this16, _ln, _fn);
    /* 1222907*/ call_tmp25 = (! call_tmp24);
    /* 1222925*/ if (call_tmp25) /* 1222912*/ {
      /* 1222915*/ string_from_c_string(&call_tmp26, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
      /* 1222922*/ halt2(call_tmp26, &this16, _ln, _fn);
    }
    /* 1222928*/ sum = INT64(0);
    /* 1266760*/ ret_x1 = *(*(ret_) + INT64(0));
    /* 1222945*/ coerce_tmp3 = *(ind + INT64(0));
    /* 1222959*/ call_tmp27 = (coerce_tmp3 * ret_x1);
    /* 1222964*/ sum += call_tmp27;
    /* 1222981*/ call_tmp28 = (coerce_tmp4 + sum);
    /* 1223110*/ T4 = (_ic__F12_i2 <= _ic__F14_end2);
    /* 1073028*/ hasMore = (T4 != INT64(0));
    /* 1073015*/ isFinished = (! hasMore);
    /* 1073011*/ if (isFinished) /* 1073012*/ {
      /* 1073009*/ chpl_error("zippered iterations have non-equal lengths", _ln, _fn);
    }
    /* 1222748*/ *(this17 + INT64(0)) = _ic__F12_i;
    /* 1222752*/ *(ind2 + INT64(0)) = *(this17 + INT64(0));
    /* 1278092*/ chpl_check_nil(T5, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1222757*/ ret22 = (T5)->dom;
    /* 1278094*/ chpl_check_nil(ret22, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1222764*/ call_tmp29 = dsiMember2(ret22, &this17, _ln, _fn);
    /* 1222772*/ call_tmp30 = (! call_tmp29);
    /* 1222790*/ if (call_tmp30) /* 1222777*/ {
      /* 1222780*/ string_from_c_string(&call_tmp31, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
      /* 1222787*/ halt2(call_tmp31, &this17, _ln, _fn);
    }
    /* 1222793*/ sum2 = INT64(0);
    /* 1278436*/ chpl_check_nil(T5, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1266732*/ ret_2 = &((T5)->blk);
    /* 1266737*/ ret_x12 = *(*(ret_2) + INT64(0));
    /* 1222810*/ coerce_tmp5 = *(ind2 + INT64(0));
    /* 1222824*/ call_tmp32 = (coerce_tmp5 * ret_x12);
    /* 1222829*/ sum2 += call_tmp32;
    /* 1278096*/ chpl_check_nil(T5, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1222834*/ ret23 = (T5)->shiftedData;
    /* 1222841*/ coerce_tmp6 = ret23;
    /* 1222846*/ call_tmp33 = (coerce_tmp6 + sum2);
    /* 1060939*/ coerce_tmp7 = *(call_tmp28);
    /* 1060944*/ chpl___ASSIGN_3(call_tmp33, &coerce_tmp7, _ln, _fn);
  }
  /* 1223134*/ T9 = (_ic__F12_i2 <= _ic__F14_end2);
  /* 1073046*/ hasMore = (T9 != INT64(0));
  /* 1073033*/ if (hasMore) /* 1073034*/ {
    /* 1073031*/ chpl_error("zippered iterations have non-equal lengths", _ln, _fn);
  }
  /* 1060861*/ _downEndCount(_coforallCount, _ln, _fn);
  /* 1060863*/ return;
}

/* ChapelArray.chpl:334 */
/*  608454 */ static void chpl_incRefCountsForDomainsInArrayEltTypes(void) {
  /* 608461*/ /* 608470*/ compilerAssert();
  /* 608562*/ return;
}

/* ChapelArray.chpl:334 */
/*  655051 */ static void chpl_incRefCountsForDomainsInArrayEltTypes2(void) {
  /* 655058*/ /* 655067*/ compilerAssert();
  /* 655159*/ return;
}

/* ChapelArray.chpl:334 */
/*  767143 */ static void chpl_incRefCountsForDomainsInArrayEltTypes3(void) {
  /* 767150*/ /* 767159*/ compilerAssert();
  /* 767251*/ return;
}

/* ChapelArray.chpl:334 */
/*  790450 */ static void chpl_incRefCountsForDomainsInArrayEltTypes4(void) {
  /* 790457*/ /* 790466*/ compilerAssert();
  /* 790558*/ return;
}

/* ChapelArray.chpl:355 */
/*  608110 */ static void chpl_decRefCountsForDomainsInArrayEltTypes(void) {
  /* 608117*/ /* 608126*/ compilerAssert();
  /* 608269*/ return;
}

/* ChapelArray.chpl:355 */
/*  654707 */ static void chpl_decRefCountsForDomainsInArrayEltTypes2(void) {
  /* 654714*/ /* 654723*/ compilerAssert();
  /* 654866*/ return;
}

/* ChapelArray.chpl:355 */
/*  766799 */ static void chpl_decRefCountsForDomainsInArrayEltTypes3(void) {
  /* 766806*/ /* 766815*/ compilerAssert();
  /* 766958*/ return;
}

/* ChapelArray.chpl:355 */
/*  790106 */ static void chpl_decRefCountsForDomainsInArrayEltTypes4(void) {
  /* 790113*/ /* 790122*/ compilerAssert();
  /* 790265*/ return;
}

/* ChapelArray.chpl:379 */
/* 1037737 */ static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1037742 */ _tuple_1_star_range_int64_t_bounded_F ranges;
  /* 1037775 */ DefaultRectangularDom_1_int64_t_F d = NULL;
  /* 1037778 */ DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  /* 1037789 */ chpl___RuntimeTypeInfo call_tmp;
  /* 1037796 */ DefaultDist _runtime_type_tmp_ = NULL;
  /* 1051539 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1037741*/ /* 1258970*/ *(ranges + INT64(0)) = *(_e0_ranges);
  /* 1037791*/ call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
  /* 1037798*/ _runtime_type_tmp_ = (&call_tmp)->d;
  /* 1051542*/ ret_to_arg_ref_tmp_ = &type_tmp;
  /* 1037808*/ chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1037815*/ d = type_tmp;
  /* 1275698*/ chpl_check_nil(type_tmp, INT64(387), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1037819*/ setIndices(type_tmp, &ranges, _ln, _fn);
  /* 1037838*/ *(_retArg) = d;
  /* 1037832*/ return;
}

/* ChapelArray.chpl:379 */
/* 1042042 */ static void chpl__buildDomainExpr2(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1042047 */ _tuple_1_star_range_int64_t_bounded_F ranges;
  /* 1042080 */ DefaultRectangularDom_1_int64_t_F d = NULL;
  /* 1042083 */ DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  /* 1042094 */ chpl___RuntimeTypeInfo call_tmp;
  /* 1042101 */ DefaultDist _runtime_type_tmp_ = NULL;
  /* 1051693 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1042046*/ /* 1258981*/ *(ranges + INT64(0)) = *(_e0_ranges);
  /* 1042096*/ call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
  /* 1042103*/ _runtime_type_tmp_ = (&call_tmp)->d;
  /* 1051696*/ ret_to_arg_ref_tmp_ = &type_tmp;
  /* 1042113*/ chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1042120*/ d = type_tmp;
  /* 1275708*/ chpl_check_nil(type_tmp, INT64(387), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1042124*/ setIndices(type_tmp, &ranges, _ln, _fn);
  /* 1042143*/ *(_retArg) = chpl__initCopy2(d, _ln, _fn);
  /* 1042131*/ chpl__autoDestroy2(d, _ln, _fn);
  /* 1042137*/ return;
}

/* ChapelArray.chpl:416 */
/* 1037847 */ static void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1037851*/ /* 1037867*/ *(_retArg) = chpl__autoCopy2(x, _ln, _fn);
  /* 1037861*/ return;
}

/* ChapelArray.chpl:416 */
/* 1039172 */ static void chpl__ensureDomainExpr2(DefaultAssociativeDom_chpl_taskID_t_F x, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1039176*/ /* 1039192*/ *(_retArg) = chpl__autoCopy3(x, _ln, _fn);
  /* 1039186*/ return;
}

/* ChapelArray.chpl:420 */
/* 1040183 */ static void chpl__ensureDomainExpr3(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1040197 */ DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  /* 1051679 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1040187*/ /* 1051682*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1040217*/ chpl__buildDomainExpr(_e0_x, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1040240*/ *(_retArg) = call_tmp;
  /* 1040234*/ return;
}

/* ChapelArray.chpl:553 */
/* 1038096 */ static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  /* 1038103 */ DefaultDist call_tmp = NULL;
  /* 1051546 */ _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  /* 1038100*/ /* 1051549*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1038110*/ _newDistribution(x, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1038133*/ *(_retArg) = chpl__initCopy(call_tmp, _ln, _fn);
  /* 1038121*/ chpl__autoDestroy(call_tmp, _ln, _fn);
  /* 1038127*/ return;
}

/* ChapelArray.chpl:553 */
/* 1038142 */ static void chpl__buildDistValue2(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  /* 1038149 */ DefaultDist call_tmp = NULL;
  /* 1051553 */ _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  /* 1038146*/ /* 1051556*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1038156*/ _newDistribution(x, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1038179*/ *(_retArg) = call_tmp;
  /* 1038173*/ return;
}

/* ChapelArray.chpl:566 */
/*  528726 */ static DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme, int64_t _ln, c_string _fn) {
  /*  528740 */ DefaultDist this7 = NULL;
  /* 528895*/ /* 528898*/ this7 = meme;
  /* 528908*/ this7 = _value;
  /* 528923*/ return this7;
}

/* ChapelArray.chpl:570 */
/*  528682 */ static DefaultDist _distribution(DefaultDist _value, int64_t _ln, c_string _fn) {
  /*  528688 */ DefaultDist this7 = NULL;
  /* 1119801 */ DefaultDist this8 = NULL;
  /* 1119819 */ DefaultDist wrap_call_tmp = NULL;
  /* 528695*/ /* 1119803*/ this8 = nil;
  /* 1119811*/ this8 = _value;
  /* 1119821*/ wrap_call_tmp = _construct__distribution(_value, this8, _ln, _fn);
  /* 528706*/ return wrap_call_tmp;
}

/* ChapelArray.chpl:580 */
/*  528982 */ static void chpl___TILDE__distribution(DefaultDist this7, int64_t _ln, c_string _fn) {
  /* 1107019 */ DefaultDist ret = NULL;
  /*  529067 */ int64_t call_tmp;
  /* 1119831 */ BaseDist call_tmp2 = NULL;
  /* 1100541 */ chpl_bool call_tmp3;
  /* 1107036 */ DefaultDist ret2 = NULL;
  /* 1119841 */ BaseDist call_tmp4 = NULL;
  /* 1107053 */ DefaultDist ret3 = NULL;
  /* 1116841 */ BaseDist _parent_destructor_tmp_ = NULL;
  /* 1116848 */ _ref_atomicflag _field_destructor_tmp_ = NULL;
  /* 1116855 */ _ref_atomic_flag call_tmp5 = NULL;
  /* 1116865 */ _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  /* 1116872 */ _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  /* 1116879 */ _ref_atomic_int_least64_t call_tmp6 = NULL;
  /*  529123 */ chpl_opaque call_tmp7;
  /* 528991*/ /* 1107028*/ ret = this7;
  /* 1119833*/ call_tmp2 = ((BaseDist)(ret));
  /* 1275256*/ chpl_check_nil(call_tmp2, INT64(584), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 529069*/ call_tmp = destroyDist(call_tmp2, _ln, _fn);
  /* 1100543*/ call_tmp3 = (call_tmp == INT64(0));
  /* 529132*/ if (call_tmp3) /* 529097*/ {
    /* 1107045*/ ret2 = this7;
    /* 1119843*/ call_tmp4 = ((BaseDist)(ret2));
    /* 1275258*/ chpl_check_nil(call_tmp4, INT64(586), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 529110*/ dsiDestroyDistClass(call_tmp4);
    /* 1107062*/ ret3 = this7;
    /* 1116843*/ _parent_destructor_tmp_ = ((BaseDist)(ret3));
    /* 1276188*/ chpl_check_nil(_parent_destructor_tmp_, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1116850*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
    /* 1276190*/ chpl_check_nil(_field_destructor_tmp_, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1116857*/ call_tmp5 = &((_field_destructor_tmp_)->_v);
    /* 1116863*/ atomic_destroy_flag(call_tmp5);
    /* 1276192*/ chpl_check_nil(_parent_destructor_tmp_, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1116867*/ _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
    /* 1276194*/ chpl_check_nil(_field_destructor_tmp_2, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1116874*/ _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
    /* 1276196*/ chpl_check_nil(_field_destructor_tmp_3, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1116881*/ call_tmp6 = &((_field_destructor_tmp_3)->_v);
    /* 1116887*/ atomic_destroy_int_least64_t(call_tmp6);
    /* 529125*/ call_tmp7 = ((void*)(ret3));
    /* 529130*/ chpl_here_free(call_tmp7, _ln, _fn);
  }
  /* 529135*/ return;
}

/* ChapelArray.chpl:594 */
/* 1039354 */ static void clone2(DefaultDist this7, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  /* 1107274 */ DefaultDist ret = NULL;
  /* 1039368 */ DefaultDist call_tmp = NULL;
  /* 1039375 */ DefaultDist call_tmp2 = NULL;
  /* 1051630 */ _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  /* 1039358*/ /* 1107283*/ ret = this7;
  /* 1275702*/ chpl_check_nil(ret, INT64(595), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1039370*/ call_tmp = dsiClone(ret);
  /* 1051633*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1039382*/ _newDistribution(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1039405*/ *(_retArg) = call_tmp2;
  /* 1039399*/ return;
}

/* ChapelArray.chpl:598 */
/*  536601 */ static DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this7, int64_t _ln, c_string _fn) {
  /* 1107087 */ DefaultDist ret = NULL;
  /*  536637 */ DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  /* 536624*/ /* 1107096*/ ret = this7;
  /* 1275262*/ chpl_check_nil(ret, INT64(599), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 536639*/ call_tmp = dsiNewRectangularDom(ret, _ln, _fn);
  /* 536721*/ return call_tmp;
}

/* ChapelArray.chpl:608 */
/*  744144 */ static DefaultAssociativeDom_chpl_taskID_t_F newAssociativeDom(DefaultDist this7, int64_t _ln, c_string _fn) {
  /* 1107257 */ DefaultDist ret = NULL;
  /*  744276 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp = NULL;
  /* 744263*/ /* 1107266*/ ret = this7;
  /* 1275378*/ chpl_check_nil(ret, INT64(609), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 744278*/ call_tmp = dsiNewAssociativeDom(ret, _ln, _fn);
  /* 744359*/ return call_tmp;
}

/* ChapelArray.chpl:679 */
/*  557835 */ static DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  /*  557849 */ DefaultRectangularDom_1_int64_t_F this7 = NULL;
  /* 558815*/ /* 558818*/ this7 = meme;
  /* 558828*/ this7 = _value;
  /* 558843*/ return this7;
}

/* ChapelArray.chpl:679 */
/*  769206 */ static DefaultAssociativeDom_chpl_taskID_t_F _construct__domain2(DefaultAssociativeDom_chpl_taskID_t_F _value, DefaultAssociativeDom_chpl_taskID_t_F meme, int64_t _ln, c_string _fn) {
  /*  769220 */ DefaultAssociativeDom_chpl_taskID_t_F this7 = NULL;
  /* 770008*/ /* 770011*/ this7 = meme;
  /* 770021*/ this7 = _value;
  /* 770036*/ return this7;
}

/* ChapelArray.chpl:692 */
/*  558902 */ static void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn) {
  /* 1121358 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /*  558987 */ int64_t call_tmp;
  /* 1122132 */ BaseDom call_tmp2 = NULL;
  /* 1100561 */ chpl_bool call_tmp3;
  /* 1121375 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1121198 */ BaseRectangularDom _parent_destructor_tmp_ = NULL;
  /* 1121205 */ BaseDom _parent_destructor_tmp_2 = NULL;
  /* 1121212 */ _ref_atomicflag _field_destructor_tmp_ = NULL;
  /* 1121219 */ _ref_atomic_flag call_tmp4 = NULL;
  /* 1121229 */ _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  /* 1121236 */ _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  /* 1121243 */ _ref_atomic_int_least64_t call_tmp5 = NULL;
  /*  559030 */ chpl_opaque call_tmp6;
  /* 558911*/ /* 1121367*/ ret = this7;
  /* 1122134*/ call_tmp2 = ((BaseDom)(ret));
  /* 1275270*/ chpl_check_nil(call_tmp2, INT64(696), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 558989*/ call_tmp = destroyDom(call_tmp2, _ln, _fn);
  /* 1100563*/ call_tmp3 = (call_tmp == INT64(0));
  /* 559039*/ if (call_tmp3) /* 559017*/ {
    /* 1121384*/ ret2 = this7;
    /* 1121200*/ _parent_destructor_tmp_ = ((BaseRectangularDom)(ret2));
    /* 1121207*/ _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
    /* 1276386*/ chpl_check_nil(_parent_destructor_tmp_2, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1121214*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
    /* 1276388*/ chpl_check_nil(_field_destructor_tmp_, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1121221*/ call_tmp4 = &((_field_destructor_tmp_)->_v);
    /* 1121227*/ atomic_destroy_flag(call_tmp4);
    /* 1276390*/ chpl_check_nil(_parent_destructor_tmp_2, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1121231*/ _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
    /* 1276392*/ chpl_check_nil(_field_destructor_tmp_2, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1121238*/ _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
    /* 1276394*/ chpl_check_nil(_field_destructor_tmp_3, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1121245*/ call_tmp5 = &((_field_destructor_tmp_3)->_v);
    /* 1121251*/ atomic_destroy_int_least64_t(call_tmp5);
    /* 559032*/ call_tmp6 = ((void*)(ret2));
    /* 559037*/ chpl_here_free(call_tmp6, _ln, _fn);
  }
  /* 559042*/ return;
}

/* ChapelArray.chpl:692 */
/*  770095 */ static void chpl___TILDE__domain2(DefaultAssociativeDom_chpl_taskID_t_F this7, int64_t _ln, c_string _fn) {
  /* 1146558 */ DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  /*  770180 */ int64_t call_tmp;
  /* 1146758 */ BaseDom call_tmp2 = NULL;
  /* 1100661 */ chpl_bool call_tmp3;
  /*  770211 */ DefaultAssociativeDom_chpl_taskID_t_F delete_tmp = NULL;
  /* 1146575 */ DefaultAssociativeDom_chpl_taskID_t_F ret2 = NULL;
  /* 1146389 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _field_destructor_tmp_ = NULL;
  /* 1146399 */ DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
  /* 1146409 */ _ref_atomicflag _field_destructor_tmp_3 = NULL;
  /* 1146416 */ _ref_atomic_flag call_tmp4 = NULL;
  /* 1146426 */ _ref_atomic_int64 _field_destructor_tmp_4 = NULL;
  /* 1146433 */ _ref_atomic_int_least64_t call_tmp5 = NULL;
  /* 1146443 */ BaseAssociativeDom _parent_destructor_tmp_ = NULL;
  /* 1146450 */ BaseDom _parent_destructor_tmp_2 = NULL;
  /* 1146457 */ _ref_atomicflag _field_destructor_tmp_5 = NULL;
  /* 1146464 */ _ref_atomic_flag call_tmp6 = NULL;
  /* 1146474 */ _ref_atomic_refcnt _field_destructor_tmp_6 = NULL;
  /* 1146481 */ _ref_atomic_int64 _field_destructor_tmp_7 = NULL;
  /* 1146488 */ _ref_atomic_int_least64_t call_tmp7 = NULL;
  /*  770223 */ chpl_opaque call_tmp8;
  /* 770104*/ /* 1146567*/ ret = this7;
  /* 1146760*/ call_tmp2 = ((BaseDom)(ret));
  /* 1275440*/ chpl_check_nil(call_tmp2, INT64(696), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 770182*/ call_tmp = destroyDom(call_tmp2, _ln, _fn);
  /* 1100663*/ call_tmp3 = (call_tmp == INT64(0));
  /* 770232*/ if (call_tmp3) /* 770210*/ {
    /* 1146584*/ ret2 = this7;
    /* 770213*/ delete_tmp = ret2;
    /* 1277372*/ chpl_check_nil(delete_tmp, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146391*/ _field_destructor_tmp_ = (delete_tmp)->table;
    /* 1146397*/ chpl__autoDestroy6(_field_destructor_tmp_, _ln, _fn);
    /* 1277374*/ chpl_check_nil(delete_tmp, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146401*/ _field_destructor_tmp_2 = (delete_tmp)->tableDom;
    /* 1146407*/ chpl__autoDestroy2(_field_destructor_tmp_2, _ln, _fn);
    /* 1277376*/ chpl_check_nil(delete_tmp, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146411*/ _field_destructor_tmp_3 = &((delete_tmp)->tableLock);
    /* 1277378*/ chpl_check_nil(_field_destructor_tmp_3, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146418*/ call_tmp4 = &((_field_destructor_tmp_3)->_v);
    /* 1146424*/ atomic_destroy_flag(call_tmp4);
    /* 1277380*/ chpl_check_nil(delete_tmp, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146428*/ _field_destructor_tmp_4 = &((delete_tmp)->numEntries);
    /* 1277382*/ chpl_check_nil(_field_destructor_tmp_4, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146435*/ call_tmp5 = &((_field_destructor_tmp_4)->_v);
    /* 1146441*/ atomic_destroy_int_least64_t(call_tmp5);
    /* 1146445*/ _parent_destructor_tmp_ = ((BaseAssociativeDom)(delete_tmp));
    /* 1146452*/ _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
    /* 1277384*/ chpl_check_nil(_parent_destructor_tmp_2, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146459*/ _field_destructor_tmp_5 = &((_parent_destructor_tmp_2)->_arrsLock);
    /* 1277386*/ chpl_check_nil(_field_destructor_tmp_5, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146466*/ call_tmp6 = &((_field_destructor_tmp_5)->_v);
    /* 1146472*/ atomic_destroy_flag(call_tmp6);
    /* 1277388*/ chpl_check_nil(_parent_destructor_tmp_2, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146476*/ _field_destructor_tmp_6 = &((_parent_destructor_tmp_2)->_domCnt);
    /* 1277390*/ chpl_check_nil(_field_destructor_tmp_6, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146483*/ _field_destructor_tmp_7 = &((_field_destructor_tmp_6)->_cnt);
    /* 1277392*/ chpl_check_nil(_field_destructor_tmp_7, INT64(698), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146490*/ call_tmp7 = &((_field_destructor_tmp_7)->_v);
    /* 1146496*/ atomic_destroy_int_least64_t(call_tmp7);
    /* 770225*/ call_tmp8 = ((void*)(delete_tmp));
    /* 770230*/ chpl_here_free(call_tmp8, _ln, _fn);
  }
  /* 770235*/ return;
}

/* ChapelArray.chpl:704 */
/* 1039455 */ static void dist(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
  /* 1039462 */ DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  /* 1121885 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1121283 */ DefaultDist ret2 = NULL;
  /* 1039482 */ DefaultDist call_tmp2 = NULL;
  /* 1051637 */ _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  /* 1039459*/ /* 1121894*/ ret = this7;
  /* 1039464*/ call_tmp = ret;
  /* 1276400*/ chpl_check_nil(call_tmp, INT64(704), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1121285*/ ret2 = (call_tmp)->dist;
  /* 1051640*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1039495*/ _getDistribution(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1039518*/ *(_retArg) = call_tmp2;
  /* 1039512*/ return;
}

/* ChapelArray.chpl:752 */
/* 1049514 */ static void this2(DefaultRectangularDom_1_int64_t_F this7, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1049530 */ _tuple_1_star_range_int64_t_bounded_F r;
  /* 1120340 */ range_int64_t_bounded_F this8;
  /* 1120382 */ range_int64_t_bounded_F wrap_call_tmp;
  /* 1049563 */ _ref_range_int64_t_bounded_F call_tmp = NULL;
  /* 1121953 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1049577 */ range_int64_t_bounded_F call_tmp2;
  /* 1052133 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1049598 */ range_int64_t_bounded_F call_tmp3;
  /* 1052140 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  /* 1056602 */ _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  /* 1121970 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1049649 */ DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
  /* 1049663 */ DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  /* 1052147 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  /* 1049520*/ /* 1120342*/ (&this8)->_low = INT64(0);
  /* 1120346*/ (&this8)->_high = INT64(0);
  /* 1120350*/ (&this8)->_stride = INT64(0);
  /* 1120354*/ (&this8)->_alignment = INT64(0);
  /* 1120358*/ (&this8)->_aligned = false;
  /* 1120362*/ (&this8)->_low = INT64(1);
  /* 1120366*/ (&this8)->_high = INT64(0);
  /* 1120370*/ (&this8)->_stride = INT64(1);
  /* 1120374*/ (&this8)->_alignment = INT64(0);
  /* 1120378*/ (&this8)->_aligned = false;
  /* 1120384*/ wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this8, _ln, _fn);
  /* 1258782*/ *(r + INT64(0)) = wrap_call_tmp;
  /* 1049565*/ call_tmp = (r + INT64(0));
  /* 1121962*/ ret = this7;
  /* 1052136*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1275722*/ chpl_check_nil(ret, INT64(759), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1049584*/ dsiDim(ret, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1052143*/ ret_to_arg_ref_tmp_2 = &call_tmp3;
  /* 1056606*/ _ref_tmp_ = &call_tmp2;
  /* 1049611*/ this3(_ref_tmp_, _e0_ranges, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1123521*/ *(call_tmp) = call_tmp3;
  /* 1121979*/ ret2 = this7;
  /* 1275724*/ chpl_check_nil(ret2, INT64(761), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1049651*/ call_tmp4 = dsiBuildRectangularDom(ret2, &r, _ln, _fn);
  /* 1052150*/ ret_to_arg_ref_tmp_3 = &call_tmp5;
  /* 1049670*/ _newDomain(call_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
  /* 1049696*/ *(_retArg) = call_tmp5;
  /* 1049690*/ return;
}

/* ChapelArray.chpl:813 */
/* 1050723 */ static void buildArray(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1050732 */ DefaultRectangularArr_locale_1_int64_t_F x = NULL;
  /* 1122004 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1050741 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  /* 1050753 */ _ref_DefaultRectangularArr_locale_1_int64_t_F T = NULL;
  /* 1050763 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  /* 1050767 */ _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1050727*/ /* 1122013*/ ret = this7;
  /* 1275726*/ chpl_check_nil(ret, INT64(814), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1050743*/ call_tmp = dsiBuildArray2(ret, _ln, _fn);
  /* 1050748*/ x = call_tmp;
  /* 1050755*/ T = &x;
  /* 1050760*/ help(this7, T, _ln, _fn);
  /* 1050769*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1050774*/ _newArray(x, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1050793*/ *(_retArg) = call_tmp2;
  /* 1050787*/ return;
}

/* ChapelArray.chpl:813 */
/* 1050802 */ static void buildArray2(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1050811 */ DefaultRectangularArr_localesSignal_1_int64_t_F x = NULL;
  /* 1122021 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1050820 */ DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
  /* 1050832 */ _ref_DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
  /* 1050842 */ DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp2 = NULL;
  /* 1050846 */ _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1050806*/ /* 1122030*/ ret = this7;
  /* 1275728*/ chpl_check_nil(ret, INT64(814), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1050822*/ call_tmp = dsiBuildArray3(ret, _ln, _fn);
  /* 1050827*/ x = call_tmp;
  /* 1050834*/ T = &x;
  /* 1050839*/ help2(this7, T, _ln, _fn);
  /* 1050848*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1050853*/ _newArray2(x, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1050872*/ *(_retArg) = call_tmp2;
  /* 1050866*/ return;
}

/* ChapelArray.chpl:813 */
/* 1050923 */ static void buildArray3(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1050932 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x = NULL;
  /* 1122038 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1050941 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = NULL;
  /* 1050953 */ _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  /* 1050963 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp2 = NULL;
  /* 1050967 */ _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1050927*/ /* 1122047*/ ret = this7;
  /* 1275730*/ chpl_check_nil(ret, INT64(814), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1050943*/ call_tmp = dsiBuildArray4(ret, _ln, _fn);
  /* 1050948*/ x = call_tmp;
  /* 1050955*/ T = &x;
  /* 1050960*/ help3(this7, T, _ln, _fn);
  /* 1050969*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1050974*/ _newArray3(x, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1050993*/ *(_retArg) = call_tmp2;
  /* 1050987*/ return;
}

/* ChapelArray.chpl:813 */
/* 1051002 */ static void buildArray4(DefaultAssociativeDom_chpl_taskID_t_F this7, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051011 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x = NULL;
  /* 1146711 */ DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  /* 1051020 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp = NULL;
  /* 1051032 */ _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F T = NULL;
  /* 1051042 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp2 = NULL;
  /* 1051046 */ _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051006*/ /* 1146720*/ ret = this7;
  /* 1275732*/ chpl_check_nil(ret, INT64(814), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051022*/ call_tmp = dsiBuildArray(ret, _ln, _fn);
  /* 1051027*/ x = call_tmp;
  /* 1051034*/ T = &x;
  /* 1051039*/ help4(this7, T, _ln, _fn);
  /* 1051048*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1051053*/ _newArray4(x, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051072*/ *(_retArg) = call_tmp2;
  /* 1051066*/ return;
}

/* ChapelArray.chpl:813 */
/* 1051081 */ static void buildArray5(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1051090 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F x = NULL;
  /* 1122055 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1051099 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp = NULL;
  /* 1051111 */ _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F T = NULL;
  /* 1051121 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp2 = NULL;
  /* 1051125 */ _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1051085*/ /* 1122064*/ ret = this7;
  /* 1275734*/ chpl_check_nil(ret, INT64(814), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1051101*/ call_tmp = dsiBuildArray5(ret, _ln, _fn);
  /* 1051106*/ x = call_tmp;
  /* 1051113*/ T = &x;
  /* 1051118*/ help5(this7, T, _ln, _fn);
  /* 1051127*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1051132*/ _newArray5(x, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1051151*/ *(_retArg) = call_tmp2;
  /* 1051145*/ return;
}

/* ChapelArray.chpl:816 */
/*  577493 */ static void help(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272418 */ memory_order local_memory_order_seq_cst;
  /* 1121494 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /*  601920 */ BaseDom coerce_tmp = NULL;
  /* 1122162 */ BaseDom call_tmp = NULL;
  /* 1029670 */ DefaultRectangularArr_locale_1_int64_t_F T = NULL;
  /* 1129807 */ chpl_bool T2;
  /* 1129809 */ _ref_atomicflag call_tmp2 = NULL;
  /* 1129816 */ memory_order default_argorder;
  /* 1129823 */ _ref_atomic_flag call_tmp3 = NULL;
  /* 1129830 */ chpl_bool call_tmp4;
  /* 1129846 */ _ref_atomicflag call_tmp5 = NULL;
  /* 1129853 */ memory_order default_argorder2;
  /* 1129860 */ _ref_atomic_flag call_tmp6 = NULL;
  /* 1129867 */ chpl_bool call_tmp7;
  /* 1129878 */ _ref_list_BaseArr call_tmp8 = NULL;
  /* 1129885 */ BaseArr call_tmp9 = NULL;
  /* 1129896 */ _ref_atomicflag call_tmp10 = NULL;
  /* 1129903 */ memory_order default_argorder3;
  /* 1129910 */ _ref_atomic_flag call_tmp11 = NULL;
  /* 1121511 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /*  604393 */ BaseDom coerce_tmp2 = NULL;
  /* 1122172 */ BaseDom call_tmp12 = NULL;
  /* 1130166 */ _ref_atomic_refcnt call_tmp13 = NULL;
  /* 1130173 */ _ref_atomic_int64 call_tmp14 = NULL;
  /* 1130180 */ memory_order default_argorder4;
  /* 1130187 */ _ref_atomic_int_least64_t call_tmp15 = NULL;
  /* 577495*/ /* 1272419*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1121503*/ ret = this7;
  /* 1122164*/ call_tmp = ((BaseDom)(ret));
  /* 601925*/ coerce_tmp = call_tmp;
  /* 1029674*/ T = *(x);
  /* 1276684*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1129811*/ call_tmp2 = &((coerce_tmp)->_arrsLock);
  /* 1129818*/ default_argorder = local_memory_order_seq_cst;
  /* 1276686*/ chpl_check_nil(call_tmp2, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1129825*/ call_tmp3 = &((call_tmp2)->_v);
  /* 1129832*/ call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  /* 1129838*/ T2 = call_tmp4;
  /* 1129841*/ while (T2) {
    /* 1129845*/ chpl_task_yield();
    /* 1276688*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1129848*/ call_tmp5 = &((coerce_tmp)->_arrsLock);
    /* 1129855*/ default_argorder2 = local_memory_order_seq_cst;
    /* 1276690*/ chpl_check_nil(call_tmp5, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1129862*/ call_tmp6 = &((call_tmp5)->_v);
    /* 1129869*/ call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    /* 1129875*/ T2 = call_tmp7;
  }
  /* 1276692*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1129880*/ call_tmp8 = &((coerce_tmp)->_arrs);
  /* 1129887*/ call_tmp9 = ((BaseArr)(T));
  /* 1276694*/ chpl_check_nil(call_tmp8, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1129893*/ append(call_tmp8, call_tmp9, _ln, _fn);
  /* 1276696*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1129898*/ call_tmp10 = &((coerce_tmp)->_arrsLock);
  /* 1129905*/ default_argorder3 = local_memory_order_seq_cst;
  /* 1276698*/ chpl_check_nil(call_tmp10, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1129912*/ call_tmp11 = &((call_tmp10)->_v);
  /* 1129918*/ atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  /* 1121520*/ ret2 = this7;
  /* 1122174*/ call_tmp12 = ((BaseDom)(ret2));
  /* 604398*/ coerce_tmp2 = call_tmp12;
  /* 1130165*/ compilerAssert();
  /* 1276738*/ chpl_check_nil(coerce_tmp2, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130168*/ call_tmp13 = &((coerce_tmp2)->_domCnt);
  /* 1276740*/ chpl_check_nil(call_tmp13, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130175*/ call_tmp14 = &((call_tmp13)->_cnt);
  /* 1130182*/ default_argorder4 = local_memory_order_seq_cst;
  /* 1276742*/ chpl_check_nil(call_tmp14, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130189*/ call_tmp15 = &((call_tmp14)->_v);
  /* 1130195*/ atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  /* 577540*/ return;
}

/* ChapelArray.chpl:816 */
/*  636423 */ static void help2(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272427 */ memory_order local_memory_order_seq_cst;
  /* 1121528 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /*  651932 */ BaseDom coerce_tmp = NULL;
  /* 1122182 */ BaseDom call_tmp = NULL;
  /* 1029784 */ DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
  /* 1135322 */ chpl_bool T2;
  /* 1135324 */ _ref_atomicflag call_tmp2 = NULL;
  /* 1135331 */ memory_order default_argorder;
  /* 1135338 */ _ref_atomic_flag call_tmp3 = NULL;
  /* 1135345 */ chpl_bool call_tmp4;
  /* 1135361 */ _ref_atomicflag call_tmp5 = NULL;
  /* 1135368 */ memory_order default_argorder2;
  /* 1135375 */ _ref_atomic_flag call_tmp6 = NULL;
  /* 1135382 */ chpl_bool call_tmp7;
  /* 1135393 */ _ref_list_BaseArr call_tmp8 = NULL;
  /* 1135400 */ BaseArr call_tmp9 = NULL;
  /* 1135411 */ _ref_atomicflag call_tmp10 = NULL;
  /* 1135418 */ memory_order default_argorder3;
  /* 1135425 */ _ref_atomic_flag call_tmp11 = NULL;
  /* 1121545 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /*  653860 */ BaseDom coerce_tmp2 = NULL;
  /* 1122192 */ BaseDom call_tmp12 = NULL;
  /* 1130204 */ _ref_atomic_refcnt call_tmp13 = NULL;
  /* 1130211 */ _ref_atomic_int64 call_tmp14 = NULL;
  /* 1130218 */ memory_order default_argorder4;
  /* 1130225 */ _ref_atomic_int_least64_t call_tmp15 = NULL;
  /* 636425*/ /* 1272428*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1121537*/ ret = this7;
  /* 1122184*/ call_tmp = ((BaseDom)(ret));
  /* 651937*/ coerce_tmp = call_tmp;
  /* 1029788*/ T = *(x);
  /* 1276968*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1135326*/ call_tmp2 = &((coerce_tmp)->_arrsLock);
  /* 1135333*/ default_argorder = local_memory_order_seq_cst;
  /* 1276970*/ chpl_check_nil(call_tmp2, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1135340*/ call_tmp3 = &((call_tmp2)->_v);
  /* 1135347*/ call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  /* 1135353*/ T2 = call_tmp4;
  /* 1135356*/ while (T2) {
    /* 1135360*/ chpl_task_yield();
    /* 1276972*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1135363*/ call_tmp5 = &((coerce_tmp)->_arrsLock);
    /* 1135370*/ default_argorder2 = local_memory_order_seq_cst;
    /* 1276974*/ chpl_check_nil(call_tmp5, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1135377*/ call_tmp6 = &((call_tmp5)->_v);
    /* 1135384*/ call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    /* 1135390*/ T2 = call_tmp7;
  }
  /* 1276976*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1135395*/ call_tmp8 = &((coerce_tmp)->_arrs);
  /* 1135402*/ call_tmp9 = ((BaseArr)(T));
  /* 1276978*/ chpl_check_nil(call_tmp8, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1135408*/ append(call_tmp8, call_tmp9, _ln, _fn);
  /* 1276980*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1135413*/ call_tmp10 = &((coerce_tmp)->_arrsLock);
  /* 1135420*/ default_argorder3 = local_memory_order_seq_cst;
  /* 1276982*/ chpl_check_nil(call_tmp10, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1135427*/ call_tmp11 = &((call_tmp10)->_v);
  /* 1135433*/ atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  /* 1121554*/ ret2 = this7;
  /* 1122194*/ call_tmp12 = ((BaseDom)(ret2));
  /* 653865*/ coerce_tmp2 = call_tmp12;
  /* 1130203*/ compilerAssert();
  /* 1276744*/ chpl_check_nil(coerce_tmp2, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130206*/ call_tmp13 = &((coerce_tmp2)->_domCnt);
  /* 1276746*/ chpl_check_nil(call_tmp13, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130213*/ call_tmp14 = &((call_tmp13)->_cnt);
  /* 1130220*/ default_argorder4 = local_memory_order_seq_cst;
  /* 1276748*/ chpl_check_nil(call_tmp14, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130227*/ call_tmp15 = &((call_tmp14)->_v);
  /* 1130233*/ atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  /* 636470*/ return;
}

/* ChapelArray.chpl:816 */
/*  748891 */ static void help3(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272517 */ memory_order local_memory_order_seq_cst;
  /* 1121562 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /*  764024 */ BaseDom coerce_tmp = NULL;
  /* 1122202 */ BaseDom call_tmp = NULL;
  /* 1029796 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  /* 1145573 */ chpl_bool T2;
  /* 1145575 */ _ref_atomicflag call_tmp2 = NULL;
  /* 1145582 */ memory_order default_argorder;
  /* 1145589 */ _ref_atomic_flag call_tmp3 = NULL;
  /* 1145596 */ chpl_bool call_tmp4;
  /* 1145612 */ _ref_atomicflag call_tmp5 = NULL;
  /* 1145619 */ memory_order default_argorder2;
  /* 1145626 */ _ref_atomic_flag call_tmp6 = NULL;
  /* 1145633 */ chpl_bool call_tmp7;
  /* 1145644 */ _ref_list_BaseArr call_tmp8 = NULL;
  /* 1145651 */ BaseArr call_tmp9 = NULL;
  /* 1145662 */ _ref_atomicflag call_tmp10 = NULL;
  /* 1145669 */ memory_order default_argorder3;
  /* 1145676 */ _ref_atomic_flag call_tmp11 = NULL;
  /* 1121579 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /*  765952 */ BaseDom coerce_tmp2 = NULL;
  /* 1122212 */ BaseDom call_tmp12 = NULL;
  /* 1130242 */ _ref_atomic_refcnt call_tmp13 = NULL;
  /* 1130249 */ _ref_atomic_int64 call_tmp14 = NULL;
  /* 1130256 */ memory_order default_argorder4;
  /* 1130263 */ _ref_atomic_int_least64_t call_tmp15 = NULL;
  /* 748893*/ /* 1272518*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1121571*/ ret = this7;
  /* 1122204*/ call_tmp = ((BaseDom)(ret));
  /* 764029*/ coerce_tmp = call_tmp;
  /* 1029800*/ T = *(x);
  /* 1277324*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1145577*/ call_tmp2 = &((coerce_tmp)->_arrsLock);
  /* 1145584*/ default_argorder = local_memory_order_seq_cst;
  /* 1277326*/ chpl_check_nil(call_tmp2, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1145591*/ call_tmp3 = &((call_tmp2)->_v);
  /* 1145598*/ call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  /* 1145604*/ T2 = call_tmp4;
  /* 1145607*/ while (T2) {
    /* 1145611*/ chpl_task_yield();
    /* 1277328*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1145614*/ call_tmp5 = &((coerce_tmp)->_arrsLock);
    /* 1145621*/ default_argorder2 = local_memory_order_seq_cst;
    /* 1277330*/ chpl_check_nil(call_tmp5, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1145628*/ call_tmp6 = &((call_tmp5)->_v);
    /* 1145635*/ call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    /* 1145641*/ T2 = call_tmp7;
  }
  /* 1277332*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1145646*/ call_tmp8 = &((coerce_tmp)->_arrs);
  /* 1145653*/ call_tmp9 = ((BaseArr)(T));
  /* 1277334*/ chpl_check_nil(call_tmp8, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1145659*/ append(call_tmp8, call_tmp9, _ln, _fn);
  /* 1277336*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1145664*/ call_tmp10 = &((coerce_tmp)->_arrsLock);
  /* 1145671*/ default_argorder3 = local_memory_order_seq_cst;
  /* 1277338*/ chpl_check_nil(call_tmp10, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1145678*/ call_tmp11 = &((call_tmp10)->_v);
  /* 1145684*/ atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  /* 1121588*/ ret2 = this7;
  /* 1122214*/ call_tmp12 = ((BaseDom)(ret2));
  /* 765957*/ coerce_tmp2 = call_tmp12;
  /* 1130241*/ compilerAssert();
  /* 1276750*/ chpl_check_nil(coerce_tmp2, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130244*/ call_tmp13 = &((coerce_tmp2)->_domCnt);
  /* 1276752*/ chpl_check_nil(call_tmp13, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130251*/ call_tmp14 = &((call_tmp13)->_cnt);
  /* 1130258*/ default_argorder4 = local_memory_order_seq_cst;
  /* 1276754*/ chpl_check_nil(call_tmp14, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130265*/ call_tmp15 = &((call_tmp14)->_v);
  /* 1130271*/ atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  /* 748938*/ return;
}

/* ChapelArray.chpl:816 */
/*  772392 */ static void help4(DefaultAssociativeDom_chpl_taskID_t_F this7, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x, int64_t _ln, c_string _fn) {
  /* 1272526 */ memory_order local_memory_order_seq_cst;
  /* 1146592 */ DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  /*  791294 */ BaseDom coerce_tmp = NULL;
  /* 1146768 */ BaseDom call_tmp = NULL;
  /* 1029802 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F T = NULL;
  /* 1149023 */ chpl_bool T2;
  /* 1149025 */ _ref_atomicflag call_tmp2 = NULL;
  /* 1149032 */ memory_order default_argorder;
  /* 1149039 */ _ref_atomic_flag call_tmp3 = NULL;
  /* 1149046 */ chpl_bool call_tmp4;
  /* 1149062 */ _ref_atomicflag call_tmp5 = NULL;
  /* 1149069 */ memory_order default_argorder2;
  /* 1149076 */ _ref_atomic_flag call_tmp6 = NULL;
  /* 1149083 */ chpl_bool call_tmp7;
  /* 1149094 */ _ref_list_BaseArr call_tmp8 = NULL;
  /* 1149101 */ BaseArr call_tmp9 = NULL;
  /* 1149112 */ _ref_atomicflag call_tmp10 = NULL;
  /* 1149119 */ memory_order default_argorder3;
  /* 1149126 */ _ref_atomic_flag call_tmp11 = NULL;
  /* 1146609 */ DefaultAssociativeDom_chpl_taskID_t_F ret2 = NULL;
  /*  793222 */ BaseDom coerce_tmp2 = NULL;
  /* 1146778 */ BaseDom call_tmp12 = NULL;
  /* 1130280 */ _ref_atomic_refcnt call_tmp13 = NULL;
  /* 1130287 */ _ref_atomic_int64 call_tmp14 = NULL;
  /* 1130294 */ memory_order default_argorder4;
  /* 1130301 */ _ref_atomic_int_least64_t call_tmp15 = NULL;
  /* 772394*/ /* 1272527*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1146601*/ ret = this7;
  /* 1146770*/ call_tmp = ((BaseDom)(ret));
  /* 791299*/ coerce_tmp = call_tmp;
  /* 1029806*/ T = *(x);
  /* 1277608*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1149027*/ call_tmp2 = &((coerce_tmp)->_arrsLock);
  /* 1149034*/ default_argorder = local_memory_order_seq_cst;
  /* 1277610*/ chpl_check_nil(call_tmp2, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1149041*/ call_tmp3 = &((call_tmp2)->_v);
  /* 1149048*/ call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  /* 1149054*/ T2 = call_tmp4;
  /* 1149057*/ while (T2) {
    /* 1149061*/ chpl_task_yield();
    /* 1277612*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1149064*/ call_tmp5 = &((coerce_tmp)->_arrsLock);
    /* 1149071*/ default_argorder2 = local_memory_order_seq_cst;
    /* 1277614*/ chpl_check_nil(call_tmp5, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1149078*/ call_tmp6 = &((call_tmp5)->_v);
    /* 1149085*/ call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    /* 1149091*/ T2 = call_tmp7;
  }
  /* 1277616*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1149096*/ call_tmp8 = &((coerce_tmp)->_arrs);
  /* 1149103*/ call_tmp9 = ((BaseArr)(T));
  /* 1277618*/ chpl_check_nil(call_tmp8, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1149109*/ append(call_tmp8, call_tmp9, _ln, _fn);
  /* 1277620*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1149114*/ call_tmp10 = &((coerce_tmp)->_arrsLock);
  /* 1149121*/ default_argorder3 = local_memory_order_seq_cst;
  /* 1277622*/ chpl_check_nil(call_tmp10, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1149128*/ call_tmp11 = &((call_tmp10)->_v);
  /* 1149134*/ atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  /* 1146618*/ ret2 = this7;
  /* 1146780*/ call_tmp12 = ((BaseDom)(ret2));
  /* 793227*/ coerce_tmp2 = call_tmp12;
  /* 1130279*/ compilerAssert();
  /* 1276756*/ chpl_check_nil(coerce_tmp2, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130282*/ call_tmp13 = &((coerce_tmp2)->_domCnt);
  /* 1276758*/ chpl_check_nil(call_tmp13, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130289*/ call_tmp14 = &((call_tmp13)->_cnt);
  /* 1130296*/ default_argorder4 = local_memory_order_seq_cst;
  /* 1276760*/ chpl_check_nil(call_tmp14, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130303*/ call_tmp15 = &((call_tmp14)->_v);
  /* 1130309*/ atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  /* 772439*/ return;
}

/* ChapelArray.chpl:816 */
/*  773336 */ static void help5(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F x, int64_t _ln, c_string _fn) {
  /* 1272535 */ memory_order local_memory_order_seq_cst;
  /* 1121596 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /*  787331 */ BaseDom coerce_tmp = NULL;
  /* 1122222 */ BaseDom call_tmp = NULL;
  /* 1029808 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F T = NULL;
  /* 1148244 */ chpl_bool T2;
  /* 1148246 */ _ref_atomicflag call_tmp2 = NULL;
  /* 1148253 */ memory_order default_argorder;
  /* 1148260 */ _ref_atomic_flag call_tmp3 = NULL;
  /* 1148267 */ chpl_bool call_tmp4;
  /* 1148283 */ _ref_atomicflag call_tmp5 = NULL;
  /* 1148290 */ memory_order default_argorder2;
  /* 1148297 */ _ref_atomic_flag call_tmp6 = NULL;
  /* 1148304 */ chpl_bool call_tmp7;
  /* 1148315 */ _ref_list_BaseArr call_tmp8 = NULL;
  /* 1148322 */ BaseArr call_tmp9 = NULL;
  /* 1148333 */ _ref_atomicflag call_tmp10 = NULL;
  /* 1148340 */ memory_order default_argorder3;
  /* 1148347 */ _ref_atomic_flag call_tmp11 = NULL;
  /* 1121613 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /*  789259 */ BaseDom coerce_tmp2 = NULL;
  /* 1122232 */ BaseDom call_tmp12 = NULL;
  /* 1130318 */ _ref_atomic_refcnt call_tmp13 = NULL;
  /* 1130325 */ _ref_atomic_int64 call_tmp14 = NULL;
  /* 1130332 */ memory_order default_argorder4;
  /* 1130339 */ _ref_atomic_int_least64_t call_tmp15 = NULL;
  /* 773338*/ /* 1272536*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1121605*/ ret = this7;
  /* 1122224*/ call_tmp = ((BaseDom)(ret));
  /* 787336*/ coerce_tmp = call_tmp;
  /* 1029812*/ T = *(x);
  /* 1277558*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1148248*/ call_tmp2 = &((coerce_tmp)->_arrsLock);
  /* 1148255*/ default_argorder = local_memory_order_seq_cst;
  /* 1277560*/ chpl_check_nil(call_tmp2, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1148262*/ call_tmp3 = &((call_tmp2)->_v);
  /* 1148269*/ call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  /* 1148275*/ T2 = call_tmp4;
  /* 1148278*/ while (T2) {
    /* 1148282*/ chpl_task_yield();
    /* 1277562*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1148285*/ call_tmp5 = &((coerce_tmp)->_arrsLock);
    /* 1148292*/ default_argorder2 = local_memory_order_seq_cst;
    /* 1277564*/ chpl_check_nil(call_tmp5, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1148299*/ call_tmp6 = &((call_tmp5)->_v);
    /* 1148306*/ call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    /* 1148312*/ T2 = call_tmp7;
  }
  /* 1277566*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1148317*/ call_tmp8 = &((coerce_tmp)->_arrs);
  /* 1148324*/ call_tmp9 = ((BaseArr)(T));
  /* 1277568*/ chpl_check_nil(call_tmp8, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1148330*/ append(call_tmp8, call_tmp9, _ln, _fn);
  /* 1277570*/ chpl_check_nil(coerce_tmp, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1148335*/ call_tmp10 = &((coerce_tmp)->_arrsLock);
  /* 1148342*/ default_argorder3 = local_memory_order_seq_cst;
  /* 1277572*/ chpl_check_nil(call_tmp10, INT64(817), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1148349*/ call_tmp11 = &((call_tmp10)->_v);
  /* 1148355*/ atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  /* 1121622*/ ret2 = this7;
  /* 1122234*/ call_tmp12 = ((BaseDom)(ret2));
  /* 789264*/ coerce_tmp2 = call_tmp12;
  /* 1130317*/ compilerAssert();
  /* 1276762*/ chpl_check_nil(coerce_tmp2, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130320*/ call_tmp13 = &((coerce_tmp2)->_domCnt);
  /* 1276764*/ chpl_check_nil(call_tmp13, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130327*/ call_tmp14 = &((call_tmp13)->_cnt);
  /* 1130334*/ default_argorder4 = local_memory_order_seq_cst;
  /* 1276766*/ chpl_check_nil(call_tmp14, INT64(819), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1130341*/ call_tmp15 = &((call_tmp14)->_v);
  /* 1130347*/ atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  /* 773383*/ return;
}

/* ChapelArray.chpl:835 */
/*  881897 */ static void add(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t i, int64_t _ln, c_string _fn) {
  /* 1146643 */ DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  /* 881910*/ /* 1146652*/ ret = this7;
  /* 1277824*/ chpl_check_nil(ret, INT64(836), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1162747*/ dsiAdd(ret, i, INT64(-1), true, _ln, _fn);
  /* 881925*/ return;
}

/* ChapelArray.chpl:839 */
/*  934448 */ static void remove2(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t i, int64_t _ln, c_string _fn) {
  /* 1146660 */ DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  /* 934461*/ /* 1146669*/ ret = this7;
  /* 1275570*/ chpl_check_nil(ret, INT64(840), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 934474*/ dsiRemove(ret, i, _ln, _fn);
  /* 934476*/ return;
}

/* ChapelArray.chpl:856 */
/*  970428 */ static int64_t numIndices(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn) {
  /* 1121647 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /*  970450 */ int64_t call_tmp;
  /* 970439*/ /* 1121656*/ ret = this7;
  /* 1275576*/ chpl_check_nil(ret, INT64(856), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 970452*/ call_tmp = dsiNumIndices(ret, _ln, _fn);
  /* 970462*/ return call_tmp;
}

/* ChapelArray.chpl:858 */
/*  870281 */ static int64_t high(DefaultRectangularDom_1_int64_t_F this7, int64_t _ln, c_string _fn) {
  /* 1121630 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /*  870303 */ int64_t call_tmp;
  /* 870292*/ /* 1121639*/ ret = this7;
  /* 1275506*/ chpl_check_nil(ret, INT64(858), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 870305*/ call_tmp = dsiHigh(ret, _ln, _fn);
  /* 870315*/ return call_tmp;
}

/* ChapelArray.chpl:866 */
/*  865379 */ static chpl_bool member(DefaultAssociativeDom_chpl_taskID_t_F this7, _tuple_1_star_chpl_taskID_t* const i, int64_t _ln, c_string _fn) {
  /* 1146626 */ DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  /*  868086 */ chpl_bool call_tmp;
  /*  868229 */ chpl_taskID_t coerce_tmp;
  /* 867930*/ /* 1146635*/ ret = this7;
  /* 868232*/ coerce_tmp = *(*(i) + INT64(0));
  /* 1275504*/ chpl_check_nil(ret, INT64(870), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 868088*/ call_tmp = dsiMember(ret, coerce_tmp, _ln, _fn);
  /* 868105*/ return call_tmp;
}

/* ChapelArray.chpl:873 */
/*  867837 */ static chpl_bool member2(DefaultAssociativeDom_chpl_taskID_t_F this7, chpl_taskID_t _e0_i, int64_t _ln, c_string _fn) {
  /*  867890 */ _tuple_1_star_chpl_taskID_t i;
  /*  867901 */ chpl_bool call_tmp;
  /* 867898*/ /* 1268183*/ *(i + INT64(0)) = _e0_i;
  /* 1275502*/ chpl_check_nil(this7, INT64(874), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 867903*/ call_tmp = member(this7, &i, _ln, _fn);
  /* 867915*/ return call_tmp;
}

/* ChapelArray.chpl:1065 */
/*  571799 */ static void setIndices(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn) {
  /* 1121392 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 571812*/ /* 1121401*/ ret = this7;
  /* 1275272*/ chpl_check_nil(ret, INT64(1066), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 571825*/ dsiSetIndices(ret, x, _ln, _fn);
  /* 571863*/ return;
}

/* ChapelArray.chpl:1072 */
/* 1039569 */ static void getIndices(DefaultRectangularDom_1_int64_t_F this7, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  /* 1258706 */ range_int64_t_bounded_F ret_x1;
  /* 1121902 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1039583 */ _tuple_1_star_range_int64_t_bounded_F call_tmp;
  /* 1051644 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1039573*/ /* 1121911*/ ret = this7;
  /* 1051647*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1275706*/ chpl_check_nil(ret, INT64(1073), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1039590*/ dsiGetIndices(ret, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1258712*/ ret_x1 = *(call_tmp + INT64(0));
  /* 1259250*/ *(*(_retArg) + INT64(0)) = ret_x1;
  /* 1039607*/ return;
}

/* ChapelArray.chpl:1283 */
/*  604583 */ static DefaultRectangularArr_locale_1_int64_t_F _construct__array(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  /*  604597 */ DefaultRectangularArr_locale_1_int64_t_F this7 = NULL;
  /* 604964*/ /* 604967*/ this7 = meme;
  /* 604977*/ this7 = _value;
  /* 1275310*/ chpl_check_nil(this7, INT64(1283), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 604993*/ initialize(this7);
  /* 604996*/ return this7;
}

/* ChapelArray.chpl:1283 */
/*  654042 */ static DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array2(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  /*  654056 */ DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
  /* 654423*/ /* 654426*/ this7 = meme;
  /* 654436*/ this7 = _value;
  /* 1275344*/ chpl_check_nil(this7, INT64(1283), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 654452*/ initialize2(this7);
  /* 654455*/ return this7;
}

/* ChapelArray.chpl:1283 */
/*  766134 */ static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct__array3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _value, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  /*  766148 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7 = NULL;
  /* 766515*/ /* 766518*/ this7 = meme;
  /* 766528*/ this7 = _value;
  /* 1275418*/ chpl_check_nil(this7, INT64(1283), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 766544*/ initialize3(this7);
  /* 766547*/ return this7;
}

/* ChapelArray.chpl:1283 */
/*  789441 */ static DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct__array4(DefaultRectangularArr_chpldev_Task_1_int64_t_F _value, DefaultRectangularArr_chpldev_Task_1_int64_t_F meme, int64_t _ln, c_string _fn) {
  /*  789455 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F this7 = NULL;
  /* 789822*/ /* 789825*/ this7 = meme;
  /* 789835*/ this7 = _value;
  /* 1275472*/ chpl_check_nil(this7, INT64(1283), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 789851*/ initialize4(this7);
  /* 789854*/ return this7;
}

/* ChapelArray.chpl:1283 */
/*  793404 */ static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct__array5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _value, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F meme, int64_t _ln, c_string _fn) {
  /*  793418 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7 = NULL;
  /* 793785*/ /* 793788*/ this7 = meme;
  /* 793798*/ this7 = _value;
  /* 1275486*/ chpl_check_nil(this7, INT64(1283), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 793814*/ initialize5(this7);
  /* 793817*/ return this7;
}

/* ChapelArray.chpl:1288 */
/*  608397 */ static void initialize(DefaultRectangularArr_locale_1_int64_t_F this7) {
  /* 608406*/ /* 608440*/ chpl_incRefCountsForDomainsInArrayEltTypes();
  /* 608443*/ return;
}

/* ChapelArray.chpl:1288 */
/*  654994 */ static void initialize2(DefaultRectangularArr_localesSignal_1_int64_t_F this7) {
  /* 655003*/ /* 655037*/ chpl_incRefCountsForDomainsInArrayEltTypes2();
  /* 655040*/ return;
}

/* ChapelArray.chpl:1288 */
/*  767086 */ static void initialize3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7) {
  /* 767095*/ /* 767129*/ chpl_incRefCountsForDomainsInArrayEltTypes3();
  /* 767132*/ return;
}

/* ChapelArray.chpl:1288 */
/*  790393 */ static void initialize4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7) {
  /* 790402*/ /* 790436*/ chpl_incRefCountsForDomainsInArrayEltTypes4();
  /* 790439*/ return;
}

/* ChapelArray.chpl:1288 */
/*  794112 */ static void initialize5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7) {
  /* 794121*/ /* 794155*/ chpl_incRefCountsForDomainsInArrayEltTypes4();
  /* 794158*/ return;
}

/* ChapelArray.chpl:1308 */
/*  605055 */ static void chpl___TILDE__array(DefaultRectangularArr_locale_1_int64_t_F this7, int64_t _ln, c_string _fn) {
  /* 1130473 */ DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  /*  605140 */ int64_t call_tmp;
  /* 1129777 */ BaseArr call_tmp2 = NULL;
  /* 1100571 */ chpl_bool call_tmp3;
  /* 1130507 */ DefaultRectangularArr_locale_1_int64_t_F ret2 = NULL;
  /* 1125169 */ BaseArr _parent_destructor_tmp_ = NULL;
  /* 1125176 */ _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  /* 1125183 */ _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  /* 1125190 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /*  605202 */ chpl_opaque call_tmp5;
  /* 605064*/ /* 1130482*/ ret = this7;
  /* 1129779*/ call_tmp2 = ((BaseArr)(ret));
  /* 1275312*/ chpl_check_nil(call_tmp2, INT64(1312), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 605142*/ call_tmp = destroyArr(call_tmp2, _ln, _fn);
  /* 1100573*/ call_tmp3 = (call_tmp == INT64(0));
  /* 605211*/ if (call_tmp3) /* 605170*/ {
    /* 605188*/ chpl_decRefCountsForDomainsInArrayEltTypes();
    /* 1130516*/ ret2 = this7;
    /* 1125171*/ _parent_destructor_tmp_ = ((BaseArr)(ret2));
    /* 1276506*/ chpl_check_nil(_parent_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1125178*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    /* 1276508*/ chpl_check_nil(_field_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1125185*/ _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    /* 1276510*/ chpl_check_nil(_field_destructor_tmp_2, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1125192*/ call_tmp4 = &((_field_destructor_tmp_2)->_v);
    /* 1125198*/ atomic_destroy_int_least64_t(call_tmp4);
    /* 605204*/ call_tmp5 = ((void*)(ret2));
    /* 605209*/ chpl_here_free(call_tmp5, _ln, _fn);
  }
  /* 605214*/ return;
}

/* ChapelArray.chpl:1308 */
/*  654514 */ static void chpl___TILDE__array2(DefaultRectangularArr_localesSignal_1_int64_t_F this7, int64_t _ln, c_string _fn) {
  /* 1135482 */ DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  /*  654599 */ int64_t call_tmp;
  /* 1135292 */ BaseArr call_tmp2 = NULL;
  /* 1100591 */ chpl_bool call_tmp3;
  /* 1135516 */ DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = NULL;
  /* 1133989 */ BaseArr _parent_destructor_tmp_ = NULL;
  /* 1133996 */ _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  /* 1134003 */ _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  /* 1134010 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /*  654661 */ chpl_opaque call_tmp5;
  /* 654523*/ /* 1135491*/ ret = this7;
  /* 1135294*/ call_tmp2 = ((BaseArr)(ret));
  /* 1275346*/ chpl_check_nil(call_tmp2, INT64(1312), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 654601*/ call_tmp = destroyArr(call_tmp2, _ln, _fn);
  /* 1100593*/ call_tmp3 = (call_tmp == INT64(0));
  /* 654670*/ if (call_tmp3) /* 654629*/ {
    /* 654647*/ chpl_decRefCountsForDomainsInArrayEltTypes2();
    /* 1135525*/ ret2 = this7;
    /* 1133991*/ _parent_destructor_tmp_ = ((BaseArr)(ret2));
    /* 1276818*/ chpl_check_nil(_parent_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1133998*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    /* 1276820*/ chpl_check_nil(_field_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1134005*/ _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    /* 1276822*/ chpl_check_nil(_field_destructor_tmp_2, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1134012*/ call_tmp4 = &((_field_destructor_tmp_2)->_v);
    /* 1134018*/ atomic_destroy_int_least64_t(call_tmp4);
    /* 654663*/ call_tmp5 = ((void*)(ret2));
    /* 654668*/ chpl_here_free(call_tmp5, _ln, _fn);
  }
  /* 654673*/ return;
}

/* ChapelArray.chpl:1308 */
/*  766606 */ static void chpl___TILDE__array3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, int64_t _ln, c_string _fn) {
  /* 1145733 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = NULL;
  /*  766691 */ int64_t call_tmp;
  /* 1145543 */ BaseArr call_tmp2 = NULL;
  /* 1100651 */ chpl_bool call_tmp3;
  /* 1145767 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret2 = NULL;
  /* 1144222 */ BaseArr _parent_destructor_tmp_ = NULL;
  /* 1144229 */ _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  /* 1144236 */ _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  /* 1144243 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /*  766753 */ chpl_opaque call_tmp5;
  /* 766615*/ /* 1145742*/ ret = this7;
  /* 1145545*/ call_tmp2 = ((BaseArr)(ret));
  /* 1275420*/ chpl_check_nil(call_tmp2, INT64(1312), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 766693*/ call_tmp = destroyArr(call_tmp2, _ln, _fn);
  /* 1100653*/ call_tmp3 = (call_tmp == INT64(0));
  /* 766762*/ if (call_tmp3) /* 766721*/ {
    /* 766739*/ chpl_decRefCountsForDomainsInArrayEltTypes3();
    /* 1145776*/ ret2 = this7;
    /* 1144224*/ _parent_destructor_tmp_ = ((BaseArr)(ret2));
    /* 1277176*/ chpl_check_nil(_parent_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1144231*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    /* 1277178*/ chpl_check_nil(_field_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1144238*/ _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    /* 1277180*/ chpl_check_nil(_field_destructor_tmp_2, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1144245*/ call_tmp4 = &((_field_destructor_tmp_2)->_v);
    /* 1144251*/ atomic_destroy_int_least64_t(call_tmp4);
    /* 766755*/ call_tmp5 = ((void*)(ret2));
    /* 766760*/ chpl_here_free(call_tmp5, _ln, _fn);
  }
  /* 766765*/ return;
}

/* ChapelArray.chpl:1308 */
/*  789913 */ static void chpl___TILDE__array4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this7, int64_t _ln, c_string _fn) {
  /* 1148404 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = NULL;
  /*  789998 */ int64_t call_tmp;
  /* 1148214 */ BaseArr call_tmp2 = NULL;
  /* 1100671 */ chpl_bool call_tmp3;
  /* 1148438 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F ret2 = NULL;
  /* 1146951 */ BaseArr _parent_destructor_tmp_ = NULL;
  /* 1146958 */ _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  /* 1146965 */ _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  /* 1146972 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /*  790060 */ chpl_opaque call_tmp5;
  /* 789922*/ /* 1148413*/ ret = this7;
  /* 1148216*/ call_tmp2 = ((BaseArr)(ret));
  /* 1275474*/ chpl_check_nil(call_tmp2, INT64(1312), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 790000*/ call_tmp = destroyArr(call_tmp2, _ln, _fn);
  /* 1100673*/ call_tmp3 = (call_tmp == INT64(0));
  /* 790069*/ if (call_tmp3) /* 790028*/ {
    /* 790046*/ chpl_decRefCountsForDomainsInArrayEltTypes4();
    /* 1148447*/ ret2 = this7;
    /* 1146953*/ _parent_destructor_tmp_ = ((BaseArr)(ret2));
    /* 1277412*/ chpl_check_nil(_parent_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146960*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    /* 1277414*/ chpl_check_nil(_field_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146967*/ _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    /* 1277416*/ chpl_check_nil(_field_destructor_tmp_2, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1146974*/ call_tmp4 = &((_field_destructor_tmp_2)->_v);
    /* 1146980*/ atomic_destroy_int_least64_t(call_tmp4);
    /* 790062*/ call_tmp5 = ((void*)(ret2));
    /* 790067*/ chpl_here_free(call_tmp5, _ln, _fn);
  }
  /* 790072*/ return;
}

/* ChapelArray.chpl:1308 */
/*  793876 */ static void chpl___TILDE__array5(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this7, int64_t _ln, c_string _fn) {
  /* 1149183 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  /*  793961 */ int64_t call_tmp;
  /* 1148993 */ BaseArr call_tmp2 = NULL;
  /* 1100681 */ chpl_bool call_tmp3;
  /*  794011 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F delete_tmp = NULL;
  /* 1149217 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret2 = NULL;
  /* 1148641 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F _field_destructor_tmp_ = NULL;
  /* 1148651 */ DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
  /* 1148661 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F _field_destructor_tmp_3 = NULL;
  /* 1148671 */ BaseArr _parent_destructor_tmp_ = NULL;
  /* 1148678 */ _ref_atomic_refcnt _field_destructor_tmp_4 = NULL;
  /* 1148685 */ _ref_atomic_int64 _field_destructor_tmp_5 = NULL;
  /* 1148692 */ _ref_atomic_int_least64_t call_tmp4 = NULL;
  /*  794023 */ chpl_opaque call_tmp5;
  /* 793885*/ /* 1149192*/ ret = this7;
  /* 1148995*/ call_tmp2 = ((BaseArr)(ret));
  /* 1275488*/ chpl_check_nil(call_tmp2, INT64(1312), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 793963*/ call_tmp = destroyArr(call_tmp2, _ln, _fn);
  /* 1100683*/ call_tmp3 = (call_tmp == INT64(0));
  /* 794032*/ if (call_tmp3) /* 793991*/ {
    /* 794009*/ chpl_decRefCountsForDomainsInArrayEltTypes4();
    /* 1149226*/ ret2 = this7;
    /* 794013*/ delete_tmp = ret2;
    /* 1277578*/ chpl_check_nil(delete_tmp, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1148643*/ _field_destructor_tmp_ = (delete_tmp)->tmpTable;
    /* 1148649*/ chpl__autoDestroy7(_field_destructor_tmp_, _ln, _fn);
    /* 1277580*/ chpl_check_nil(delete_tmp, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1148653*/ _field_destructor_tmp_2 = (delete_tmp)->tmpDom;
    /* 1148659*/ chpl__autoDestroy2(_field_destructor_tmp_2, _ln, _fn);
    /* 1277582*/ chpl_check_nil(delete_tmp, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1148663*/ _field_destructor_tmp_3 = (delete_tmp)->data;
    /* 1148669*/ chpl__autoDestroy7(_field_destructor_tmp_3, _ln, _fn);
    /* 1148673*/ _parent_destructor_tmp_ = ((BaseArr)(ret2));
    /* 1277584*/ chpl_check_nil(_parent_destructor_tmp_, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1148680*/ _field_destructor_tmp_4 = &((_parent_destructor_tmp_)->_arrCnt);
    /* 1277586*/ chpl_check_nil(_field_destructor_tmp_4, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1148687*/ _field_destructor_tmp_5 = &((_field_destructor_tmp_4)->_cnt);
    /* 1277588*/ chpl_check_nil(_field_destructor_tmp_5, INT64(1315), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1148694*/ call_tmp4 = &((_field_destructor_tmp_5)->_v);
    /* 1148700*/ atomic_destroy_int_least64_t(call_tmp4);
    /* 794025*/ call_tmp5 = ((void*)(ret2));
    /* 794030*/ chpl_here_free(call_tmp5, _ln, _fn);
  }
  /* 794035*/ return;
}

/* ChapelArray.chpl:1324 */
/* 1038229 */ static void _dom(DefaultRectangularArr_locale_1_int64_t_F this7, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1038236 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  /* 1130626 */ DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  /* 1125958 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1038256 */ DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
  /* 1051560 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1038233*/ /* 1130635*/ ret = this7;
  /* 1038238*/ call_tmp = ret;
  /* 1276604*/ chpl_check_nil(call_tmp, INT64(1324), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1125960*/ ret2 = (call_tmp)->dom;
  /* 1051563*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1038269*/ _getDomain(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1038292*/ *(_retArg) = chpl__initCopy2(call_tmp2, _ln, _fn);
  /* 1038280*/ chpl__autoDestroy2(call_tmp2, _ln, _fn);
  /* 1038286*/ return;
}

/* ChapelArray.chpl:1324 */
/* 1042631 */ static void _dom2(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this7, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1042638 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = NULL;
  /* 1145886 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = NULL;
  /* 1144971 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1042658 */ DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
  /* 1051714 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1042635*/ /* 1145895*/ ret = this7;
  /* 1042640*/ call_tmp = ret;
  /* 1277280*/ chpl_check_nil(call_tmp, INT64(1324), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1144973*/ ret2 = (call_tmp)->dom;
  /* 1051717*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1042671*/ _getDomain(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1042694*/ *(_retArg) = call_tmp2;
  /* 1042688*/ return;
}

/* ChapelArray.chpl:1459 */
/* 1039252 */ static void newAlias(DefaultRectangularArr_locale_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1130643 */ DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  /* 1039273 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  /* 1051623 */ _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1039256*/ /* 1130652*/ ret = this7;
  /* 1051626*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1039280*/ _newArray(ret, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1039303*/ *(_retArg) = call_tmp;
  /* 1039297*/ return;
}

/* ChapelArray.chpl:2091 */
/*  667211 */ static void chpl___ASSIGN_(DefaultDist a, DefaultDist b, int64_t _ln, c_string _fn) {
  /* 1272436 */ memory_order local_memory_order_seq_cst;
  /* 1107104 */ DefaultDist ret = NULL;
  /* 1107301 */ object call_tmp = NULL;
  /* 1095005 */ chpl_bool call_tmp2;
  /*  667248 */ DefaultDist call_tmp3 = NULL;
  /* 1040614 */ _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  /* 1107121 */ DefaultDist ret2 = NULL;
  /*  667500 */ BaseDist coerce_tmp = NULL;
  /* 1119861 */ BaseDist call_tmp4 = NULL;
  /* 1116906 */ _ref_list_BaseDom call_tmp5 = NULL;
  /* 1122844 */ int64_t ret3;
  /* 1100601 */ chpl_bool call_tmp6;
  /* 1107172 */ DefaultDist ret4 = NULL;
  /* 1107189 */ DefaultDist ret5 = NULL;
  /* 1107311 */ object call_tmp7 = NULL;
  /* 1107321 */ object call_tmp8 = NULL;
  /* 1095015 */ chpl_bool call_tmp9;
  /* 1107206 */ DefaultDist ret6 = NULL;
  /*  667553 */ BaseDist coerce_tmp2 = NULL;
  /* 1119871 */ BaseDist call_tmp10 = NULL;
  /* 1119921 */ _ref_atomic_refcnt call_tmp11 = NULL;
  /* 1119928 */ _ref_atomic_int64 call_tmp12 = NULL;
  /* 1119935 */ memory_order default_argorder;
  /* 1119942 */ _ref_atomic_int_least64_t call_tmp13 = NULL;
  /* 1107223 */ DefaultDist ret7 = NULL;
  /* 1107240 */ DefaultDist ret8 = NULL;
  /* 667222*/ /* 1272437*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1107113*/ ret = a;
  /* 1107303*/ call_tmp = ((object)(ret));
  /* 1095007*/ call_tmp2 = (call_tmp == nil);
  /* 667481*/ if (call_tmp2) /* 667247*/ {
    /* 1040617*/ ret_to_arg_ref_tmp_ = &call_tmp3;
    /* 1275348*/ chpl_check_nil(b, INT64(2093), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 667256*/ clone2(b, ret_to_arg_ref_tmp_, _ln, _fn);
    /* 667257*/ a = call_tmp3;
  } else /* 667262*/ {
    /* 1107130*/ ret2 = a;
    /* 1119863*/ call_tmp4 = ((BaseDist)(ret2));
    /* 667505*/ coerce_tmp = call_tmp4;
    /* 1276198*/ chpl_check_nil(coerce_tmp, INT64(2094), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1116908*/ call_tmp5 = &((coerce_tmp)->_doms);
    /* 1276442*/ chpl_check_nil(call_tmp5, INT64(2094), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1122846*/ ret3 = (call_tmp5)->length;
    /* 1100603*/ call_tmp6 = (ret3 == INT64(0));
    /* 667480*/ if (call_tmp6) /* 667303*/ {
      /* 1107181*/ ret4 = a;
      /* 1107198*/ ret5 = b;
      /* 1107313*/ call_tmp7 = ((object)(ret4));
      /* 1107323*/ call_tmp8 = ((object)(ret5));
      /* 1095017*/ call_tmp9 = (call_tmp7 == call_tmp8);
      /* 667439*/ if (call_tmp9) /* 667385*/ {
        /* 1107215*/ ret6 = a;
        /* 1119873*/ call_tmp10 = ((BaseDist)(ret6));
        /* 667558*/ coerce_tmp2 = call_tmp10;
        /* 1119920*/ compilerAssert();
        /* 1276372*/ chpl_check_nil(coerce_tmp2, INT64(2103), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
        /* 1119923*/ call_tmp11 = &((coerce_tmp2)->_distCnt);
        /* 1276374*/ chpl_check_nil(call_tmp11, INT64(2103), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
        /* 1119930*/ call_tmp12 = &((call_tmp11)->_cnt);
        /* 1119937*/ default_argorder = local_memory_order_seq_cst;
        /* 1276376*/ chpl_check_nil(call_tmp12, INT64(2103), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
        /* 1119944*/ call_tmp13 = &((call_tmp12)->_v);
        /* 1119950*/ atomic_fetch_add_explicit_int_least64_t(call_tmp13, INT64(1), default_argorder);
      } else /* 667416*/ {
        /* 1107232*/ ret7 = a;
        /* 1107249*/ ret8 = b;
        /* 1275350*/ chpl_check_nil(ret7, INT64(2105), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
        /* 667437*/ dsiAssign(ret7, ret8);
      }
    } else /* 667476*/ {
      /* 667478*/ halt("assignment to distributions with declared domains is not yet supported", _ln, _fn);
    }
  }
  /* 667482*/ return;
}

/* ChapelArray.chpl:2113 */
/*  573649 */ static void chpl___ASSIGN_2(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b, int64_t _ln, c_string _fn) {
  /* 1121460 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /*  574572 */ BaseDom coerce_tmp = NULL;
  /* 1122142 */ BaseDom call_tmp = NULL;
  /* 1123629 */ list_BaseArr ret2;
  /* 1258223 */ list_BaseArr _ic__F0_this;
  /* 1062331 */ listNode_BaseArr tmp = NULL;
  /* 1124160 */ listNode_BaseArr ret3 = NULL;
  /* 1062351 */ chpl_bool T;
  /* 1124393 */ object call_tmp2 = NULL;
  /* 1095265 */ chpl_bool call_tmp3;
  /* 1124516 */ BaseArr ret4 = NULL;
  /* 1062465 */ chpl_bool _dynamic_dispatch_tmp_;
  /* 1062474 */ DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = NULL;
  /* 1062487 */ chpl_bool _dynamic_dispatch_tmp_2;
  /* 1062496 */ DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = NULL;
  /* 1062509 */ chpl_bool _dynamic_dispatch_tmp_3;
  /* 1062518 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _cast_tmp_3 = NULL;
  /* 1062531 */ chpl_bool _dynamic_dispatch_tmp_4;
  /* 1062540 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F _cast_tmp_4 = NULL;
  /* 1124643 */ listNode_BaseArr ret5 = NULL;
  /* 1124403 */ object call_tmp4 = NULL;
  /* 1095275 */ chpl_bool call_tmp5;
  /*  573846 */ _tuple_1_star_range_int64_t_bounded_F call_tmp6;
  /* 1039616 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1121477 */ DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  /*  577331 */ BaseDom coerce_tmp2 = NULL;
  /* 1122152 */ BaseDom call_tmp7 = NULL;
  /* 1123639 */ list_BaseArr ret7;
  /* 1258237 */ list_BaseArr _ic__F0_this2;
  /* 1062573 */ listNode_BaseArr tmp2 = NULL;
  /* 1124170 */ listNode_BaseArr ret8 = NULL;
  /* 1062593 */ chpl_bool T2;
  /* 1124413 */ object call_tmp8 = NULL;
  /* 1095285 */ chpl_bool call_tmp9;
  /* 1124526 */ BaseArr ret9 = NULL;
  /* 1124653 */ listNode_BaseArr ret10 = NULL;
  /* 1124423 */ object call_tmp10 = NULL;
  /* 1095295 */ chpl_bool call_tmp11;
  /* 573671*/ /* 1121469*/ ret = a;
  /* 1122144*/ call_tmp = ((BaseDom)(ret));
  /* 574577*/ coerce_tmp = call_tmp;
  /* 1276452*/ chpl_check_nil(coerce_tmp, INT64(2115), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1123631*/ ret2 = (coerce_tmp)->_arrs;
  /* 1123895*/ _ic__F0_this = ret2;
  /* 1124162*/ ret3 = (&_ic__F0_this)->first;
  /* 1062346*/ tmp = ret3;
  /* 1124395*/ call_tmp2 = ((object)(ret3));
  /* 1095267*/ call_tmp3 = (call_tmp2 != nil);
  /* 1062368*/ T = call_tmp3;
  /* 1062373*/ while (T) {
    /* 1276474*/ chpl_check_nil(tmp, INT64(2115), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1124518*/ ret4 = (tmp)->data;
    /* 1275762*/ chpl_check_nil(ret4, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1062467*/ _dynamic_dispatch_tmp_ = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
    /* 1062559*/ if (_dynamic_dispatch_tmp_) /* 1062473*/ {
      /* 1062476*/ _cast_tmp_ = ((DefaultRectangularArr_locale_1_int64_t_F)(ret4));
      /* 1275764*/ chpl_check_nil(_cast_tmp_, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
      /* 1062482*/ dsiReallocate2(_cast_tmp_, b, _ln, _fn);
    } else /* 1062485*/ {
      /* 1275766*/ chpl_check_nil(ret4, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
      /* 1062489*/ _dynamic_dispatch_tmp_2 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
      /* 1062558*/ if (_dynamic_dispatch_tmp_2) /* 1062495*/ {
        /* 1062498*/ _cast_tmp_2 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(ret4));
        /* 1275768*/ chpl_check_nil(_cast_tmp_2, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
        /* 1062504*/ dsiReallocate3(_cast_tmp_2, b, _ln, _fn);
      } else /* 1062507*/ {
        /* 1275770*/ chpl_check_nil(ret4, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
        /* 1062511*/ _dynamic_dispatch_tmp_3 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F);
        /* 1062557*/ if (_dynamic_dispatch_tmp_3) /* 1062517*/ {
          /* 1062520*/ _cast_tmp_3 = ((DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F)(ret4));
          /* 1275772*/ chpl_check_nil(_cast_tmp_3, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
          /* 1062526*/ dsiReallocate4(_cast_tmp_3, b, _ln, _fn);
        } else /* 1062529*/ {
          /* 1275774*/ chpl_check_nil(ret4, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
          /* 1062533*/ _dynamic_dispatch_tmp_4 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F);
          /* 1062556*/ if (_dynamic_dispatch_tmp_4) /* 1062539*/ {
            /* 1062542*/ _cast_tmp_4 = ((DefaultRectangularArr_chpldev_Task_1_int64_t_F)(ret4));
            /* 1275776*/ chpl_check_nil(_cast_tmp_4, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
            /* 1062548*/ dsiReallocate5(_cast_tmp_4, b, _ln, _fn);
          } else /* 1062551*/ {
            /* 1275778*/ chpl_check_nil(ret4, INT64(2116), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
            /* 1062553*/ dsiReallocate(ret4, b, _ln, _fn);
          }
        }
      }
    }
    /* 1276498*/ chpl_check_nil(tmp, INT64(2115), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1124645*/ ret5 = (tmp)->next;
    /* 1124755*/ tmp = ret5;
    /* 1124405*/ call_tmp4 = ((object)(ret5));
    /* 1095277*/ call_tmp5 = (call_tmp4 != nil);
    /* 1062441*/ T = call_tmp5;
  }
  /* 1039619*/ ret_to_arg_ref_tmp_ = &call_tmp6;
  /* 1275276*/ chpl_check_nil(b, INT64(2118), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 573854*/ getIndices(b, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1275278*/ chpl_check_nil(a, INT64(2118), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 573859*/ setIndices(a, &call_tmp6, _ln, _fn);
  /* 1121486*/ ret6 = a;
  /* 1122154*/ call_tmp7 = ((BaseDom)(ret6));
  /* 577336*/ coerce_tmp2 = call_tmp7;
  /* 1276454*/ chpl_check_nil(coerce_tmp2, INT64(2119), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1123641*/ ret7 = (coerce_tmp2)->_arrs;
  /* 1123952*/ _ic__F0_this2 = ret7;
  /* 1124172*/ ret8 = (&_ic__F0_this2)->first;
  /* 1062588*/ tmp2 = ret8;
  /* 1124415*/ call_tmp8 = ((object)(ret8));
  /* 1095287*/ call_tmp9 = (call_tmp8 != nil);
  /* 1062610*/ T2 = call_tmp9;
  /* 1062615*/ while (T2) {
    /* 1276476*/ chpl_check_nil(tmp2, INT64(2119), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1124528*/ ret9 = (tmp2)->data;
    /* 1275780*/ chpl_check_nil(ret9, INT64(2120), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1062707*/ dsiPostReallocate(ret9);
    /* 1276500*/ chpl_check_nil(tmp2, INT64(2119), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
    /* 1124655*/ ret10 = (tmp2)->next;
    /* 1124761*/ tmp2 = ret10;
    /* 1124425*/ call_tmp10 = ((object)(ret10));
    /* 1095297*/ call_tmp11 = (call_tmp10 != nil);
    /* 1062683*/ T2 = call_tmp11;
  }
  /* 574075*/ return;
}

/* ChapelArray.chpl:2296 */
/*  885748 */ static void checkArrayShapesUponAssignment(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F a, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F b, int64_t _ln, c_string _fn) {
  /*  885857 */ _tuple_1_star_range_int64_t_bounded_F const_tmp;
  /* 1258598 */ range_int64_t_bounded_F aDims_x1;
  /*  885861 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp = NULL;
  /* 1145835 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = NULL;
  /* 1144901 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1043577 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /*  885894 */ _tuple_1_star_range_int64_t_bounded_F const_tmp2;
  /* 1258611 */ range_int64_t_bounded_F bDims_x1;
  /*  885898 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp2 = NULL;
  /* 1145852 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret3 = NULL;
  /* 1144911 */ DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  /* 1043584 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  /*  886663 */ _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  /*  886670 */ int64_t call_tmp4;
  /*  886678 */ _ref_range_int64_t_bounded_F call_tmp5 = NULL;
  /*  886685 */ int64_t call_tmp6;
  /* 1101192 */ chpl_bool call_tmp7;
  /*  886710 */ _ref_range_int64_t_bounded_F call_tmp8 = NULL;
  /*  886717 */ int64_t call_tmp9;
  /*  886725 */ _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  /*  886732 */ int64_t call_tmp11;
  /* 1104853 */ chpl_string call_tmp12;
  /* 1104869 */ chpl_string call_tmp13;
  /* 1104885 */ chpl_string call_tmp14;
  /* 885759*/ /* 1145844*/ ret = a;
  /* 885863*/ call_tmp = ret;
  /* 1277268*/ chpl_check_nil(call_tmp, INT64(2298), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1144903*/ ret2 = (call_tmp)->dom;
  /* 1043580*/ ret_to_arg_ref_tmp_ = &const_tmp;
  /* 1275518*/ chpl_check_nil(ret2, INT64(2298), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 885885*/ dsiDims(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1258604*/ aDims_x1 = *(const_tmp + INT64(0));
  /* 1145861*/ ret3 = b;
  /* 885900*/ call_tmp2 = ret3;
  /* 1277270*/ chpl_check_nil(call_tmp2, INT64(2299), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1144913*/ ret4 = (call_tmp2)->dom;
  /* 1043587*/ ret_to_arg_ref_tmp_2 = &const_tmp2;
  /* 1275520*/ chpl_check_nil(ret4, INT64(2299), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 885922*/ dsiDims(ret4, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1258617*/ bDims_x1 = *(const_tmp2 + INT64(0));
  /* 885956*/ compilerAssert();
  /* 886665*/ call_tmp3 = &aDims_x1;
  /* 886672*/ call_tmp4 = length(call_tmp3, _ln, _fn);
  /* 886680*/ call_tmp5 = &bDims_x1;
  /* 886687*/ call_tmp6 = length(call_tmp5, _ln, _fn);
  /* 1101194*/ call_tmp7 = (call_tmp4 != call_tmp6);
  /* 886748*/ if (call_tmp7) /* 886709*/ {
    /* 886712*/ call_tmp8 = &aDims_x1;
    /* 886719*/ call_tmp9 = length(call_tmp8, _ln, _fn);
    /* 886727*/ call_tmp10 = &bDims_x1;
    /* 886734*/ call_tmp11 = length(call_tmp10, _ln, _fn);
    /* 1104855*/ string_from_c_string(&call_tmp12, "assigning between arrays of different shapes in dimension ", INT64(0), INT64(0), _ln, _fn);
    /* 1104871*/ string_from_c_string(&call_tmp13, ": ", INT64(0), INT64(0), _ln, _fn);
    /* 1104887*/ string_from_c_string(&call_tmp14, " vs. ", INT64(0), INT64(0), _ln, _fn);
    /* 886741*/ halt5(call_tmp12, INT64(1), call_tmp13, call_tmp9, call_tmp14, call_tmp11, _ln, _fn);
  }
  /* 886081*/ return;
}

/* ChapelArray.chpl:2296 */
/*  974882 */ static void checkArrayShapesUponAssignment2(DefaultRectangularArr_chpldev_Task_1_int64_t_F a, DefaultRectangularArr_chpldev_Task_1_int64_t_F b, int64_t _ln, c_string _fn) {
  /*  974991 */ _tuple_1_star_range_int64_t_bounded_F const_tmp;
  /* 1258624 */ range_int64_t_bounded_F aDims_x1;
  /*  974995 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp = NULL;
  /* 1148506 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = NULL;
  /* 1147660 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1048330 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /*  975028 */ _tuple_1_star_range_int64_t_bounded_F const_tmp2;
  /* 1258637 */ range_int64_t_bounded_F bDims_x1;
  /*  975032 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F call_tmp2 = NULL;
  /* 1148523 */ DefaultRectangularArr_chpldev_Task_1_int64_t_F ret3 = NULL;
  /* 1147670 */ DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  /* 1048337 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  /*  975275 */ _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  /*  975282 */ int64_t call_tmp4;
  /*  975290 */ _ref_range_int64_t_bounded_F call_tmp5 = NULL;
  /*  975297 */ int64_t call_tmp6;
  /* 1101232 */ chpl_bool call_tmp7;
  /*  975322 */ _ref_range_int64_t_bounded_F call_tmp8 = NULL;
  /*  975329 */ int64_t call_tmp9;
  /*  975337 */ _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  /*  975344 */ int64_t call_tmp11;
  /* 1105157 */ chpl_string call_tmp12;
  /* 1105173 */ chpl_string call_tmp13;
  /* 1105189 */ chpl_string call_tmp14;
  /* 974893*/ /* 1148515*/ ret = a;
  /* 974997*/ call_tmp = ret;
  /* 1277510*/ chpl_check_nil(call_tmp, INT64(2298), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1147662*/ ret2 = (call_tmp)->dom;
  /* 1048333*/ ret_to_arg_ref_tmp_ = &const_tmp;
  /* 1275590*/ chpl_check_nil(ret2, INT64(2298), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 975019*/ dsiDims(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1258630*/ aDims_x1 = *(const_tmp + INT64(0));
  /* 1148532*/ ret3 = b;
  /* 975034*/ call_tmp2 = ret3;
  /* 1277512*/ chpl_check_nil(call_tmp2, INT64(2299), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1147672*/ ret4 = (call_tmp2)->dom;
  /* 1048340*/ ret_to_arg_ref_tmp_2 = &const_tmp2;
  /* 1275592*/ chpl_check_nil(ret4, INT64(2299), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 975056*/ dsiDims(ret4, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1258643*/ bDims_x1 = *(const_tmp2 + INT64(0));
  /* 975090*/ compilerAssert();
  /* 975277*/ call_tmp3 = &aDims_x1;
  /* 975284*/ call_tmp4 = length(call_tmp3, _ln, _fn);
  /* 975292*/ call_tmp5 = &bDims_x1;
  /* 975299*/ call_tmp6 = length(call_tmp5, _ln, _fn);
  /* 1101234*/ call_tmp7 = (call_tmp4 != call_tmp6);
  /* 975360*/ if (call_tmp7) /* 975321*/ {
    /* 975324*/ call_tmp8 = &aDims_x1;
    /* 975331*/ call_tmp9 = length(call_tmp8, _ln, _fn);
    /* 975339*/ call_tmp10 = &bDims_x1;
    /* 975346*/ call_tmp11 = length(call_tmp10, _ln, _fn);
    /* 1105159*/ string_from_c_string(&call_tmp12, "assigning between arrays of different shapes in dimension ", INT64(0), INT64(0), _ln, _fn);
    /* 1105175*/ string_from_c_string(&call_tmp13, ": ", INT64(0), INT64(0), _ln, _fn);
    /* 1105191*/ string_from_c_string(&call_tmp14, " vs. ", INT64(0), INT64(0), _ln, _fn);
    /* 975353*/ halt5(call_tmp12, INT64(1), call_tmp13, call_tmp9, call_tmp14, call_tmp11, _ln, _fn);
  }
  /* 975215*/ return;
}

/* ChapelArray.chpl:2364 */
/* 1094325 */ static void wrapcoforall_fn(_class_localscoforall_fn c) {
  /* 1305310 */ int64_t _ln;
  /* 1305309 */ c_string _fn;
  /* 1094332 */ _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  /* 1094340 */ int64_t _1_parDim;
  /* 1094348 */ int64_t _2_numChunks;
  /* 1094356 */ int64_t _3_chunk;
  /* 1094364 */ chpl___EndCount _4_rvfDerefTmp = NULL;
  /* 1094372 */ _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _5_rvfDerefTmp;
  /* 1094326*/ /* 1305317*/ _ln = (c)->_ln;
  /* 1305311*/ _fn = (c)->_fn;
  /* 1275846*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094337*/ *(_0_locBlock + INT64(0)) = *((c)->_0_locBlock + INT64(0));
  /* 1275848*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094345*/ _1_parDim = (c)->_1_parDim;
  /* 1275850*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094353*/ _2_numChunks = (c)->_2_numChunks;
  /* 1275852*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094361*/ _3_chunk = (c)->_3_chunk;
  /* 1275854*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094369*/ _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  /* 1275856*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094377*/ *(_5_rvfDerefTmp + INT64(0)) = *((c)->_5_rvfDerefTmp + INT64(0));
  *(_5_rvfDerefTmp + INT64(1)) = *((c)->_5_rvfDerefTmp + INT64(1));
  /* 1094330*/ coforall_fn(&_0_locBlock, _1_parDim, _2_numChunks, _3_chunk, _4_rvfDerefTmp, &_5_rvfDerefTmp, _ln, _fn);
  /* 1094382*/ chpl_here_free(((void*)(c)), _ln, _fn);
  /* 1094384*/ return;
}

/* ChapelArray.chpl:2364 */
/* 1094449 */ static void wrapcoforall_fn2(_class_localscoforall_fn2 c) {
  /* 1305334 */ int64_t _ln;
  /* 1305333 */ c_string _fn;
  /* 1094456 */ _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  /* 1094464 */ int64_t _1_parDim;
  /* 1094472 */ int64_t _2_numChunks;
  /* 1094480 */ int64_t _3_chunk;
  /* 1094488 */ chpl___EndCount _4_rvfDerefTmp = NULL;
  /* 1094496 */ _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F _5_rvfDerefTmp;
  /* 1094450*/ /* 1305341*/ _ln = (c)->_ln;
  /* 1305335*/ _fn = (c)->_fn;
  /* 1275858*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094461*/ *(_0_locBlock + INT64(0)) = *((c)->_0_locBlock + INT64(0));
  /* 1275860*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094469*/ _1_parDim = (c)->_1_parDim;
  /* 1275862*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094477*/ _2_numChunks = (c)->_2_numChunks;
  /* 1275864*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094485*/ _3_chunk = (c)->_3_chunk;
  /* 1275866*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094493*/ _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  /* 1275868*/ chpl_check_nil(c, INT64(2364), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 1094501*/ *(_5_rvfDerefTmp + INT64(0)) = *((c)->_5_rvfDerefTmp + INT64(0));
  *(_5_rvfDerefTmp + INT64(1)) = *((c)->_5_rvfDerefTmp + INT64(1));
  /* 1094454*/ coforall_fn2(&_0_locBlock, _1_parDim, _2_numChunks, _3_chunk, _4_rvfDerefTmp, &_5_rvfDerefTmp, _ln, _fn);
  /* 1094506*/ chpl_here_free(((void*)(c)), _ln, _fn);
  /* 1094508*/ return;
}

/* ChapelArray.chpl:2453 */
/*  434986 */ static void chpl__auto_destroy__OpaqueIndex(chpl___OpaqueIndex this7, int64_t _ln, c_string _fn) {
  /* 434987*/ /* 434992*/ return;
}

/* ChapelArray.chpl:2747 */
/*  534959 */ static DefaultDist chpl__initCopy(DefaultDist a, int64_t _ln, c_string _fn) {
  /*  534973 */ DefaultDist call_tmp = NULL;
  /* 1039408 */ _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  /* 534968*/ /* 1039411*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1275260*/ chpl_check_nil(a, INT64(2748), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 534981*/ clone2(a, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 534991*/ return call_tmp;
}

/* ChapelArray.chpl:2753 */
/*  722766 */ static DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a, int64_t _ln, c_string _fn) {
  /*  722778 */ DefaultRectangularDom_1_int64_t_F b = NULL;
  /*  722781 */ DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  /*  722783 */ chpl___RuntimeTypeInfo call_tmp;
  /* 1024427 */ DefaultDist _runtime_type_tmp_ = NULL;
  /* 1051327 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /*  722893 */ _tuple_1_star_range_int64_t_bounded_F call_tmp2;
  /* 1040800 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  /* 722775*/ /* 722785*/ call_tmp = chpl__convertValueToRuntimeType(a, _ln, _fn);
  /* 1024432*/ _runtime_type_tmp_ = (&call_tmp)->d;
  /* 1051330*/ ret_to_arg_ref_tmp_ = &type_tmp;
  /* 1024425*/ chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 722793*/ b = type_tmp;
  /* 1040803*/ ret_to_arg_ref_tmp_2 = &call_tmp2;
  /* 1275374*/ chpl_check_nil(a, INT64(2756), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 722901*/ getIndices(a, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1275376*/ chpl_check_nil(type_tmp, INT64(2756), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelArray.chpl");
  /* 722906*/ setIndices(type_tmp, &call_tmp2, _ln, _fn);
  /* 722954*/ return b;
}

