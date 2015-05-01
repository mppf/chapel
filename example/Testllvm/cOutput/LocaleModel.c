/* LocaleModel.chpl:30 */
/*  235299 */ static void chpl__init_LocaleModel(int64_t _ln, c_string _fn) {
  /* 1273881 */ c_string modFormatStr;
  /* 1273882 */ c_string modStr;
  /* 1273898 */ _ref_int32_t refIndentLevel = NULL;
  /*  294801 */ DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  /*  342333 */ chpl___RuntimeTypeInfo call_tmp;
  /* 1119957 */ chpl___RuntimeTypeInfo wrap_call_tmp;
  /* 1024342 */ DefaultDist _runtime_type_tmp_ = NULL;
  /* 1051214 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /*  342338 */ range_int64_t_bounded_F call_tmp2;
  /* 1037731 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  /*  342343 */ DefaultRectangularDom_1_int64_t_F call_tmp3 = NULL;
  /* 1037841 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  /*  294818 */ DefaultRectangularArr_locale_1_int64_t_F type_tmp2 = NULL;
  /*  342348 */ DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
  /* 1037870 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  /*  342353 */ chpl___RuntimeTypeInfo3 call_tmp5;
  /* 1024359 */ DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
  /* 1051260 */ _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  /* 235300*/ /* 1273917*/ if (chpl__init_LocaleModel_p) /* 1273918*/ {
    /* 1273914*/ goto _exit_chpl__init_LocaleModel;
  }
  /* 1273890*/ modFormatStr = "%*s\n";
  /* 1273893*/ modStr = "LocaleModel";
  /* 1273896*/ printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  /* 1273902*/ refIndentLevel = &moduleInitLevel;
  /* 1273905*/ *(refIndentLevel) += INT64(1);
  /* 1273879*/ chpl__init_LocaleModel_p = true;
  /* 1273227*/ {
    /* 1273228*/ chpl__init_ChapelLocale(_ln, _fn);
    /* 1273230*/ chpl__init_DefaultRectangular(_ln, _fn);
    /* 1273232*/ chpl__init_ChapelNumLocales(_ln, _fn);
    /* 1273234*/ chpl__init_Sys(_ln, _fn);
  }
  /* 294769*/ doneCreatingLocales = false;
  /* 1119959*/ wrap_call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
  /* 342336*/ call_tmp = wrap_call_tmp;
  /* 1024347*/ _runtime_type_tmp_ = (&call_tmp)->d;
  /* 1051217*/ ret_to_arg_ref_tmp_ = &type_tmp;
  /* 1024340*/ chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1037734*/ ret_to_arg_ref_tmp_2 = &call_tmp2;
  /* 66547*/ _build_range(INT64(1), INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1037844*/ ret_to_arg_ref_tmp_3 = &call_tmp3;
  /* 66550*/ chpl__buildDomainExpr(&call_tmp2, ret_to_arg_ref_tmp_3, _ln, _fn);
  /* 294806*/ chpl___ASSIGN_2(type_tmp, call_tmp3, _ln, _fn);
  /* 1036688*/ chpl__autoDestroy2(call_tmp3, _ln, _fn);
  /* 294797*/ chpl_emptyLocaleSpace = type_tmp;
  /* 1037873*/ ret_to_arg_ref_tmp_4 = &call_tmp4;
  /* 66558*/ chpl__ensureDomainExpr(chpl_emptyLocaleSpace, ret_to_arg_ref_tmp_4, _ln, _fn);
  /* 342356*/ call_tmp5 = chpl__buildArrayRuntimeType(call_tmp4, _ln, _fn);
  /* 1024364*/ _runtime_type_tmp_2 = (&call_tmp5)->dom;
  /* 1051263*/ ret_to_arg_ref_tmp_5 = &type_tmp2;
  /* 1024357*/ chpl__convertRuntimeTypeToValue3(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5, _ln, _fn);
  /* 1036691*/ chpl__autoDestroy2(call_tmp4, _ln, _fn);
  /* 294814*/ chpl_emptyLocales = type_tmp2;
  /* 1273908*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleModel:;
  /* 273930*/ return;
}

/* LocaleModel.chpl:82 */
/* 1038047 */ static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, c_string _fn) {
  /* 1038058 */ chpl_localeID_t _autoCopy_tmp_;
  /* 1106223 */ chpl_localeID_t call_tmp;
  /* 1106233 */ chpl_localeID_t call_tmp2;
  /* 1038053*/ /* 1038060*/ _autoCopy_tmp_ = chpl_rt_buildLocaleID(node, subloc);
  /* 1106225*/ call_tmp = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
  /* 1106235*/ call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp);
  /* 1038087*/ *(_retArg) = call_tmp2;
  /* 1038081*/ return;
}

/* LocaleModel.chpl:86 */
/*   66512 */ static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn) {
  /*  342323 */ int32_t call_tmp;
  /* 66513*/ /* 342326*/ call_tmp = chpl_rt_nodeFromLocaleID(*(loc));
  /* 273526*/ return call_tmp;
}

/* LocaleModel.chpl:90 */
/*   66529 */ static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn) {
  /*  342328 */ int32_t call_tmp;
  /* 66530*/ /* 342331*/ call_tmp = chpl_rt_sublocFromLocaleID(*(loc));
  /* 273535*/ return call_tmp;
}

/* LocaleModel.chpl:99 */
/*  193485 */ static LocaleModel _construct_LocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, uint64_t callStackSize, int64_t _node_id, chpl_string local_name, LocaleModel meme, int64_t _ln, c_string _fn) {
  /*  193487 */ LocaleModel this7 = NULL;
  /*  193710 */ AbstractLocaleModel T = NULL;
  /* 193486*/ /* 193495*/ this7 = meme;
  /* 1275178*/ chpl_check_nil(this7, INT64(99), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 193717*/ T = &((this7)->super);
  /* 193678*/ _construct_AbstractLocaleModel(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
  /* 1275180*/ chpl_check_nil(this7, INT64(100), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 193729*/ (this7)->callStackSize = callStackSize;
  /* 1275182*/ chpl_check_nil(this7, INT64(101), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 193742*/ (this7)->_node_id = _node_id;
  /* 1275184*/ chpl_check_nil(this7, INT64(102), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 193755*/ (this7)->local_name = local_name;
  /* 193760*/ return this7;
}

/* LocaleModel.chpl:99 */
/*  430863 */ static void chpl__auto_destroy_LocaleModel(LocaleModel this7, int64_t _ln, c_string _fn) {
  /* 1033213 */ AbstractLocaleModel _parent_destructor_tmp_ = NULL;
  /* 1116537 */ locale _parent_destructor_tmp_2 = NULL;
  /* 1116544 */ _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  /* 1116551 */ _ref_atomic_int_least64_t call_tmp = NULL;
  /* 430864*/ /* 1033218*/ _parent_destructor_tmp_ = ((AbstractLocaleModel)(this7));
  /* 1116539*/ _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
  /* 1276138*/ chpl_check_nil(_parent_destructor_tmp_2, INT64(99), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116546*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->runningTaskCounter);
  /* 1276140*/ chpl_check_nil(_field_destructor_tmp_, INT64(99), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116553*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1116559*/ atomic_destroy_int_least64_t(call_tmp);
  /* 430869*/ return;
}

/* LocaleModel.chpl:115 */
/*   66611 */ static LocaleModel LocaleModel2(locale parent_loc, int64_t _ln, c_string _fn) {
  /*  254270 */ LocaleModel this7 = NULL;
  /* 1138536 */ LocaleModel this8 = NULL;
  /* 1138538 */ int64_t call_tmp;
  /* 1138544 */ chpl_opaque cast_tmp;
  /* 1138571 */ locale call_tmp2 = NULL;
  /* 1138578 */ atomic_int64 this9;
  /* 1138580 */ atomic_int_least64_t ret;
  /* 1138582 */ atomic_int_least64_t type_tmp;
  /* 1138587 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1138601 */ atomic_int64 wrap_call_tmp;
  /* 1138617 */ chpl_string ret2;
  /* 1138626 */ LocaleModel wrap_call_tmp2 = NULL;
  /*  342365 */ chpl_bool call_tmp3;
  /*  704086 */ locale coerce_tmp = NULL;
  /* 1138643 */ locale call_tmp4 = NULL;
  /* 1116635 */ _ref_locale call_tmp5 = NULL;
  /* 66612*/ /* 1138540*/ call_tmp = sizeof(chpl_LocaleModel_object);
  /* 1138546*/ cast_tmp = chpl_here_alloc(call_tmp, INT16(19), _ln, _fn);
  /* 1138552*/ this8 = ((LocaleModel)(cast_tmp));
  /* 1138557*/ ((object)(this8))->chpl__cid = chpl__cid_LocaleModel;
  /* 1277050*/ chpl_check_nil(this8, INT64(115), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138559*/ (this8)->callStackSize = UINT64(0);
  /* 1277052*/ chpl_check_nil(this8, INT64(115), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138563*/ (this8)->_node_id = INT64(0);
  /* 1277054*/ chpl_check_nil(this8, INT64(115), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138567*/ (this8)->local_name = defaultStringValue;
  /* 1138573*/ call_tmp2 = ((locale)(nil));
  /* 1138584*/ ret = type_tmp;
  /* 1138589*/ _ref_tmp_ = &ret;
  /* 1138594*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  /* 1138597*/ (&this9)->_v = ret;
  /* 1138603*/ wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
  /* 1277056*/ chpl_check_nil(this8, INT64(115), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138609*/ (this8)->callStackSize = UINT64(0);
  /* 1277058*/ chpl_check_nil(this8, INT64(115), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138613*/ (this8)->_node_id = INT64(0);
  /* 1138619*/ ret2 = defaultStringValue;
  /* 1277060*/ chpl_check_nil(this8, INT64(115), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138622*/ (this8)->local_name = ret2;
  /* 1138628*/ wrap_call_tmp2 = _construct_LocaleModel(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, UINT64(0), INT64(0), ret2, this8, _ln, _fn);
  /* 254271*/ this7 = wrap_call_tmp2;
  /* 342368*/ call_tmp3 = doneCreatingLocales;
  /* 66622*/ if (call_tmp3) /* 66619*/ {
    /* 66617*/ halt("Cannot create additional LocaleModel instances", _ln, _fn);
  }
  /* 1138645*/ call_tmp4 = ((locale)(wrap_call_tmp2));
  /* 704091*/ coerce_tmp = call_tmp4;
  /* 1276154*/ chpl_check_nil(coerce_tmp, INT64(119), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116637*/ call_tmp5 = &((coerce_tmp)->parent);
  /* 1118430*/ *(call_tmp5) = parent_loc;
  /* 1275114*/ chpl_check_nil(wrap_call_tmp2, INT64(120), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 66632*/ init(wrap_call_tmp2, _ln, _fn);
  /* 254275*/ return this7;
}

/* LocaleModel.chpl:123 */
/*   66638 */ static int64_t chpl_id2(LocaleModel this7, int64_t _ln, c_string _fn) {
  /* 1138706 */ int64_t ret;
  /* 66639*/ /* 1277062*/ chpl_check_nil(this7, INT64(123), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138708*/ ret = (this7)->_node_id;
  /* 273544*/ return ret;
}

/* LocaleModel.chpl:140 */
/*   66712 */ static int64_t getChildCount2(LocaleModel this7, int64_t _ln, c_string _fn) {
  /* 66713*/ /* 273582*/ return INT64(0);
}

/* LocaleModel.chpl:147 */
/*   66771 */ static locale getChild2(LocaleModel this7, int64_t idx, int64_t _ln, c_string _fn) {
  /*  273605 */ locale ret = NULL;
  /* 66772*/ /* 66780*/ halt("requesting a child from a LocaleModel locale", _ln, _fn);
  /* 1118460*/ ret = nil;
  /* 273612*/ return ret;
}

/* LocaleModel.chpl:165 */
/*   66851 */ static void init(LocaleModel this7, int64_t _ln, c_string _fn) {
  /* 1116463 */ _ref_int64_t call_tmp = NULL;
  /* 1112643 */ int64_t call_tmp2;
  /*   66862 */ c_string comm;
  /*   66866 */ c_string spawnfn;
  /* 1028999 */ _ref_c_string T = NULL;
  /* 1029006 */ _ref_c_string T2 = NULL;
  /* 1105772 */ chpl_string call_tmp3;
  /* 1105780 */ c_string call_tmp4;
  /* 1105786 */ int32_t call_tmp5;
  /* 1105794 */ int32_t call_tmp6;
  /* 1105801 */ chpl_bool call_tmp7;
  /* 1105808 */ chpl_bool T3;
  /* 1105818 */ int64_t call_tmp8;
  /* 1105825 */ chpl_bool call_tmp9;
  /* 1105840 */ chpl_bool T4;
  /* 1105844 */ chpl_string call_tmp10;
  /* 1105852 */ c_string call_tmp11;
  /* 1105858 */ int32_t call_tmp12;
  /* 1105866 */ int32_t call_tmp13;
  /* 1105873 */ chpl_bool call_tmp14;
  /* 1105888 */ chpl_bool T5;
  /* 1105898 */ int64_t call_tmp15;
  /* 1105905 */ chpl_bool call_tmp16;
  /*  342580 */ c_string call_tmp17;
  /* 1100163 */ chpl_string call_tmp18;
  /* 1098785 */ c_string call_tmp19;
  /* 1098791 */ c_string_copy call_tmp20;
  /* 1098798 */ chpl_string call_tmp21;
  /* 1138716 */ int64_t ret;
  /* 1138824 */ c_string_copy call_tmp22;
  /* 1138826 */ uint32_t call_tmp23;
  /* 1138840 */ chpl_string call_tmp24;
  /* 1098629 */ c_string call_tmp25;
  /* 1098635 */ c_string call_tmp26;
  /* 1098641 */ c_string_copy call_tmp27;
  /* 1098648 */ chpl_string call_tmp28;
  /*  342619 */ c_string call_tmp29;
  /* 1100179 */ chpl_string call_tmp30;
  /* 1116449 */ _ref_uint64_t call_tmp31 = NULL;
  /*  342636 */ uint64_t call_tmp32;
  /*  718566 */ locale coerce_tmp = NULL;
  /* 1138653 */ locale call_tmp33 = NULL;
  /* 1116659 */ _ref_int64_t call_tmp34 = NULL;
  /*  342648 */ int32_t call_tmp35;
  /* 1112663 */ int64_t call_tmp36;
  /*  718589 */ locale coerce_tmp2 = NULL;
  /* 1138663 */ locale call_tmp37 = NULL;
  /* 1116693 */ _ref_int64_t call_tmp38 = NULL;
  /*  342665 */ uint32_t call_tmp39;
  /* 1119423 */ int64_t call_tmp40;
  /* 66852*/ /* 1276128*/ chpl_check_nil(this7, INT64(166), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116465*/ call_tmp = &((this7)->_node_id);
  /* 1112645*/ call_tmp2 = ((int64_t)(chpl_nodeID));
  /* 1102779*/ *(call_tmp) = call_tmp2;
  /* 294841*/ comm = "";
  /* 294850*/ spawnfn = "";
  /* 1029003*/ T = &comm;
  /* 1029010*/ T2 = &spawnfn;
  /* 1105774*/ string_from_c_string(&call_tmp3, "CHPL_COMM", INT64(0), INT64(0), _ln, _fn);
  /* 1105782*/ c_string_from_string(&call_tmp4, &call_tmp3, _ln, _fn);
  /* 1105788*/ call_tmp5 = sys_getenv(call_tmp4, T);
  /* 1105796*/ call_tmp6 = ((int32_t)(INT64(0)));
  /* 1105803*/ call_tmp7 = (call_tmp5 == call_tmp6);
  /* 1105839*/ if (call_tmp7) /* 1105811*/ {
    /* 1105820*/ call_tmp8 = string_compare(comm, "gasnet");
    /* 1105827*/ call_tmp9 = (call_tmp8 == INT64(0));
    /* 1105832*/ T3 = call_tmp9;
  } else /* 1105835*/ {
    /* 1105836*/ T3 = false;
  }
  /* 1105887*/ if (T3) /* 1105843*/ {
    /* 1105846*/ string_from_c_string(&call_tmp10, "GASNET_SPAWNFN", INT64(0), INT64(0), _ln, _fn);
    /* 1105854*/ c_string_from_string(&call_tmp11, &call_tmp10, _ln, _fn);
    /* 1105860*/ call_tmp12 = sys_getenv(call_tmp11, T2);
    /* 1105868*/ call_tmp13 = ((int32_t)(INT64(0)));
    /* 1105875*/ call_tmp14 = (call_tmp12 == call_tmp13);
    /* 1105880*/ T4 = call_tmp14;
  } else /* 1105883*/ {
    /* 1105884*/ T4 = false;
  }
  /* 1105919*/ if (T4) /* 1105891*/ {
    /* 1105900*/ call_tmp15 = string_compare(spawnfn, "L");
    /* 1105907*/ call_tmp16 = (call_tmp15 == INT64(0));
    /* 1105912*/ T5 = call_tmp16;
  } else /* 1105915*/ {
    /* 1105916*/ T5 = false;
  }
  /* 67090*/ if (T5) /* 67091*/ {
    /* 342583*/ call_tmp17 = chpl_nodeName();
    /* 1100165*/ string_from_c_string(&call_tmp18, call_tmp17, INT64(0), INT64(0), _ln, _fn);
    /* 1098787*/ c_string_from_string(&call_tmp19, &call_tmp18, _ln, _fn);
    /* 1098793*/ call_tmp20 = string_concat(call_tmp19, "-", _ln, _fn);
    /* 1098800*/ call_tmp21 = string_from_c_string_copy(call_tmp20, false, INT64(0));
    /* 1277064*/ chpl_check_nil(this7, INT64(178), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1138718*/ ret = (this7)->_node_id;
    /* 1138828*/ call_tmp23 = ((uint32_t)(INT64(8)));
    /* 1138833*/ call_tmp22 = integral_to_c_string_copy(ret, call_tmp23, true);
    /* 1138842*/ call_tmp24 = string_from_c_string_copy(call_tmp22, false, INT64(0));
    /* 1098631*/ c_string_from_string(&call_tmp25, &call_tmp21, _ln, _fn);
    /* 1098637*/ c_string_from_string(&call_tmp26, &call_tmp24, _ln, _fn);
    /* 1098643*/ call_tmp27 = string_concat(call_tmp25, call_tmp26, _ln, _fn);
    /* 1098650*/ call_tmp28 = string_from_c_string_copy(call_tmp27, false, INT64(0));
    /* 1278502*/ chpl_check_nil(this7, INT64(178), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1270731*/ (this7)->local_name = call_tmp28;
  } else /* 67092*/ {
    /* 342622*/ call_tmp29 = chpl_nodeName();
    /* 1100181*/ string_from_c_string(&call_tmp30, call_tmp29, INT64(0), INT64(0), _ln, _fn);
    /* 1278504*/ chpl_check_nil(this7, INT64(179), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1270738*/ (this7)->local_name = call_tmp30;
  }
  /* 1276126*/ chpl_check_nil(this7, INT64(182), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116451*/ call_tmp31 = &((this7)->callStackSize);
  /* 342639*/ call_tmp32 = chpl_task_getCallStackSize();
  /* 1114667*/ *(call_tmp31) = call_tmp32;
  /* 1138655*/ call_tmp33 = ((locale)(this7));
  /* 718571*/ coerce_tmp = call_tmp33;
  /* 1276158*/ chpl_check_nil(coerce_tmp, INT64(185), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116661*/ call_tmp34 = &((coerce_tmp)->numCores);
  /* 342651*/ call_tmp35 = chpl_getNumLogicalCpus(true);
  /* 1112665*/ call_tmp36 = ((int64_t)(call_tmp35));
  /* 1102785*/ *(call_tmp34) = call_tmp36;
  /* 1138665*/ call_tmp37 = ((locale)(this7));
  /* 718594*/ coerce_tmp2 = call_tmp37;
  /* 1276164*/ chpl_check_nil(coerce_tmp2, INT64(188), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116695*/ call_tmp38 = &((coerce_tmp2)->maxTaskPar);
  /* 342668*/ call_tmp39 = chpl_task_getMaxPar();
  /* 1119425*/ call_tmp40 = ((int64_t)(call_tmp39));
  /* 1102791*/ *(call_tmp38) = call_tmp40;
  /* 273688*/ return;
}

/* LocaleModel.chpl:200 */
/*  193791 */ static RootLocale _construct_RootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme, int64_t _ln, c_string _fn) {
  /*  193793 */ RootLocale this7 = NULL;
  /*  193897 */ AbstractRootLocale T = NULL;
  /* 193792*/ /* 193800*/ this7 = meme;
  /* 1275188*/ chpl_check_nil(this7, INT64(200), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 193904*/ T = &((this7)->super);
  /* 193865*/ _construct_AbstractRootLocale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
  /* 1275190*/ chpl_check_nil(this7, INT64(202), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 193916*/ (this7)->myLocaleSpace = myLocaleSpace;
  /* 1275192*/ chpl_check_nil(this7, INT64(203), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 193939*/ (this7)->myLocales = myLocales;
  /* 193944*/ return this7;
}

/* LocaleModel.chpl:200 */
/*  430984 */ static void chpl__auto_destroy_RootLocale(RootLocale this7, int64_t _ln, c_string _fn) {
  /* 1033223 */ DefaultRectangularArr_locale_1_int64_t_F _field_destructor_tmp_ = NULL;
  /* 1033233 */ DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
  /* 1033243 */ AbstractRootLocale _parent_destructor_tmp_ = NULL;
  /* 1116604 */ locale _parent_destructor_tmp_2 = NULL;
  /* 1116611 */ _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  /* 1116618 */ _ref_atomic_int_least64_t call_tmp = NULL;
  /* 430985*/ /* 1275644*/ chpl_check_nil(this7, INT64(203), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1033228*/ _field_destructor_tmp_ = (this7)->myLocales;
  /* 1033230*/ chpl__autoDestroy4(_field_destructor_tmp_, _ln, _fn);
  /* 1275646*/ chpl_check_nil(this7, INT64(202), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1033238*/ _field_destructor_tmp_2 = (this7)->myLocaleSpace;
  /* 1033240*/ chpl__autoDestroy2(_field_destructor_tmp_2, _ln, _fn);
  /* 1033248*/ _parent_destructor_tmp_ = ((AbstractRootLocale)(this7));
  /* 1116606*/ _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
  /* 1276150*/ chpl_check_nil(_parent_destructor_tmp_2, INT64(200), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116613*/ _field_destructor_tmp_3 = &((_parent_destructor_tmp_2)->runningTaskCounter);
  /* 1276152*/ chpl_check_nil(_field_destructor_tmp_3, INT64(200), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116620*/ call_tmp = &((_field_destructor_tmp_3)->_v);
  /* 1116626*/ atomic_destroy_int_least64_t(call_tmp);
  /* 430990*/ return;
}

/* LocaleModel.chpl:205 */
/*   67238 */ static RootLocale RootLocale2(int64_t _ln, c_string _fn) {
  /* 1272223 */ int64_t local_numLocales;
  /*  254278 */ RootLocale this7 = NULL;
  /* 1131246 */ RootLocale this8 = NULL;
  /* 1131248 */ int64_t call_tmp;
  /* 1131254 */ chpl_opaque cast_tmp;
  /* 1131269 */ DefaultRectangularDom_1_int64_t_F _init_class_tmp_ = NULL;
  /* 1131283 */ DefaultRectangularArr_locale_1_int64_t_F _init_class_tmp_2 = NULL;
  /* 1131297 */ locale call_tmp2 = NULL;
  /* 1131304 */ atomic_int64 this9;
  /* 1131306 */ atomic_int_least64_t ret;
  /* 1131308 */ atomic_int_least64_t type_tmp;
  /* 1131313 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1131327 */ atomic_int64 wrap_call_tmp;
  /* 1131335 */ DefaultRectangularDom_1_int64_t_F default_argmyLocaleSpace = NULL;
  /* 1131337 */ chpl___RuntimeTypeInfo call_tmp3;
  /* 1131339 */ chpl___RuntimeTypeInfo wrap_call_tmp2;
  /* 1131349 */ int64_t call_tmp4;
  /* 1131356 */ range_int64_t_bounded_F call_tmp5;
  /* 1131358 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1131369 */ DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
  /* 1131371 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  /* 1131381 */ DefaultRectangularDom_1_int64_t_F x = NULL;
  /* 1131383 */ DefaultRectangularDom_1_int64_t_F type_tmp2 = NULL;
  /* 1131385 */ DefaultDist _runtime_type_tmp_ = NULL;
  /* 1131392 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  /* 1131418 */ DefaultRectangularArr_locale_1_int64_t_F default_argmyLocales = NULL;
  /* 1131420 */ DefaultRectangularDom_1_int64_t_F call_tmp7 = NULL;
  /* 1131422 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  /* 1131432 */ chpl___RuntimeTypeInfo3 call_tmp8;
  /* 1131439 */ DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
  /* 1131446 */ _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  /* 1131460 */ RootLocale wrap_call_tmp3 = NULL;
  /*  608959 */ locale coerce_tmp = NULL;
  /* 1131482 */ locale call_tmp9 = NULL;
  /* 1116645 */ _ref_locale call_tmp10 = NULL;
  /*  610894 */ locale coerce_tmp2 = NULL;
  /* 1131492 */ locale call_tmp11 = NULL;
  /* 1116669 */ _ref_int64_t call_tmp12 = NULL;
  /*  610930 */ locale coerce_tmp3 = NULL;
  /* 1131502 */ locale call_tmp13 = NULL;
  /* 1116703 */ _ref_int64_t call_tmp14 = NULL;
  /* 67239*/ /* 1272224*/ local_numLocales = numLocales;
  /* 1131250*/ call_tmp = sizeof(chpl_RootLocale_object);
  /* 1131256*/ cast_tmp = chpl_here_alloc(call_tmp, INT16(10), _ln, _fn);
  /* 1131262*/ this8 = ((RootLocale)(cast_tmp));
  /* 1131267*/ ((object)(this8))->chpl__cid = chpl__cid_RootLocale;
  /* 1131271*/ _init_class_tmp_ = nil;
  /* 1276806*/ chpl_check_nil(this8, INT64(205), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1131279*/ (this8)->myLocaleSpace = _init_class_tmp_;
  /* 1131285*/ _init_class_tmp_2 = nil;
  /* 1276808*/ chpl_check_nil(this8, INT64(205), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1131293*/ (this8)->myLocales = _init_class_tmp_2;
  /* 1131299*/ call_tmp2 = ((locale)(nil));
  /* 1131310*/ ret = type_tmp;
  /* 1131315*/ _ref_tmp_ = &ret;
  /* 1131320*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  /* 1131323*/ (&this9)->_v = ret;
  /* 1131329*/ wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
  /* 1131341*/ wrap_call_tmp2 = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
  /* 1131346*/ call_tmp3 = wrap_call_tmp2;
  /* 1131351*/ call_tmp4 = (local_numLocales - INT64(1));
  /* 1131360*/ ret_to_arg_ref_tmp_ = &call_tmp5;
  /* 1131365*/ _build_range(INT64(0), call_tmp4, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1131373*/ ret_to_arg_ref_tmp_2 = &call_tmp6;
  /* 1131378*/ chpl__buildDomainExpr(&call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1131387*/ _runtime_type_tmp_ = (&call_tmp3)->d;
  /* 1131394*/ ret_to_arg_ref_tmp_3 = &type_tmp2;
  /* 1131399*/ chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_3, _ln, _fn);
  /* 1131402*/ x = type_tmp2;
  /* 1131406*/ chpl___ASSIGN_2(type_tmp2, call_tmp6, _ln, _fn);
  /* 1131409*/ default_argmyLocaleSpace = chpl__autoCopy2(x, _ln, _fn);
  /* 1276810*/ chpl_check_nil(this8, INT64(205), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1131414*/ (this8)->myLocaleSpace = default_argmyLocaleSpace;
  /* 1131424*/ ret_to_arg_ref_tmp_4 = &call_tmp7;
  /* 1131429*/ chpl__ensureDomainExpr(default_argmyLocaleSpace, ret_to_arg_ref_tmp_4, _ln, _fn);
  /* 1131434*/ call_tmp8 = chpl__buildArrayRuntimeType(call_tmp7, _ln, _fn);
  /* 1131441*/ _runtime_type_tmp_2 = (&call_tmp8)->dom;
  /* 1131448*/ ret_to_arg_ref_tmp_5 = &default_argmyLocales;
  /* 1131453*/ chpl__convertRuntimeTypeToValue3(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5, _ln, _fn);
  /* 1276812*/ chpl_check_nil(this8, INT64(205), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1131456*/ (this8)->myLocales = default_argmyLocales;
  /* 1131462*/ wrap_call_tmp3 = _construct_RootLocale(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, default_argmyLocaleSpace, default_argmyLocales, this8, _ln, _fn);
  /* 1131474*/ chpl__autoDestroy2(call_tmp7, _ln, _fn);
  /* 1131477*/ chpl__autoDestroy2(call_tmp6, _ln, _fn);
  /* 1131484*/ call_tmp9 = ((locale)(wrap_call_tmp3));
  /* 608964*/ coerce_tmp = call_tmp9;
  /* 1276156*/ chpl_check_nil(coerce_tmp, INT64(206), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116647*/ call_tmp10 = &((coerce_tmp)->parent);
  /* 1118436*/ *(call_tmp10) = nil;
  /* 1131494*/ call_tmp11 = ((locale)(wrap_call_tmp3));
  /* 610899*/ coerce_tmp2 = call_tmp11;
  /* 1276160*/ chpl_check_nil(coerce_tmp2, INT64(207), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116671*/ call_tmp12 = &((coerce_tmp2)->numCores);
  /* 1102797*/ *(call_tmp12) = INT64(0);
  /* 1131504*/ call_tmp13 = ((locale)(wrap_call_tmp3));
  /* 610935*/ coerce_tmp3 = call_tmp13;
  /* 1276166*/ chpl_check_nil(coerce_tmp3, INT64(208), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116705*/ call_tmp14 = &((coerce_tmp3)->maxTaskPar);
  /* 1102803*/ *(call_tmp14) = INT64(0);
  /* 254283*/ return wrap_call_tmp3;
}

/* LocaleModel.chpl:214 */
/*   67260 */ static void init2(RootLocale this7, int64_t _ln, c_string _fn) {
  /* 1272236 */ memory_order local_memory_order_relaxed;
  /* 1272229 */ int64_t local_numLocales;
  /* 1258351 */ AbstractRootLocale chpl__iter_F0_this = NULL;
  /* 1131858 */ AbstractRootLocale call_tmp = NULL;
  /* 1056629 */ localesBarrier b;
  /* 1116782 */ localesBarrier this8;
  /* 1116784 */ localesBarrier wrap_call_tmp;
  /* 1056641 */ DefaultRectangularArr_localesSignal_1_int64_t_F flags = NULL;
  /* 1056644 */ DefaultRectangularArr_localesSignal_1_int64_t_F type_tmp = NULL;
  /* 1056646 */ range_int64_t_boundedLow_F call_tmp2;
  /* 1056650 */ _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
  /* 1104214 */ int64_t call_tmp3;
  /* 1056668 */ range_int64_t_bounded_F call_tmp4;
  /* 1056672 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  /* 1056683 */ DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  /* 1056687 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  /* 1056697 */ chpl___RuntimeTypeInfo4 call_tmp6;
  /* 1056704 */ DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_ = NULL;
  /* 1056713 */ _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  /* 1056735 */ /* 1056737 */ chpl___EndCount _coforallCount = NULL;
  /* 1097387 */ chpl___EndCount this9 = NULL;
  /* 1097389 */ int64_t call_tmp7;
  /* 1097395 */ chpl_opaque cast_tmp;
  /* 1097410 */ atomic_int64 _init_class_tmp_;
  /* 1097424 */ atomic_int64 this10;
  /* 1097426 */ atomic_int_least64_t ret;
  /* 1097428 */ atomic_int_least64_t type_tmp2;
  /* 1097433 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1097447 */ atomic_int64 wrap_call_tmp2;
  /* 1097463 */ chpl_task_list_p ret2;
  /* 1097472 */ chpl___EndCount wrap_call_tmp3 = NULL;
  /* 1056745 */ range_int64_t_boundedLow_F call_tmp8;
  /* 1056749 */ _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_5 = NULL;
  /* 1056759 */ range_int64_t_bounded_F call_tmp9;
  /* 1056763 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
  /* 1263467 */ range_int64_t_bounded_F _ic__F0_this;
  /* 1071759 */ _ref_range_int64_t_bounded_F this11 = NULL;
  /* 1071649 */ int64_t i;
  /* 1128736 */ int64_t ret3;
  /* 1071682 */ int64_t end;
  /* 1129077 */ int64_t ret4;
  /* 1093996 */ chpl___EndCount rvfDerefTmp = NULL;
  /* 1094004 */ _ir_initOnLocales_AbstractRootLocale rvfDerefTmp2;
  /* 1094144 */ _class_localscoforall_fn4 _args_forcoforall_fn = NULL;
  /* 1094146 */ int64_t chpl_here_alloc_size;
  /* 1094151 */ chpl_opaque chpl_here_alloc_tmp;
  /* 1097917 */ chpl___EndCount delete_tmp = NULL;
  /* 1097922 */ _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  /* 1097929 */ _ref_atomic_int_least64_t call_tmp10 = NULL;
  /* 1097939 */ chpl_opaque call_tmp11;
  /*  342798 */ locale call_tmp12 = NULL;
  /* 1106373 */ int32_t call_tmp13;
  /* 1106379 */ chpl_localeID_t call_tmp14;
  /* 1106381 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_7 = NULL;
  /* 1106392 */ chpl_localeID_t call_tmp15;
  /* 1106399 */ locale call_tmp16 = NULL;
  /* 1105972 */ _ref_atomic_int64 call_tmp17 = NULL;
  /* 1105981 */ _ref_atomic_int_least64_t call_tmp18 = NULL;
  /* 67261*/ /* 1272237*/ local_memory_order_relaxed = memory_order_relaxed;
  /* 1272230*/ local_numLocales = numLocales;
  /* 1131860*/ call_tmp = ((AbstractRootLocale)(this7));
  /* 1258357*/ chpl__iter_F0_this = call_tmp;
  /* 1116786*/ wrap_call_tmp = _construct_localesBarrier(&this8);
  /* 1056638*/ b = wrap_call_tmp;
  /* 1056652*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1056657*/ _build_range2(INT64(1), ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1104216*/ call_tmp3 = (local_numLocales - INT64(1));
  /* 1056674*/ ret_to_arg_ref_tmp_2 = &call_tmp4;
  /* 1056679*/ chpl___POUND_(&call_tmp2, call_tmp3, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1056689*/ ret_to_arg_ref_tmp_3 = &call_tmp5;
  /* 1056694*/ chpl__ensureDomainExpr3(&call_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
  /* 1056699*/ call_tmp6 = chpl__buildArrayRuntimeType2(call_tmp5, _ln, _fn);
  /* 1056706*/ _runtime_type_tmp_ = (&call_tmp6)->dom;
  /* 1056715*/ ret_to_arg_ref_tmp_4 = &type_tmp;
  /* 1056720*/ chpl__convertRuntimeTypeToValue4(_runtime_type_tmp_, ret_to_arg_ref_tmp_4, _ln, _fn);
  /* 1056723*/ flags = type_tmp;
  /* 1056727*/ chpl__autoDestroy2(call_tmp5, _ln, _fn);
  /* 1097391*/ call_tmp7 = sizeof(chpl_chpl___EndCount_object);
  /* 1097397*/ cast_tmp = chpl_here_alloc(call_tmp7, INT16(15), _ln, _fn);
  /* 1097403*/ this9 = ((chpl___EndCount)(cast_tmp));
  /* 1097408*/ ((object)(this9))->chpl__cid = chpl__cid_chpl___EndCount;
  /* 1275894*/ chpl_check_nil(this9, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1097412*/ (this9)->i = _init_class_tmp_;
  /* 1275896*/ chpl_check_nil(this9, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1097416*/ (this9)->taskCnt = INT64(0);
  /* 1275898*/ chpl_check_nil(this9, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1097420*/ (this9)->taskList = NULL;
  /* 1097430*/ ret = type_tmp2;
  /* 1097435*/ _ref_tmp_ = &ret;
  /* 1097440*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  /* 1097443*/ (&this10)->_v = ret;
  /* 1097449*/ wrap_call_tmp2 = _construct_atomic_int64(ret, &this10, _ln, _fn);
  /* 1275900*/ chpl_check_nil(this9, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1097455*/ (this9)->i = wrap_call_tmp2;
  /* 1275902*/ chpl_check_nil(this9, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1097459*/ (this9)->taskCnt = INT64(0);
  /* 1097465*/ ret2 = NULL;
  /* 1275904*/ chpl_check_nil(this9, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1097468*/ (this9)->taskList = ret2;
  /* 1097474*/ wrap_call_tmp3 = _construct__EndCount(&wrap_call_tmp2, INT64(0), ret2, this9, _ln, _fn);
  /* 1056739*/ _coforallCount = wrap_call_tmp3;
  /* 1056751*/ ret_to_arg_ref_tmp_5 = &call_tmp8;
  /* 1056756*/ _build_range2(INT64(0), ret_to_arg_ref_tmp_5, _ln, _fn);
  /* 1056765*/ ret_to_arg_ref_tmp_6 = &call_tmp9;
  /* 1056770*/ chpl___POUND_(&call_tmp8, local_numLocales, ret_to_arg_ref_tmp_6, _ln, _fn);
  /* 1127382*/ _ic__F0_this = call_tmp9;
  /* 1071764*/ this11 = &_ic__F0_this;
  /* 1128432*/ checkIfIterWillOverflow(this11, true, _ln, _fn);
  /* 1128738*/ ret3 = (&_ic__F0_this)->_low;
  /* 1129079*/ ret4 = (&_ic__F0_this)->_high;
  /* 1071696*/ end = ret4;
  /* 1071699*/ for (i = ret3; ((i <= end)); i += INT64(1)) {
    /* 1071732*/ _upEndCount(_coforallCount, _ln, _fn);
    /* 1094000*/ rvfDerefTmp = _coforallCount;
    /* 1258361*/ (&rvfDerefTmp2)->F0_this = chpl__iter_F0_this;
    /* 1094149*/ chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn4_object);
    /* 1094156*/ chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36), _ln, _fn);
    /* 1094161*/ _args_forcoforall_fn = ((_class_localscoforall_fn4)(chpl_here_alloc_tmp));
    /* 1275818*/ chpl_check_nil(_args_forcoforall_fn, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1094165*/ (_args_forcoforall_fn)->_0_b = b;
    /* 1275820*/ chpl_check_nil(_args_forcoforall_fn, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1094169*/ (_args_forcoforall_fn)->_1_flags = flags;
    /* 1275822*/ chpl_check_nil(_args_forcoforall_fn, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1094173*/ (_args_forcoforall_fn)->_2_locIdx = i;
    /* 1275824*/ chpl_check_nil(_args_forcoforall_fn, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1094177*/ (_args_forcoforall_fn)->_3_c_sublocid_any = c_sublocid_any;
    /* 1275826*/ chpl_check_nil(_args_forcoforall_fn, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1094181*/ (_args_forcoforall_fn)->_4_rvfDerefTmp = rvfDerefTmp;
    /* 1275828*/ chpl_check_nil(_args_forcoforall_fn, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1094185*/ (_args_forcoforall_fn)->_5_rvfDerefTmp = rvfDerefTmp2;
    /* 1275830*/ chpl_check_nil(_args_forcoforall_fn, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
    /* 1094189*/ (_args_forcoforall_fn)->_6_this = this7;
    /* 1305300*/ (_args_forcoforall_fn)->_ln = _ln;
    /* 1305303*/ (_args_forcoforall_fn)->_fn = _fn;
    /* 1094262*/ /*** wrapcoforall_fn4 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(3), ((void*)(_args_forcoforall_fn)), &(((_args_forcoforall_fn)->_4_rvfDerefTmp)->taskList), chpl_nodeID, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  }
  /* 1056814*/ chpl_taskListProcess((_coforallCount)->taskList, _ln, _fn);
  /* 1056817*/ _waitEndCount(_coforallCount, _ln, _fn);
  /* 1097919*/ delete_tmp = _coforallCount;
  /* 1275916*/ chpl_check_nil(delete_tmp, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1097924*/ _field_destructor_tmp_ = &((delete_tmp)->i);
  /* 1275918*/ chpl_check_nil(_field_destructor_tmp_, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1097931*/ call_tmp10 = &((_field_destructor_tmp_)->_v);
  /* 1097937*/ atomic_destroy_int_least64_t(call_tmp10);
  /* 1097941*/ call_tmp11 = ((void*)(delete_tmp));
  /* 1097946*/ chpl_here_free(call_tmp11, _ln, _fn);
  /* 1056829*/ chpl__autoDestroy5(flags, _ln, _fn);
  /* 1106375*/ call_tmp13 = chpl_task_getRequestedSubloc();
  /* 1106383*/ ret_to_arg_ref_tmp_7 = &call_tmp14;
  /* 1106388*/ chpl_buildLocaleID(chpl_nodeID, call_tmp13, ret_to_arg_ref_tmp_7, _ln, _fn);
  /* 1106394*/ call_tmp15 = chpl__initCopy_chpl_rt_localeID_t(call_tmp14);
  /* 1106401*/ call_tmp16 = chpl_localeID_to_locale(&call_tmp15, _ln, _fn);
  /* 342801*/ call_tmp12 = call_tmp16;
  /* 1275940*/ chpl_check_nil(call_tmp12, INT64(222), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1105974*/ call_tmp17 = &((call_tmp12)->runningTaskCounter);
  /* 1275942*/ chpl_check_nil(call_tmp17, INT64(222), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1105983*/ call_tmp18 = &((call_tmp17)->_v);
  /* 1105989*/ atomic_store_explicit_int_least64_t(call_tmp18, INT64(0), local_memory_order_relaxed);
  /* 273690*/ return;
}

/* LocaleModel.chpl:215 */
/* 1094193 */ static void wrapcoforall_fn4(_class_localscoforall_fn4 c) {
  /* 1305286 */ int64_t _ln;
  /* 1305285 */ c_string _fn;
  /* 1094200 */ localesBarrier _0_b;
  /* 1094208 */ DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags = NULL;
  /* 1094216 */ int64_t _2_locIdx;
  /* 1094224 */ int32_t _3_c_sublocid_any;
  /* 1094232 */ chpl___EndCount _4_rvfDerefTmp = NULL;
  /* 1094240 */ _ir_initOnLocales_AbstractRootLocale _5_rvfDerefTmp;
  /* 1094248 */ RootLocale _6_this = NULL;
  /* 1094194*/ /* 1305293*/ _ln = (c)->_ln;
  /* 1305287*/ _fn = (c)->_fn;
  /* 1275832*/ chpl_check_nil(c, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1094205*/ _0_b = (c)->_0_b;
  /* 1275834*/ chpl_check_nil(c, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1094213*/ _1_flags = (c)->_1_flags;
  /* 1275836*/ chpl_check_nil(c, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1094221*/ _2_locIdx = (c)->_2_locIdx;
  /* 1275838*/ chpl_check_nil(c, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1094229*/ _3_c_sublocid_any = (c)->_3_c_sublocid_any;
  /* 1275840*/ chpl_check_nil(c, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1094237*/ _4_rvfDerefTmp = (c)->_4_rvfDerefTmp;
  /* 1275842*/ chpl_check_nil(c, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1094245*/ _5_rvfDerefTmp = (c)->_5_rvfDerefTmp;
  /* 1275844*/ chpl_check_nil(c, INT64(215), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1094253*/ _6_this = (c)->_6_this;
  /* 1094198*/ coforall_fn4(&_0_b, _1_flags, _2_locIdx, _3_c_sublocid_any, _4_rvfDerefTmp, &_5_rvfDerefTmp, _6_this, _ln, _fn);
  /* 1094258*/ chpl_here_free(((void*)(c)), _ln, _fn);
  /* 1094260*/ return;
}

/* ChapelLocale.chpl:223 */
/* 1056836 */ static void coforall_fn4(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, int32_t c_sublocid_any, chpl___EndCount _coforallCount, _ir_initOnLocales_AbstractRootLocale* const chpl__iter, RootLocale this7, int64_t _ln, c_string _fn) {
  /* 1105507 */ int32_t call_tmp;
  /* 1056858 */ chpl_localeID_t call_tmp2;
  /* 1056862 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1108562 */ DefaultDist ret = NULL;
  /* 1108569 */ object call_tmp3 = NULL;
  /* 1108576 */ chpl_bool call_tmp4;
  /* 1108585 */ DefaultDist this8 = NULL;
  /* 1108587 */ int64_t call_tmp5;
  /* 1108593 */ chpl_opaque cast_tmp;
  /* 1108608 */ atomic_refcnt this9;
  /* 1108610 */ atomic_int64 _init_class_tmp_;
  /* 1108616 */ atomic_int64 this10;
  /* 1108618 */ atomic_int_least64_t ret2;
  /* 1108620 */ atomic_int_least64_t type_tmp;
  /* 1108625 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1108639 */ atomic_int64 wrap_call_tmp;
  /* 1108651 */ atomic_refcnt wrap_call_tmp2;
  /* 1108659 */ list_BaseDom this11;
  /* 1108673 */ listNode_BaseDom call_tmp6 = NULL;
  /* 1108684 */ listNode_BaseDom call_tmp7 = NULL;
  /* 1108699 */ list_BaseDom wrap_call_tmp3;
  /* 1108709 */ atomicflag this12;
  /* 1108711 */ atomic_flag ret3;
  /* 1108713 */ atomic_flag type_tmp2;
  /* 1108718 */ _ref_atomic_flag _ref_tmp_2 = NULL;
  /* 1108732 */ atomicflag wrap_call_tmp4;
  /* 1108740 */ DefaultDist wrap_call_tmp5 = NULL;
  /* 1108750 */ DefaultDist call_tmp8 = NULL;
  /* 1108752 */ _ref_DefaultDist ret_to_arg_ref_tmp_2 = NULL;
  /* 1071805 */ LocaleModel const_tmp = NULL;
  /* 1131532 */ locale call_tmp9 = NULL;
  /* 1116594 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp10 = NULL;
  /* 1071833 */ DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  /* 1139335 */ _tuple_1_star_int64_t i;
  /* 1139337 */ _tuple_1_star_int64_t this13;
  /* 1139346 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp11 = NULL;
  /* 1139348 */ DefaultRectangularArr_locale_1_int64_t_F ret4 = NULL;
  /* 1139358 */ DefaultRectangularDom_1_int64_t_F ret5 = NULL;
  /* 1139365 */ chpl_bool call_tmp12;
  /* 1139373 */ chpl_bool call_tmp13;
  /* 1139381 */ chpl_string call_tmp14;
  /* 1139394 */ int64_t sum;
  /* 1265625 */ int64_t ret_x1;
  /* 1265629 */ _ref__tuple_1_star_int64_t ret_ = NULL;
  /* 1139411 */ int64_t coerce_tmp2;
  /* 1139425 */ int64_t call_tmp15;
  /* 1139435 */ _ddata_locale ret6 = NULL;
  /* 1139442 */ _ddata_locale coerce_tmp3 = NULL;
  /* 1139447 */ _ref_locale call_tmp16 = NULL;
  /* 1138673 */ locale call_tmp17 = NULL;
  /* 1071857 */ locale coerce_tmp4 = NULL;
  /* 1131542 */ locale call_tmp18 = NULL;
  /* 1116679 */ _ref_int64_t call_tmp19 = NULL;
  /* 1071871 */ locale coerce_tmp5 = NULL;
  /* 1138683 */ locale call_tmp20 = NULL;
  /* 1131565 */ int64_t ret7;
  /* 1071901 */ locale coerce_tmp6 = NULL;
  /* 1131552 */ locale call_tmp21 = NULL;
  /* 1116713 */ _ref_int64_t call_tmp22 = NULL;
  /* 1071915 */ locale coerce_tmp7 = NULL;
  /* 1138693 */ locale call_tmp23 = NULL;
  /* 1131588 */ int64_t ret8;
  /* 1056890 */ _ref_localesBarrier _ref_tmp_3 = NULL;
  /* 1056848*/ /* 1105509*/ call_tmp = ((int32_t)(locIdx));
  /* 1056864*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1056869*/ chpl_buildLocaleID(call_tmp, c_sublocid_any, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1108564*/ ret = defaultDist;
  /* 1108571*/ call_tmp3 = ((object)(ret));
  /* 1108578*/ call_tmp4 = (call_tmp3 == nil);
  /* 1108769*/ if (call_tmp4) /* 1108584*/ {
    /* 1108589*/ call_tmp5 = sizeof(chpl_DefaultDist_object);
    /* 1108595*/ cast_tmp = chpl_here_alloc(call_tmp5, INT16(4), _ln, _fn);
    /* 1108601*/ this8 = ((DefaultDist)(cast_tmp));
    /* 1108606*/ ((object)(this8))->chpl__cid = chpl__cid_DefaultDist;
    /* 1108612*/ (&this9)->_cnt = _init_class_tmp_;
    /* 1108622*/ ret2 = type_tmp;
    /* 1108627*/ _ref_tmp_ = &ret2;
    /* 1108632*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
    /* 1108635*/ (&this10)->_v = ret2;
    /* 1108641*/ wrap_call_tmp = _construct_atomic_int64(ret2, &this10, _ln, _fn);
    /* 1108647*/ (&this9)->_cnt = wrap_call_tmp;
    /* 1108653*/ wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this9, _ln, _fn);
    /* 1108661*/ (&this11)->first = nil;
    /* 1108665*/ (&this11)->last = nil;
    /* 1108669*/ (&this11)->length = INT64(0);
    /* 1108675*/ call_tmp6 = ((listNode_BaseDom)(nil));
    /* 1108680*/ (&this11)->first = call_tmp6;
    /* 1108686*/ call_tmp7 = ((listNode_BaseDom)(nil));
    /* 1108691*/ (&this11)->last = call_tmp7;
    /* 1108695*/ (&this11)->length = INT64(0);
    /* 1108701*/ wrap_call_tmp3 = _construct_list2(call_tmp6, call_tmp7, INT64(0), &this11, _ln, _fn);
    /* 1108715*/ ret3 = type_tmp2;
    /* 1108720*/ _ref_tmp_2 = &ret3;
    /* 1108725*/ atomic_init_flag(_ref_tmp_2, false);
    /* 1108728*/ (&this12)->_v = ret3;
    /* 1108734*/ wrap_call_tmp4 = _construct_atomicflag(ret3, &this12, _ln, _fn);
    /* 1108742*/ wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this8, _ln, _fn);
    /* 1108754*/ ret_to_arg_ref_tmp_2 = &call_tmp8;
    /* 1108759*/ chpl__buildDistValue2(wrap_call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
    /* 1108763*/ chpl___ASSIGN_(defaultDist, call_tmp8, _ln, _fn);
    /* 1108767*/ chpl__autoDestroy(call_tmp8, _ln, _fn);
  }
  /* 1131534*/ call_tmp9 = ((locale)(this7));
  /* 1071816*/ const_tmp = LocaleModel2(call_tmp9, _ln, _fn);
  /* 1276148*/ chpl_check_nil(this7, INT64(217), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116596*/ call_tmp10 = (this7)->myLocales;
  /* 1071835*/ coerce_tmp = call_tmp10;
  /* 1139339*/ *(this13 + INT64(0)) = locIdx;
  /* 1139343*/ *(i + INT64(0)) = *(this13 + INT64(0));
  /* 1139350*/ ret4 = coerce_tmp;
  /* 1139355*/ call_tmp11 = ret4;
  /* 1277066*/ chpl_check_nil(call_tmp11, INT64(217), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1139360*/ ret5 = (call_tmp11)->dom;
  /* 1277068*/ chpl_check_nil(ret5, INT64(217), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1139367*/ call_tmp12 = dsiMember2(ret5, &this13, _ln, _fn);
  /* 1139375*/ call_tmp13 = (! call_tmp12);
  /* 1139393*/ if (call_tmp13) /* 1139380*/ {
    /* 1139383*/ string_from_c_string(&call_tmp14, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
    /* 1139390*/ halt2(call_tmp14, &this13, _ln, _fn);
  }
  /* 1139396*/ sum = INT64(0);
  /* 1278348*/ chpl_check_nil(call_tmp11, INT64(217), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1265633*/ ret_ = &((call_tmp11)->blk);
  /* 1265638*/ ret_x1 = *(*(ret_) + INT64(0));
  /* 1139413*/ coerce_tmp2 = *(i + INT64(0));
  /* 1139427*/ call_tmp15 = (coerce_tmp2 * ret_x1);
  /* 1139432*/ sum += call_tmp15;
  /* 1277070*/ chpl_check_nil(call_tmp11, INT64(217), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1139437*/ ret6 = (call_tmp11)->shiftedData;
  /* 1139444*/ coerce_tmp3 = ret6;
  /* 1139449*/ call_tmp16 = (coerce_tmp3 + sum);
  /* 1138675*/ call_tmp17 = ((locale)(const_tmp));
  /* 1118562*/ *(call_tmp16) = call_tmp17;
  /* 1131544*/ call_tmp18 = ((locale)(this7));
  /* 1071859*/ coerce_tmp4 = call_tmp18;
  /* 1276162*/ chpl_check_nil(coerce_tmp4, INT64(218), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116681*/ call_tmp19 = &((coerce_tmp4)->numCores);
  /* 1138685*/ call_tmp20 = ((locale)(const_tmp));
  /* 1071873*/ coerce_tmp5 = call_tmp20;
  /* 1276814*/ chpl_check_nil(coerce_tmp5, INT64(218), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1131567*/ ret7 = (coerce_tmp5)->numCores;
  /* 1116271*/ *(call_tmp19) += ret7;
  /* 1131554*/ call_tmp21 = ((locale)(this7));
  /* 1071903*/ coerce_tmp6 = call_tmp21;
  /* 1276168*/ chpl_check_nil(coerce_tmp6, INT64(219), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116715*/ call_tmp22 = &((coerce_tmp6)->maxTaskPar);
  /* 1138695*/ call_tmp23 = ((locale)(const_tmp));
  /* 1071917*/ coerce_tmp7 = call_tmp23;
  /* 1276816*/ chpl_check_nil(coerce_tmp7, INT64(219), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1131590*/ ret8 = (coerce_tmp7)->maxTaskPar;
  /* 1116277*/ *(call_tmp22) += ret8;
  /* 1056892*/ _ref_tmp_3 = b;
  /* 1275750*/ chpl_check_nil(_ref_tmp_3, INT64(229), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1056897*/ wait2(_ref_tmp_3, locIdx, flags, _ln, _fn);
  /* 1056902*/ chpl_rootLocaleInitPrivate(locIdx, _ln, _fn);
  /* 1056914*/ _downEndCount(_coforallCount, _ln, _fn);
  /* 1056916*/ return;
}

/* LocaleModel.chpl:229 */
/*   67464 */ static int64_t chpl_id3(RootLocale this7, int64_t _ln, c_string _fn) {
  /* 1272242 */ int64_t local_numLocales;
  /*  273694 */ int64_t ret;
  /* 67465*/ /* 1272243*/ local_numLocales = numLocales;
  /* 273699*/ ret = local_numLocales;
  /* 273696*/ return ret;
}

/* LocaleModel.chpl:241 */
/*   67536 */ static int64_t getChildCount3(RootLocale this7, int64_t _ln, c_string _fn) {
  /* 1116564 */ DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  /*  342843 */ int64_t call_tmp2;
  /* 67537*/ /* 1276142*/ chpl_check_nil(this7, INT64(241), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116566*/ call_tmp = (this7)->myLocaleSpace;
  /* 1275116*/ chpl_check_nil(call_tmp, INT64(241), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 342846*/ call_tmp2 = numIndices(call_tmp, _ln, _fn);
  /* 273734*/ return call_tmp2;
}

/* LocaleModel.chpl:250 */
/*   67621 */ static locale getChild3(RootLocale this7, int64_t idx, int64_t _ln, c_string _fn) {
  /* 1116574 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  /*  970486 */ DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  /* 1139805 */ _tuple_1_star_int64_t i;
  /* 1139807 */ _tuple_1_star_int64_t this8;
  /* 1139816 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  /* 1139818 */ DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  /* 1139828 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1139835 */ chpl_bool call_tmp3;
  /* 1139843 */ chpl_bool call_tmp4;
  /* 1139851 */ chpl_string call_tmp5;
  /* 1139864 */ int64_t sum;
  /* 1265648 */ int64_t ret_x1;
  /* 1265652 */ _ref__tuple_1_star_int64_t ret_ = NULL;
  /* 1139881 */ int64_t coerce_tmp2;
  /* 1139895 */ int64_t call_tmp6;
  /* 1139905 */ _ddata_locale ret3 = NULL;
  /* 1139912 */ _ddata_locale coerce_tmp3 = NULL;
  /* 1139917 */ locale ret4 = NULL;
  /* 1139919 */ _ref_locale call_tmp7 = NULL;
  /* 67622*/ /* 1276144*/ chpl_check_nil(this7, INT64(250), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116576*/ call_tmp = (this7)->myLocales;
  /* 970489*/ coerce_tmp = call_tmp;
  /* 1139809*/ *(this8 + INT64(0)) = idx;
  /* 1139813*/ *(i + INT64(0)) = *(this8 + INT64(0));
  /* 1139820*/ ret = coerce_tmp;
  /* 1139825*/ call_tmp2 = ret;
  /* 1277072*/ chpl_check_nil(call_tmp2, INT64(250), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1139830*/ ret2 = (call_tmp2)->dom;
  /* 1277074*/ chpl_check_nil(ret2, INT64(250), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1139837*/ call_tmp3 = dsiMember2(ret2, &this8, _ln, _fn);
  /* 1139845*/ call_tmp4 = (! call_tmp3);
  /* 1139863*/ if (call_tmp4) /* 1139850*/ {
    /* 1139853*/ string_from_c_string(&call_tmp5, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
    /* 1139860*/ halt2(call_tmp5, &this8, _ln, _fn);
  }
  /* 1139866*/ sum = INT64(0);
  /* 1278350*/ chpl_check_nil(call_tmp2, INT64(250), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1265656*/ ret_ = &((call_tmp2)->blk);
  /* 1265661*/ ret_x1 = *(*(ret_) + INT64(0));
  /* 1139883*/ coerce_tmp2 = *(i + INT64(0));
  /* 1139897*/ call_tmp6 = (coerce_tmp2 * ret_x1);
  /* 1139902*/ sum += call_tmp6;
  /* 1277076*/ chpl_check_nil(call_tmp2, INT64(250), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1139907*/ ret3 = (call_tmp2)->shiftedData;
  /* 1139914*/ coerce_tmp3 = ret3;
  /* 1139921*/ call_tmp7 = (coerce_tmp3 + sum);
  /* 1139926*/ ret4 = *(call_tmp7);
  /* 273768*/ return ret4;
}

/* LocaleModel.chpl:258 */
/* 1038188 */ static void getDefaultLocaleArray2(RootLocale this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
  /* 1138186 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  /* 1038192*/ /* 1277038*/ chpl_check_nil(this7, INT64(258), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138188*/ call_tmp = (this7)->myLocales;
  /* 1038220*/ *(_retArg) = chpl__autoCopy4(call_tmp, _ln, _fn);
  /* 1038214*/ return;
}

/* LocaleModel.chpl:258 */
/*   67700 */ static DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray(RootLocale this7, int64_t _ln, c_string _fn) {
  /* 1138176 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  /* 67701*/ /* 1277036*/ chpl_check_nil(this7, INT64(258), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1138178*/ call_tmp = (this7)->myLocales;
  /* 273802*/ return call_tmp;
}

/* LocaleModel.chpl:260 */
/*   67714 */ static locale localeIDtoLocale2(RootLocale this7, chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
  /*  342892 */ int32_t call_tmp;
  /* 1116584 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  /*  971109 */ DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  /* 1112793 */ int64_t call_tmp3;
  /* 1139933 */ _tuple_1_star_int64_t i;
  /* 1139935 */ _tuple_1_star_int64_t this8;
  /* 1139944 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp4 = NULL;
  /* 1139946 */ DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  /* 1139956 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1139963 */ chpl_bool call_tmp5;
  /* 1139971 */ chpl_bool call_tmp6;
  /* 1139979 */ chpl_string call_tmp7;
  /* 1139992 */ int64_t sum;
  /* 1265671 */ int64_t ret_x1;
  /* 1265675 */ _ref__tuple_1_star_int64_t ret_ = NULL;
  /* 1140009 */ int64_t coerce_tmp2;
  /* 1140023 */ int64_t call_tmp8;
  /* 1140033 */ _ddata_locale ret3 = NULL;
  /* 1140040 */ _ddata_locale coerce_tmp3 = NULL;
  /* 1140045 */ locale ret4 = NULL;
  /* 1140047 */ _ref_locale call_tmp9 = NULL;
  /* 67715*/ /* 342895*/ call_tmp = chpl_rt_nodeFromLocaleID(*(id2));
  /* 1276146*/ chpl_check_nil(this7, INT64(265), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1116586*/ call_tmp2 = (this7)->myLocales;
  /* 971112*/ coerce_tmp = call_tmp2;
  /* 1112795*/ call_tmp3 = ((int64_t)(call_tmp));
  /* 1139937*/ *(this8 + INT64(0)) = call_tmp3;
  /* 1139941*/ *(i + INT64(0)) = *(this8 + INT64(0));
  /* 1139948*/ ret = coerce_tmp;
  /* 1139953*/ call_tmp4 = ret;
  /* 1277078*/ chpl_check_nil(call_tmp4, INT64(265), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1139958*/ ret2 = (call_tmp4)->dom;
  /* 1277080*/ chpl_check_nil(ret2, INT64(265), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1139965*/ call_tmp5 = dsiMember2(ret2, &this8, _ln, _fn);
  /* 1139973*/ call_tmp6 = (! call_tmp5);
  /* 1139991*/ if (call_tmp6) /* 1139978*/ {
    /* 1139981*/ string_from_c_string(&call_tmp7, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
    /* 1139988*/ halt2(call_tmp7, &this8, _ln, _fn);
  }
  /* 1139994*/ sum = INT64(0);
  /* 1278352*/ chpl_check_nil(call_tmp4, INT64(265), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1265679*/ ret_ = &((call_tmp4)->blk);
  /* 1265684*/ ret_x1 = *(*(ret_) + INT64(0));
  /* 1140011*/ coerce_tmp2 = *(i + INT64(0));
  /* 1140025*/ call_tmp8 = (coerce_tmp2 * ret_x1);
  /* 1140030*/ sum += call_tmp8;
  /* 1277082*/ chpl_check_nil(call_tmp4, INT64(265), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1140035*/ ret3 = (call_tmp4)->shiftedData;
  /* 1140042*/ coerce_tmp3 = ret3;
  /* 1140049*/ call_tmp9 = (coerce_tmp3 + sum);
  /* 1140054*/ ret4 = *(call_tmp9);
  /* 273811*/ return ret4;
}

/* LocaleModel.chpl:277 */
/*   67797 */ static chpl_opaque chpl_here_alloc(int64_t size, int16_t md, int64_t _ln, c_string _fn) {
  /*  342959 */ int16_t call_tmp;
  /* 1115354 */ int16_t call_tmp2;
  /*  342969 */ chpl_opaque call_tmp3;
  /* 67798*/ /* 342962*/ call_tmp = chpl_memhook_md_num();
  /* 1115356*/ call_tmp2 = (md + call_tmp);
  /* 342972*/ call_tmp3 = chpl_mem_alloc(size, call_tmp2, _ln, _fn);
  /* 273831*/ return call_tmp3;
}

/* LocaleModel.chpl:298 */
/*   67962 */ static void chpl_here_free(chpl_opaque ptr, int64_t _ln, c_string _fn) {
  /* 67963*/ /* 67980*/ chpl_mem_free(ptr, _ln, _fn);
  /* 273887*/ return;
}

/* LocaleModel.chpl:325 */
/*   68093 */ void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  /*  343004 */ int32_t call_tmp;
  /* 1105537 */ chpl_bool call_tmp2;
  /*  343019 */ int32_t call_tmp3;
  /* 1112693 */ int64_t call_tmp4;
  /* 1112703 */ int64_t call_tmp5;
  /* 68094*/ /* 343007*/ call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
  /* 1105539*/ call_tmp2 = (call_tmp == chpl_nodeID);
  /* 68144*/ if (call_tmp2) /* 68128*/ {
    /* 68126*/ chpl_ftable_call(fn, args);
  } else /* 68141*/ {
    /* 343022*/ call_tmp3 = chpl_sublocFromLocaleID(loc, _ln, _fn);
    /* 1112695*/ call_tmp4 = ((int64_t)(call_tmp));
    /* 1112705*/ call_tmp5 = ((int64_t)(call_tmp3));
    /* 68139*/ chpl_comm_fork(call_tmp4, call_tmp5, fn, args, args_size);
  }
  /* 273906*/ return;
}

/* LocaleModel.chpl:346 */
/*   68154 */ void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  /*  343024 */ int32_t call_tmp;
  /* 1105547 */ chpl_bool call_tmp2;
  /*  343039 */ int32_t call_tmp3;
  /* 1112713 */ int64_t call_tmp4;
  /* 1112723 */ int64_t call_tmp5;
  /* 68155*/ /* 343027*/ call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
  /* 1105549*/ call_tmp2 = (call_tmp == chpl_nodeID);
  /* 68205*/ if (call_tmp2) /* 68189*/ {
    /* 68187*/ chpl_ftable_call(fn, args);
  } else /* 68202*/ {
    /* 343042*/ call_tmp3 = chpl_sublocFromLocaleID(loc, _ln, _fn);
    /* 1112715*/ call_tmp4 = ((int64_t)(call_tmp));
    /* 1112725*/ call_tmp5 = ((int64_t)(call_tmp3));
    /* 68200*/ chpl_comm_fork_fast(call_tmp4, call_tmp5, fn, args, args_size);
  }
  /* 273908*/ return;
}

/* LocaleModel.chpl:366 */
/*   68215 */ void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn) {
  /*  343044 */ int32_t call_tmp;
  /* 1105557 */ chpl_bool call_tmp2;
  /*  343059 */ chpl_bool call_tmp3;
  /*  343069 */ int32_t call_tmp4;
  /* 1112733 */ int64_t call_tmp5;
  /* 1112743 */ int64_t call_tmp6;
  /*  343074 */ int32_t call_tmp7;
  /*  343079 */ chpl_bool call_tmp8;
  /* 1112753 */ int64_t call_tmp9;
  /* 1112763 */ int64_t call_tmp10;
  /* 1112773 */ int64_t call_tmp11;
  /* 1112783 */ int64_t call_tmp12;
  /* 68216*/ /* 343047*/ call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
  /* 1105559*/ call_tmp2 = (call_tmp == chpl_nodeID);
  /* 68309*/ if (call_tmp2) /* 68271*/ {
    /* 343062*/ call_tmp3 = chpl_task_getSerial();
    /* 68267*/ if (call_tmp3) /* 68268*/ {
      /* 68251*/ chpl_ftable_call(fn, args);
    } else /* 68269*/ {
      /* 343072*/ call_tmp4 = chpl_sublocFromLocaleID(loc, _ln, _fn);
      /* 1112735*/ call_tmp5 = ((int64_t)(call_tmp));
      /* 1112745*/ call_tmp6 = ((int64_t)(call_tmp4));
      /* 68263*/ chpl_comm_fork_nb(call_tmp5, call_tmp6, fn, args, args_size);
    }
  } else /* 68279*/ {
    /* 343077*/ call_tmp7 = chpl_sublocFromLocaleID(loc, _ln, _fn);
    /* 343082*/ call_tmp8 = chpl_task_getSerial();
    /* 68303*/ if (call_tmp8) /* 68304*/ {
      /* 1112755*/ call_tmp9 = ((int64_t)(call_tmp));
      /* 1112765*/ call_tmp10 = ((int64_t)(call_tmp7));
      /* 68290*/ chpl_comm_fork(call_tmp9, call_tmp10, fn, args, args_size);
    } else /* 68305*/ {
      /* 1112775*/ call_tmp11 = ((int64_t)(call_tmp));
      /* 1112785*/ call_tmp12 = ((int64_t)(call_tmp7));
      /* 68299*/ chpl_comm_fork_nb(call_tmp11, call_tmp12, fn, args, args_size);
    }
  }
  /* 273910*/ return;
}

/* LocaleModel.chpl:416 */
/*   68379 */ void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn) {
  /* 68380*/ /* 68405*/ chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, true, _ln, _fn);
  /* 273920*/ return;
}

/* LocaleModel.chpl:431 */
/*   68416 */ void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn) {
  /* 68417*/ /* 68442*/ chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, false, _ln, _fn);
  /* 273922*/ return;
}

/* LocaleModel.chpl:445 */
/*   68453 */ void chpl_taskListProcess(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  /* 68454*/ /* 68458*/ chpl_task_processTaskList(task_list);
  /* 273924*/ return;
}

/* LocaleModel.chpl:454 */
/*   68469 */ void chpl_taskListExecute(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  /* 68470*/ /* 68474*/ chpl_task_executeTasksInList(task_list);
  /* 273926*/ return;
}

/* LocaleModel.chpl:463 */
/*   68485 */ void chpl_taskListFree(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
  /* 68486*/ /* 68490*/ chpl_task_freeTaskList(task_list);
  /* 273928*/ return;
}

