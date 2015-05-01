/* ChapelLocale.chpl:23 */
/*  235302 */ static void chpl__init_ChapelLocale(int64_t _ln, c_string _fn) {
  /* 1273927 */ c_string modFormatStr;
  /* 1273928 */ c_string modStr;
  /* 1273944 */ _ref_int32_t refIndentLevel = NULL;
  /*  294926 */ locale type_tmp = NULL;
  /*  294942 */ locale type_tmp2 = NULL;
  /*  295046 */ locale const_tmp = NULL;
  /* 235303*/ /* 1273963*/ if (chpl__init_ChapelLocale_p) /* 1273964*/ {
    /* 1273960*/ goto _exit_chpl__init_ChapelLocale;
  }
  /* 1273936*/ modFormatStr = "%*s\n";
  /* 1273939*/ modStr = "ChapelLocale";
  /* 1273942*/ printModuleInit(modFormatStr, modStr, INT64(12), _ln, _fn);
  /* 1273948*/ refIndentLevel = &moduleInitLevel;
  /* 1273951*/ *(refIndentLevel) += INT64(1);
  /* 1273925*/ chpl__init_ChapelLocale_p = true;
  /* 1273236*/ {
    /* 1273237*/ chpl__init_LocaleModel(_ln, _fn);
  }
  /* 1118490*/ type_tmp = nil;
  /* 294934*/ rootLocale = type_tmp;
  /* 1118496*/ type_tmp2 = nil;
  /* 294950*/ origRootLocale = type_tmp2;
  /* 295051*/ const_tmp = locale2(_ln, _fn);
  /* 295048*/ dummyLocale = const_tmp;
  /* 1273954*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelLocale:;
  /* 274362*/ return;
}

/* ChapelLocale.chpl:31 */
/*  193548 */ static locale _construct_locale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, locale meme, int64_t _ln, c_string _fn) {
  /*  193550 */ locale this7 = NULL;
  /*  193564 */ object T = NULL;
  /* 193549*/ /* 193559*/ this7 = meme;
  /* 1275166*/ chpl_check_nil(this7, INT64(31), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193571*/ T = &((this7)->super);
  /* 193562*/ _construct_object(T);
  /* 1275168*/ chpl_check_nil(this7, INT64(41), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193583*/ (this7)->parent = parent;
  /* 1275170*/ chpl_check_nil(this7, INT64(45), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193596*/ (this7)->numCores = numCores;
  /* 1275172*/ chpl_check_nil(this7, INT64(47), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193609*/ (this7)->maxTaskPar = maxTaskPar;
  /* 1275174*/ chpl_check_nil(this7, INT64(67), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193626*/ (this7)->runningTaskCounter = *(runningTaskCounter);
  /* 193631*/ return this7;
}

/* ChapelLocale.chpl:31 */
/*  431159 */ static void chpl__auto_destroy_locale(locale this7, int64_t _ln, c_string _fn) {
  /* 1033253 */ _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  /* 1097795 */ _ref_atomic_int_least64_t call_tmp = NULL;
  /* 431160*/ /* 1275648*/ chpl_check_nil(this7, INT64(67), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1033258*/ _field_destructor_tmp_ = &((this7)->runningTaskCounter);
  /* 1275908*/ chpl_check_nil(_field_destructor_tmp_, INT64(67), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1097797*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1097803*/ atomic_destroy_int_least64_t(call_tmp);
  /* 431165*/ return;
}

/* ChapelLocale.chpl:33 */
/*   68508 */ static locale locale2(int64_t _ln, c_string _fn) {
  /*  254286 */ locale this7 = NULL;
  /* 1119483 */ locale this8 = NULL;
  /* 1119485 */ int64_t call_tmp;
  /* 1119491 */ chpl_opaque cast_tmp;
  /* 1119518 */ atomic_int64 _init_class_tmp_;
  /* 1119524 */ locale call_tmp2 = NULL;
  /* 1119543 */ atomic_int64 this9;
  /* 1119545 */ atomic_int_least64_t ret;
  /* 1119547 */ atomic_int_least64_t type_tmp;
  /* 1119552 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1119566 */ atomic_int64 wrap_call_tmp;
  /* 1119578 */ locale wrap_call_tmp2 = NULL;
  /* 68509*/ /* 1119487*/ call_tmp = sizeof(chpl_locale_object);
  /* 1119493*/ cast_tmp = chpl_here_alloc(call_tmp, INT16(1), _ln, _fn);
  /* 1119499*/ this8 = ((locale)(cast_tmp));
  /* 1119504*/ ((object)(this8))->chpl__cid = chpl__cid_locale;
  /* 1276350*/ chpl_check_nil(this8, INT64(33), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1119506*/ (this8)->parent = nil;
  /* 1276352*/ chpl_check_nil(this8, INT64(33), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1119510*/ (this8)->numCores = INT64(0);
  /* 1276354*/ chpl_check_nil(this8, INT64(33), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1119514*/ (this8)->maxTaskPar = INT64(0);
  /* 1276356*/ chpl_check_nil(this8, INT64(33), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1119520*/ (this8)->runningTaskCounter = _init_class_tmp_;
  /* 1119526*/ call_tmp2 = ((locale)(nil));
  /* 1276358*/ chpl_check_nil(this8, INT64(33), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1119531*/ (this8)->parent = call_tmp2;
  /* 1276360*/ chpl_check_nil(this8, INT64(33), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1119535*/ (this8)->numCores = INT64(0);
  /* 1276362*/ chpl_check_nil(this8, INT64(33), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1119539*/ (this8)->maxTaskPar = INT64(0);
  /* 1119549*/ ret = type_tmp;
  /* 1119554*/ _ref_tmp_ = &ret;
  /* 1119559*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  /* 1119562*/ (&this9)->_v = ret;
  /* 1119568*/ wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
  /* 1276364*/ chpl_check_nil(this8, INT64(33), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1119574*/ (this8)->runningTaskCounter = wrap_call_tmp;
  /* 1119580*/ wrap_call_tmp2 = _construct_locale(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, this8, _ln, _fn);
  /* 254291*/ return wrap_call_tmp2;
}

/* ChapelLocale.chpl:49 */
/*   68527 */ static int64_t id(locale this7, int64_t _ln, c_string _fn) {
  /*  343091 */ int64_t call_tmp;
  /* 1023283 */ int32_t _virtual_method_tmp_;
  /* 68528*/ /* 1275620*/ chpl_check_nil(this7, INT64(49), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1023287*/ _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
  /* 343094*/ call_tmp = ((int64_t(*)(locale, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(2))])(this7, _ln, _fn);
  /* 273941*/ return call_tmp;
}

/* ChapelLocale.chpl:93 */
/*   68686 */ static int64_t chpl_id(locale this7, int64_t _ln, c_string _fn) {
  /* 68687*/ /* 1094622*/ halt("Pure virtual function called.", _ln, _fn);
  /* 273993*/ return INT64(-1);
}

/* ChapelLocale.chpl:114 */
/*   68765 */ static int64_t getChildCount(locale this7, int64_t _ln, c_string _fn) {
  /* 68766*/ /* 1094628*/ halt("Pure virtual function called.", _ln, _fn);
  /* 274037*/ return INT64(0);
}

/* ChapelLocale.chpl:131 */
/*   68800 */ static locale getChild(locale this7, int64_t idx, int64_t _ln, c_string _fn) {
  /* 68801*/ /* 1094634*/ halt("Pure virtual function called.", _ln, _fn);
  /* 274053*/ return this7;
}

/* ChapelLocale.chpl:146 */
/*  193505 */ static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme, int64_t _ln, c_string _fn) {
  /*  193507 */ AbstractLocaleModel this7 = NULL;
  /*  193665 */ locale T = NULL;
  /* 193506*/ /* 193512*/ this7 = meme;
  /* 1275176*/ chpl_check_nil(this7, INT64(146), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193672*/ T = &((this7)->super);
  /* 193633*/ _construct_locale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
  /* 193676*/ return meme;
}

/* ChapelLocale.chpl:146 */
/*  431226 */ static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this7, int64_t _ln, c_string _fn) {
  /* 1033273 */ locale _parent_destructor_tmp_ = NULL;
  /* 1116497 */ _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  /* 1116504 */ _ref_atomic_int_least64_t call_tmp = NULL;
  /* 431227*/ /* 1033278*/ _parent_destructor_tmp_ = ((locale)(this7));
  /* 1276130*/ chpl_check_nil(_parent_destructor_tmp_, INT64(146), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1116499*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
  /* 1276132*/ chpl_check_nil(_field_destructor_tmp_, INT64(146), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1116506*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1116512*/ atomic_destroy_int_least64_t(call_tmp);
  /* 431232*/ return;
}

/* ChapelLocale.chpl:177 */
/*  193810 */ static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractRootLocale meme, int64_t _ln, c_string _fn) {
  /*  193812 */ AbstractRootLocale this7 = NULL;
  /*  193852 */ locale T = NULL;
  /* 193811*/ /* 193817*/ this7 = meme;
  /* 1275186*/ chpl_check_nil(this7, INT64(177), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193859*/ T = &((this7)->super);
  /* 193820*/ _construct_locale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
  /* 193863*/ return meme;
}

/* ChapelLocale.chpl:177 */
/*  431293 */ static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this7, int64_t _ln, c_string _fn) {
  /* 1033283 */ locale _parent_destructor_tmp_ = NULL;
  /* 1116517 */ _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  /* 1116524 */ _ref_atomic_int_least64_t call_tmp = NULL;
  /* 431294*/ /* 1033288*/ _parent_destructor_tmp_ = ((locale)(this7));
  /* 1276134*/ chpl_check_nil(_parent_destructor_tmp_, INT64(177), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1116519*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
  /* 1276136*/ chpl_check_nil(_field_destructor_tmp_, INT64(177), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1116526*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1116532*/ atomic_destroy_int_least64_t(call_tmp);
  /* 431299*/ return;
}

/* ChapelLocale.chpl:195 */
/*   68976 */ static locale localeIDtoLocale(AbstractRootLocale this7, chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
  /* 1135726 */ locale call_tmp = NULL;
  /* 68977*/ /* 1094640*/ halt("Pure virtual function called.", _ln, _fn);
  /* 1135728*/ call_tmp = ((locale)(this7));
  /* 274085*/ return call_tmp;
}

/* ChapelLocale.chpl:257 */
/*  193960 */ static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme, int64_t _ln, c_string _fn) {
  /*  193962 */ localesSignal this7 = NULL;
  /*  193973 */ object T = NULL;
  /* 193961*/ /* 193968*/ this7 = meme;
  /* 1275194*/ chpl_check_nil(this7, INT64(257), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193980*/ T = &((this7)->super);
  /* 193971*/ _construct_object(T);
  /* 1275196*/ chpl_check_nil(this7, INT64(258), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 193996*/ (this7)->s = *(s);
  /* 194001*/ return this7;
}

/* ChapelLocale.chpl:257 */
/*  431387 */ static void chpl__auto_destroy_localesSignal(localesSignal this7, int64_t _ln, c_string _fn) {
  /* 1033293 */ _ref_atomicflag _field_destructor_tmp_ = NULL;
  /* 1102580 */ _ref_atomic_flag call_tmp = NULL;
  /* 431388*/ /* 1275650*/ chpl_check_nil(this7, INT64(258), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1033298*/ _field_destructor_tmp_ = &((this7)->s);
  /* 1275922*/ chpl_check_nil(_field_destructor_tmp_, INT64(258), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1102582*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1102588*/ atomic_destroy_flag(call_tmp);
  /* 431393*/ return;
}

/* ChapelLocale.chpl:260 */
/*  194010 */ static localesBarrier _construct_localesBarrier(localesBarrier* const meme) {
  /*  194012 */ localesBarrier this7;
  /* 194011*/ /* 194022*/ return *(meme);
}

/* ChapelLocale.chpl:261 */
/*  667573 */ static void wait2(_ref_localesBarrier this7, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t _ln, c_string _fn) {
  /* 1272456 */ memory_order local_memory_order_relaxed;
  /* 1272448 */ int64_t local_numLocales;
  /* 1272442 */ memory_order local_memory_order_seq_cst;
  /* 1100611 */ chpl_bool call_tmp;
  /*  667606 */ chpl_bool T;
  /* 1135736 */ memory_order default_argorder;
  /*  667619 */ int64_t count;
  /* 1135941 */ DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  /* 1246342 */ DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this = NULL;
  /* 1063270 */ int64_t i;
  /* 1063564 */ DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
  /* 1134728 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1063299 */ int64_t call_tmp2;
  /* 1063571 */ DefaultRectangularArr_localesSignal_1_int64_t_F this9 = NULL;
  /* 1136339 */ int64_t sum;
  /* 1265451 */ int64_t ret_x1;
  /* 1265455 */ _ref__tuple_1_star_int64_t ret_ = NULL;
  /* 1136370 */ int64_t call_tmp3;
  /* 1063578 */ DefaultRectangularArr_localesSignal_1_int64_t_F this10 = NULL;
  /* 1134738 */ DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  /* 1063345 */ int64_t call_tmp4;
  /* 1115564 */ int64_t call_tmp5;
  /* 1063585 */ DefaultRectangularArr_localesSignal_1_int64_t_F this11 = NULL;
  /* 1136394 */ int64_t sum2;
  /* 1265486 */ int64_t ret_x12;
  /* 1265490 */ _ref__tuple_1_star_int64_t ret_2 = NULL;
  /* 1136425 */ int64_t call_tmp6;
  /* 1063384 */ int64_t step;
  /* 1104264 */ int64_t call_tmp7;
  /* 1063404 */ int64_t last;
  /* 1063592 */ DefaultRectangularArr_localesSignal_1_int64_t_F this12 = NULL;
  /* 1134748 */ DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  /* 1063419 */ int64_t call_tmp8;
  /* 1104274 */ int64_t call_tmp9;
  /* 1111179 */ int64_t call_tmp10;
  /* 1115574 */ int64_t call_tmp11;
  /* 1063599 */ DefaultRectangularArr_localesSignal_1_int64_t_F this13 = NULL;
  /* 1136569 */ _ddata_localesSignal ret5 = NULL;
  /* 1063495 */ _ddata_localesSignal coerce_tmp = NULL;
  /* 1136600 */ _ref_localesSignal call_tmp12 = NULL;
  /* 1063523 */ localesSignal coerce_tmp2 = NULL;
  /* 1136636 */ object call_tmp13 = NULL;
  /* 1095903 */ chpl_bool call_tmp14;
  /* 1104104 */ int64_t call_tmp15;
  /* 1100621 */ chpl_bool call_tmp16;
  /* 1136065 */ DefaultRectangularArr_localesSignal_1_int64_t_F ret6 = NULL;
  /* 1246376 */ DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this2 = NULL;
  /* 1063624 */ int64_t i2;
  /* 1063905 */ DefaultRectangularArr_localesSignal_1_int64_t_F this14 = NULL;
  /* 1134768 */ DefaultRectangularDom_1_int64_t_F ret7 = NULL;
  /* 1063653 */ int64_t call_tmp17;
  /* 1063912 */ DefaultRectangularArr_localesSignal_1_int64_t_F this15 = NULL;
  /* 1136449 */ int64_t sum3;
  /* 1265521 */ int64_t ret_x13;
  /* 1265525 */ _ref__tuple_1_star_int64_t ret_3 = NULL;
  /* 1136480 */ int64_t call_tmp18;
  /* 1063919 */ DefaultRectangularArr_localesSignal_1_int64_t_F this16 = NULL;
  /* 1134778 */ DefaultRectangularDom_1_int64_t_F ret8 = NULL;
  /* 1063699 */ int64_t call_tmp19;
  /* 1115584 */ int64_t call_tmp20;
  /* 1063926 */ DefaultRectangularArr_localesSignal_1_int64_t_F this17 = NULL;
  /* 1136504 */ int64_t sum4;
  /* 1265556 */ int64_t ret_x14;
  /* 1265560 */ _ref__tuple_1_star_int64_t ret_4 = NULL;
  /* 1136535 */ int64_t call_tmp21;
  /* 1063738 */ int64_t step2;
  /* 1104284 */ int64_t call_tmp22;
  /* 1063758 */ int64_t last2;
  /* 1063933 */ DefaultRectangularArr_localesSignal_1_int64_t_F this18 = NULL;
  /* 1134788 */ DefaultRectangularDom_1_int64_t_F ret9 = NULL;
  /* 1063773 */ int64_t call_tmp23;
  /* 1104294 */ int64_t call_tmp24;
  /* 1111189 */ int64_t call_tmp25;
  /* 1115594 */ int64_t call_tmp26;
  /* 1063940 */ DefaultRectangularArr_localesSignal_1_int64_t_F this19 = NULL;
  /* 1136579 */ _ddata_localesSignal ret10 = NULL;
  /* 1063849 */ _ddata_localesSignal coerce_tmp3 = NULL;
  /* 1136610 */ _ref_localesSignal call_tmp27 = NULL;
  /* 1063877 */ localesSignal coerce_tmp4 = NULL;
  /* 1116737 */ _ref_atomicflag call_tmp28 = NULL;
  /* 1108959 */ memory_order default_argorder2;
  /* 1108966 */ _ref_atomic_flag call_tmp29 = NULL;
  /*  667755 */ localesSignal f = NULL;
  /* 1136670 */ localesSignal this20 = NULL;
  /* 1136672 */ int64_t call_tmp30;
  /* 1136678 */ chpl_opaque cast_tmp;
  /* 1136693 */ atomicflag _init_class_tmp_;
  /* 1136699 */ atomicflag this21;
  /* 1136701 */ atomic_flag ret11;
  /* 1136703 */ atomic_flag type_tmp;
  /* 1136708 */ _ref_atomic_flag _ref_tmp_ = NULL;
  /* 1136722 */ atomicflag wrap_call_tmp;
  /* 1136734 */ localesSignal wrap_call_tmp2 = NULL;
  /* 1137065 */ _tuple_1_star_int64_t i3;
  /* 1137067 */ _tuple_1_star_int64_t this22;
  /* 1137076 */ DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp31 = NULL;
  /* 1137078 */ DefaultRectangularArr_localesSignal_1_int64_t_F ret12 = NULL;
  /* 1137088 */ DefaultRectangularDom_1_int64_t_F ret13 = NULL;
  /* 1137095 */ chpl_bool call_tmp32;
  /* 1137103 */ chpl_bool call_tmp33;
  /* 1137111 */ chpl_string call_tmp34;
  /* 1137124 */ int64_t sum5;
  /* 1265579 */ int64_t ret_x15;
  /* 1265583 */ _ref__tuple_1_star_int64_t ret_5 = NULL;
  /* 1137141 */ int64_t coerce_tmp5;
  /* 1137155 */ int64_t call_tmp35;
  /* 1137165 */ _ddata_localesSignal ret14 = NULL;
  /* 1137172 */ _ddata_localesSignal coerce_tmp6 = NULL;
  /* 1137177 */ _ref_localesSignal call_tmp36 = NULL;
  /* 1116727 */ _ref_atomicflag call_tmp37 = NULL;
  /* 1138096 */ memory_order default_argorder3;
  /* 1138103 */ chpl_bool T2;
  /* 1138105 */ _ref_atomic_flag call_tmp38 = NULL;
  /* 1138112 */ chpl_bool call_tmp39;
  /* 1138120 */ chpl_bool call_tmp40;
  /* 1138135 */ _ref_atomic_flag call_tmp41 = NULL;
  /* 1138142 */ chpl_bool call_tmp42;
  /* 1138150 */ chpl_bool call_tmp43;
  /*  667786 */ localesSignal delete_tmp = NULL;
  /* 1116747 */ _ref_atomicflag _field_destructor_tmp_ = NULL;
  /* 1116754 */ _ref_atomic_flag call_tmp44 = NULL;
  /*  667795 */ chpl_opaque call_tmp45;
  /* 667588*/ /* 1272457*/ local_memory_order_relaxed = memory_order_relaxed;
  /* 1272449*/ local_numLocales = numLocales;
  /* 1272443*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1100613*/ call_tmp = (locIdx == INT64(0));
  /* 667804*/ if (call_tmp) /* 667605*/ {
    /* 667608*/ T = true;
    /* 1135943*/ ret = flags;
    /* 1136025*/ _ic__F0_this = ret;
    /* 1063569*/ this8 = ret;
    /* 1063576*/ this9 = ret;
    /* 1278336*/ chpl_check_nil(this9, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1265459*/ ret_ = &((this9)->blk);
    /* 1265464*/ ret_x1 = *(*(ret_) + INT64(0));
    /* 1063583*/ this10 = ret;
    /* 1063590*/ this11 = ret;
    /* 1278338*/ chpl_check_nil(this11, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1265494*/ ret_2 = &((this11)->blk);
    /* 1265499*/ ret_x12 = *(*(ret_2) + INT64(0));
    /* 1063597*/ this12 = ret;
    /* 1104106*/ call_tmp15 = (local_numLocales - INT64(1));
    /* 667613*/ while (T) {
      /* 1135738*/ default_argorder = local_memory_order_seq_cst;
      /* 1135742*/ atomic_fence(default_argorder, _ln, _fn);
      /* 667621*/ count = INT64(0);
      /* 1276916*/ chpl_check_nil(this8, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1134730*/ ret2 = (this8)->dom;
      /* 1275782*/ chpl_check_nil(ret2, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1063307*/ call_tmp2 = dsiLow(ret2, _ln, _fn);
      /* 1136341*/ sum = INT64(0);
      /* 1136372*/ call_tmp3 = (call_tmp2 * ret_x1);
      /* 1136377*/ sum += call_tmp3;
      /* 1276918*/ chpl_check_nil(this10, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1134740*/ ret3 = (this10)->dom;
      /* 1275784*/ chpl_check_nil(ret3, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1063353*/ call_tmp4 = dsiLow(ret3, _ln, _fn);
      /* 1115566*/ call_tmp5 = (call_tmp4 + INT64(1));
      /* 1136396*/ sum2 = INT64(0);
      /* 1136427*/ call_tmp6 = (call_tmp5 * ret_x12);
      /* 1136432*/ sum2 += call_tmp6;
      /* 1104266*/ call_tmp7 = (sum2 - sum);
      /* 1063399*/ step = call_tmp7;
      /* 1276920*/ chpl_check_nil(this12, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1134750*/ ret4 = (this12)->dom;
      /* 1275786*/ chpl_check_nil(ret4, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1063427*/ call_tmp8 = dsiNumIndices(ret4, _ln, _fn);
      /* 1104276*/ call_tmp9 = (call_tmp8 - INT64(1));
      /* 1111181*/ call_tmp10 = (call_tmp9 * call_tmp7);
      /* 1115576*/ call_tmp11 = (sum + call_tmp10);
      /* 1063461*/ last = call_tmp11;
      /* 1063604*/ this13 = _ic__F0_this;
      /* 1276984*/ chpl_check_nil(this13, INT64(273), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1136571*/ ret5 = (this13)->shiftedData;
      /* 1063497*/ coerce_tmp = ret5;
      /* 1063464*/ for (i = sum; ((i <= last)); i += step) {
        /* 1136602*/ call_tmp12 = (coerce_tmp + i);
        /* 1063525*/ coerce_tmp2 = *(call_tmp12);
        /* 1136638*/ call_tmp13 = ((object)(coerce_tmp2));
        /* 1095905*/ call_tmp14 = (call_tmp13 != nil);
        /* 1063553*/ if (call_tmp14) /* 1063542*/ {
          /* 1116265*/ count += INT64(1);
        }
      }
      /* 1100623*/ call_tmp16 = (count == call_tmp15);
      /* 667698*/ if (call_tmp16) /* 667695*/ {
        /* 667697*/ goto _breakLabel;
      }
      /* 667700*/ chpl_task_yield();
      /* 667703*/ T = true;
    }
    _breakLabel:;
    /* 1136067*/ ret6 = flags;
    /* 1136149*/ _ic__F0_this2 = ret6;
    /* 1063910*/ this14 = ret6;
    /* 1276922*/ chpl_check_nil(this14, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1134770*/ ret7 = (this14)->dom;
    /* 1275788*/ chpl_check_nil(ret7, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1063661*/ call_tmp17 = dsiLow(ret7, _ln, _fn);
    /* 1063917*/ this15 = ret6;
    /* 1136451*/ sum3 = INT64(0);
    /* 1278340*/ chpl_check_nil(this15, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1265529*/ ret_3 = &((this15)->blk);
    /* 1265534*/ ret_x13 = *(*(ret_3) + INT64(0));
    /* 1136482*/ call_tmp18 = (call_tmp17 * ret_x13);
    /* 1136487*/ sum3 += call_tmp18;
    /* 1063924*/ this16 = ret6;
    /* 1276924*/ chpl_check_nil(this16, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1134780*/ ret8 = (this16)->dom;
    /* 1275790*/ chpl_check_nil(ret8, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1063707*/ call_tmp19 = dsiLow(ret8, _ln, _fn);
    /* 1115586*/ call_tmp20 = (call_tmp19 + INT64(1));
    /* 1063931*/ this17 = ret6;
    /* 1136506*/ sum4 = INT64(0);
    /* 1278342*/ chpl_check_nil(this17, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1265564*/ ret_4 = &((this17)->blk);
    /* 1265569*/ ret_x14 = *(*(ret_4) + INT64(0));
    /* 1136537*/ call_tmp21 = (call_tmp20 * ret_x14);
    /* 1136542*/ sum4 += call_tmp21;
    /* 1104286*/ call_tmp22 = (sum4 - sum3);
    /* 1063753*/ step2 = call_tmp22;
    /* 1063938*/ this18 = ret6;
    /* 1276926*/ chpl_check_nil(this18, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1134790*/ ret9 = (this18)->dom;
    /* 1275792*/ chpl_check_nil(ret9, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1063781*/ call_tmp23 = dsiNumIndices(ret9, _ln, _fn);
    /* 1104296*/ call_tmp24 = (call_tmp23 - INT64(1));
    /* 1111191*/ call_tmp25 = (call_tmp24 * call_tmp22);
    /* 1115596*/ call_tmp26 = (sum3 + call_tmp25);
    /* 1063815*/ last2 = call_tmp26;
    /* 1063818*/ for (i2 = sum3; ((i2 <= last2)); i2 += step2) {
      /* 1063945*/ this19 = _ic__F0_this2;
      /* 1276986*/ chpl_check_nil(this19, INT64(281), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1136581*/ ret10 = (this19)->shiftedData;
      /* 1063851*/ coerce_tmp3 = ret10;
      /* 1136612*/ call_tmp27 = (coerce_tmp3 + i2);
      /* 1063879*/ coerce_tmp4 = *(call_tmp27);
      /* 1276172*/ chpl_check_nil(coerce_tmp4, INT64(282), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1116739*/ call_tmp28 = &((coerce_tmp4)->s);
      /* 1108961*/ default_argorder2 = local_memory_order_seq_cst;
      /* 1275964*/ chpl_check_nil(call_tmp28, INT64(282), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1108968*/ call_tmp29 = &((call_tmp28)->_v);
      /* 1108978*/ atomic_flag_test_and_set_explicit(call_tmp29, default_argorder2);
    }
  } else /* 667754*/ {
    /* 1136674*/ call_tmp30 = sizeof(chpl_localesSignal_object);
    /* 1136680*/ cast_tmp = chpl_here_alloc(call_tmp30, INT16(17), _ln, _fn);
    /* 1136686*/ this20 = ((localesSignal)(cast_tmp));
    /* 1136691*/ ((object)(this20))->chpl__cid = chpl__cid_localesSignal;
    /* 1276988*/ chpl_check_nil(this20, INT64(284), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1136695*/ (this20)->s = _init_class_tmp_;
    /* 1136705*/ ret11 = type_tmp;
    /* 1136710*/ _ref_tmp_ = &ret11;
    /* 1136715*/ atomic_init_flag(_ref_tmp_, false);
    /* 1136718*/ (&this21)->_v = ret11;
    /* 1136724*/ wrap_call_tmp = _construct_atomicflag(ret11, &this21, _ln, _fn);
    /* 1276990*/ chpl_check_nil(this20, INT64(284), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1136730*/ (this20)->s = wrap_call_tmp;
    /* 1136736*/ wrap_call_tmp2 = _construct_localesSignal(&wrap_call_tmp, this20, _ln, _fn);
    /* 667757*/ f = wrap_call_tmp2;
    /* 1137069*/ *(this22 + INT64(0)) = locIdx;
    /* 1137073*/ *(i3 + INT64(0)) = *(this22 + INT64(0));
    /* 1137080*/ ret12 = flags;
    /* 1137085*/ call_tmp31 = ret12;
    /* 1276992*/ chpl_check_nil(call_tmp31, INT64(286), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1137090*/ ret13 = (call_tmp31)->dom;
    /* 1276994*/ chpl_check_nil(ret13, INT64(286), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1137097*/ call_tmp32 = dsiMember2(ret13, &this22, _ln, _fn);
    /* 1137105*/ call_tmp33 = (! call_tmp32);
    /* 1137123*/ if (call_tmp33) /* 1137110*/ {
      /* 1137113*/ string_from_c_string(&call_tmp34, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
      /* 1137120*/ halt2(call_tmp34, &this22, _ln, _fn);
    }
    /* 1137126*/ sum5 = INT64(0);
    /* 1278344*/ chpl_check_nil(call_tmp31, INT64(286), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1265587*/ ret_5 = &((call_tmp31)->blk);
    /* 1265592*/ ret_x15 = *(*(ret_5) + INT64(0));
    /* 1137143*/ coerce_tmp5 = *(i3 + INT64(0));
    /* 1137157*/ call_tmp35 = (coerce_tmp5 * ret_x15);
    /* 1137162*/ sum5 += call_tmp35;
    /* 1276996*/ chpl_check_nil(call_tmp31, INT64(286), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1137167*/ ret14 = (call_tmp31)->shiftedData;
    /* 1137174*/ coerce_tmp6 = ret14;
    /* 1137179*/ call_tmp36 = (coerce_tmp6 + sum5);
    /* 1138081*/ *(call_tmp36) = wrap_call_tmp2;
    /* 1276170*/ chpl_check_nil(f, INT64(288), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1116729*/ call_tmp37 = &((f)->s);
    /* 1138098*/ default_argorder3 = local_memory_order_seq_cst;
    /* 1277032*/ chpl_check_nil(call_tmp37, INT64(288), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1138107*/ call_tmp38 = &((call_tmp37)->_v);
    /* 1138114*/ call_tmp39 = atomic_load_explicit_flag(call_tmp38, local_memory_order_relaxed);
    /* 1138122*/ call_tmp40 = (call_tmp39 != true);
    /* 1138127*/ T2 = call_tmp40;
    /* 1138130*/ while (T2) {
      /* 1138134*/ chpl_task_yield();
      /* 1277034*/ chpl_check_nil(call_tmp37, INT64(288), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
      /* 1138137*/ call_tmp41 = &((call_tmp37)->_v);
      /* 1138144*/ call_tmp42 = atomic_load_explicit_flag(call_tmp41, local_memory_order_relaxed);
      /* 1138152*/ call_tmp43 = (call_tmp42 != true);
      /* 1138157*/ T2 = call_tmp43;
    }
    /* 1138161*/ atomic_thread_fence(default_argorder3);
    /* 667788*/ delete_tmp = f;
    /* 1276174*/ chpl_check_nil(delete_tmp, INT64(290), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1116749*/ _field_destructor_tmp_ = &((delete_tmp)->s);
    /* 1276176*/ chpl_check_nil(_field_destructor_tmp_, INT64(290), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1116756*/ call_tmp44 = &((_field_destructor_tmp_)->_v);
    /* 1116762*/ atomic_destroy_flag(call_tmp44);
    /* 667797*/ call_tmp45 = ((void*)(delete_tmp));
    /* 667802*/ chpl_here_free(call_tmp45, _ln, _fn);
  }
  /* 667805*/ return;
}

/* ChapelLocale.chpl:303 */
/*   69484 */ static void chpl_init_rootLocale(int64_t _ln, c_string _fn) {
  /*  343405 */ RootLocale call_tmp = NULL;
  /* 1131512 */ locale call_tmp2 = NULL;
  /* 1131678 */ RootLocale _formal_type_tmp_ = NULL;
  /* 1131680 */ RootLocale T = NULL;
  /* 1131682 */ object call_tmp3 = NULL;
  /* 1131689 */ chpl_bool call_tmp4;
  /* 1131698 */ RootLocale call_tmp5 = NULL;
  /* 1131709 */ RootLocale call_tmp6 = NULL;
  /* 69485*/ /* 343408*/ call_tmp = RootLocale2(_ln, _fn);
  /* 1131514*/ call_tmp2 = ((locale)(call_tmp));
  /* 1118442*/ origRootLocale = call_tmp2;
  /* 1131684*/ call_tmp3 = ((object)(origRootLocale));
  /* 1131691*/ call_tmp4 = (call_tmp3 != nil);
  /* 1131719*/ if (call_tmp4) /* 1131697*/ {
    /* 1131700*/ call_tmp5 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
    /* 1131705*/ T = call_tmp5;
  } else /* 1131708*/ {
    /* 1131711*/ call_tmp6 = ((RootLocale)(nil));
    /* 1131716*/ T = call_tmp6;
  }
  /* 1275118*/ chpl_check_nil(T, INT64(305), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 69505*/ init2(T, _ln, _fn);
  /* 274125*/ return;
}

/* ChapelLocale.chpl:312 */
/*  699614 */ static void chpl_rootLocaleInitPrivate(int64_t locIdx, int64_t _ln, c_string _fn) {
  /* 1272481 */ int64_t local_numLocales;
  /* 1138166 */ chpl_bool call_tmp;
  /*  699722 */ RootLocale newRootLocale = NULL;
  /*  699728 */ DefaultRectangularArr_locale_1_int64_t_F origLocales = NULL;
  /* 1131768 */ RootLocale _formal_type_tmp_ = NULL;
  /* 1131770 */ RootLocale T = NULL;
  /* 1131772 */ object call_tmp2 = NULL;
  /* 1131779 */ chpl_bool call_tmp3;
  /* 1131788 */ RootLocale call_tmp4 = NULL;
  /* 1131799 */ RootLocale call_tmp5 = NULL;
  /*  699745 */ _ddata_locale origRL = NULL;
  /*  699747 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = NULL;
  /* 1130541 */ DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  /* 1138197 */ _ddata_locale ret2 = NULL;
  /*  699768 */ _ddata_locale newRL = NULL;
  /*  699770 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp7 = NULL;
  /* 1040779 */ _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /*  699779 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp8 = NULL;
  /* 1130558 */ DefaultRectangularArr_locale_1_int64_t_F ret3 = NULL;
  /* 1138207 */ _ddata_locale ret4 = NULL;
  /*  699800 */ _ref_locale call_tmp9 = NULL;
  /*  699807 */ _ref_locale call_tmp10 = NULL;
  /* 1131522 */ locale call_tmp11 = NULL;
  /* 1101162 */ chpl_bool call_tmp12;
  /* 1131813 */ RootLocale _formal_type_tmp_2 = NULL;
  /* 1131815 */ RootLocale T2 = NULL;
  /* 1131817 */ object call_tmp13 = NULL;
  /* 1131824 */ chpl_bool call_tmp14;
  /* 1131833 */ RootLocale call_tmp15 = NULL;
  /* 1131844 */ RootLocale call_tmp16 = NULL;
  /* 699621*/ /* 1272482*/ local_numLocales = numLocales;
  /* 1118502*/ rootLocale = origRootLocale;
  /* 1138168*/ call_tmp = (locIdx != INT64(0));
  /* 699823*/ if (call_tmp) /* 699721*/ {
    /* 699724*/ newRootLocale = RootLocale2(_ln, _fn);
    /* 1131774*/ call_tmp2 = ((object)(origRootLocale));
    /* 1131781*/ call_tmp3 = (call_tmp2 != nil);
    /* 1131809*/ if (call_tmp3) /* 1131787*/ {
      /* 1131790*/ call_tmp4 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
      /* 1131795*/ T = call_tmp4;
    } else /* 1131798*/ {
      /* 1131801*/ call_tmp5 = ((RootLocale)(nil));
      /* 1131806*/ T = call_tmp5;
    }
    /* 1275368*/ chpl_check_nil(T, INT64(324), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 699738*/ origLocales = getDefaultLocaleArray(T, _ln, _fn);
    /* 1130550*/ ret = origLocales;
    /* 699749*/ call_tmp6 = ret;
    /* 1277040*/ chpl_check_nil(call_tmp6, INT64(325), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1138199*/ ret2 = (call_tmp6)->shiftedData;
    /* 699763*/ origRL = ret2;
    /* 1040782*/ ret_to_arg_ref_tmp_ = &call_tmp7;
    /* 1275370*/ chpl_check_nil(newRootLocale, INT64(326), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 699778*/ getDefaultLocaleArray2(newRootLocale, ret_to_arg_ref_tmp_, _ln, _fn);
    /* 1130567*/ ret3 = call_tmp7;
    /* 699781*/ call_tmp8 = ret3;
    /* 1277042*/ chpl_check_nil(call_tmp8, INT64(326), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1138209*/ ret4 = (call_tmp8)->shiftedData;
    /* 699795*/ newRL = ret4;
    /* 699802*/ call_tmp9 = (newRL + INT64(0));
    /* 699809*/ call_tmp10 = (origRL + INT64(0));
    /* 699814*/ chpl_gen_comm_get(((void*)(call_tmp9)), INT64(0), call_tmp10, sizeof(locale), -1, local_numLocales, _ln, _fn);
    /* 1131524*/ call_tmp11 = ((locale)(newRootLocale));
    /* 1118508*/ rootLocale = call_tmp11;
    /* 1036901*/ chpl__autoDestroy4(call_tmp7, _ln, _fn);
  }
  /* 1101164*/ call_tmp12 = (locIdx != INT64(0));
  /* 699856*/ if (call_tmp12) /* 699840*/ {
    /* 1131819*/ call_tmp13 = ((object)(rootLocale));
    /* 1131826*/ call_tmp14 = (call_tmp13 != nil);
    /* 1131854*/ if (call_tmp14) /* 1131832*/ {
      /* 1131835*/ call_tmp15 = ((((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(rootLocale))):(((RootLocale)(NULL)));
      /* 1131840*/ T2 = call_tmp15;
    } else /* 1131843*/ {
      /* 1131846*/ call_tmp16 = ((RootLocale)(nil));
      /* 1131851*/ T2 = call_tmp16;
    }
    /* 1275372*/ chpl_check_nil(T2, INT64(340), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 699849*/ Locales = getDefaultLocaleArray(T2, _ln, _fn);
  }
  /* 699857*/ return;
}

/* ChapelLocale.chpl:365 */
/*   69723 */ static locale chpl_localeID_to_locale(chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
  /* 1272248 */ locale local_dummyLocale = NULL;
  /*  274160 */ locale ret = NULL;
  /* 1131608 */ object call_tmp = NULL;
  /* 1095873 */ chpl_bool call_tmp2;
  /* 1135681 */ AbstractRootLocale _formal_type_tmp_ = NULL;
  /* 1135683 */ AbstractRootLocale T = NULL;
  /* 1135685 */ object call_tmp3 = NULL;
  /* 1135692 */ chpl_bool call_tmp4;
  /* 1135701 */ AbstractRootLocale call_tmp5 = NULL;
  /* 1135712 */ AbstractRootLocale call_tmp6 = NULL;
  /*  343558 */ locale call_tmp7 = NULL;
  /* 1023290 */ int32_t _virtual_method_tmp_;
  /* 69724*/ /* 1272249*/ local_dummyLocale = dummyLocale;
  /* 1131610*/ call_tmp = ((object)(rootLocale));
  /* 1095875*/ call_tmp2 = (call_tmp != nil);
  /* 69746*/ if (call_tmp2) /* 69747*/ {
    /* 1135687*/ call_tmp3 = ((object)(rootLocale));
    /* 1135694*/ call_tmp4 = (call_tmp3 != nil);
    /* 1135722*/ if (call_tmp4) /* 1135700*/ {
      /* 1135703*/ call_tmp5 = (((((object)(rootLocale))->chpl__cid == chpl__cid_AbstractRootLocale) || (((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale)))?(((AbstractRootLocale)(rootLocale))):(((AbstractRootLocale)(NULL)));
      /* 1135708*/ T = call_tmp5;
    } else /* 1135711*/ {
      /* 1135714*/ call_tmp6 = ((AbstractRootLocale)(nil));
      /* 1135719*/ T = call_tmp6;
    }
    /* 1275622*/ chpl_check_nil(T, INT64(367), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
    /* 1023294*/ _virtual_method_tmp_ = ((object)(T))->chpl__cid;
    /* 343561*/ call_tmp7 = ((locale(*)(AbstractRootLocale, chpl_localeID_t* const, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(4))])(T, id2, _ln, _fn);
    /* 1118478*/ ret = call_tmp7;
    /* 274172*/ goto _end_chpl_localeID_to_locale;
  } else /* 69748*/ {
    /* 1118484*/ ret = local_dummyLocale;
    /* 274177*/ goto _end_chpl_localeID_to_locale;
  }
  _end_chpl_localeID_to_locale:;
  /* 274167*/ return ret;
}

/* ChapelLocale.chpl:417 */
/*   70035 */ static int64_t runningTasks(locale this7, int64_t _ln, c_string _fn) {
  /* 1272254 */ memory_order local_memory_order_relaxed;
  /* 1106165 */ _ref_atomic_int64 call_tmp = NULL;
  /* 1106174 */ _ref_atomic_int_least64_t call_tmp2 = NULL;
  /* 1106181 */ int64_t call_tmp3;
  /* 1106192 */ int64_t T;
  /* 1106194 */ chpl_bool call_tmp4;
  /* 70036*/ /* 1272255*/ local_memory_order_relaxed = memory_order_relaxed;
  /* 1275960*/ chpl_check_nil(this7, INT64(418), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1106167*/ call_tmp = &((this7)->runningTaskCounter);
  /* 1275962*/ chpl_check_nil(call_tmp, INT64(418), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1106176*/ call_tmp2 = &((call_tmp)->_v);
  /* 1106183*/ call_tmp3 = atomic_load_explicit_int_least64_t(call_tmp2, local_memory_order_relaxed);
  /* 1106196*/ call_tmp4 = (call_tmp3 <= INT64(0));
  /* 1106210*/ if (call_tmp4) /* 1106202*/ {
    /* 1106203*/ T = INT64(1);
  } else /* 1106206*/ {
    /* 1106207*/ T = call_tmp3;
  }
  /* 274331*/ return T;
}

/* ChapelLocale.chpl:439 */
/*   70101 */ void chpl_taskRunningCntInc(int64_t _ln, c_string _fn) {
  /* 1272260 */ memory_order local_memory_order_relaxed;
  /*  343645 */ locale call_tmp = NULL;
  /* 1106409 */ int32_t call_tmp2;
  /* 1106415 */ chpl_localeID_t call_tmp3;
  /* 1106417 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106428 */ chpl_localeID_t call_tmp4;
  /* 1106435 */ locale call_tmp5 = NULL;
  /* 1106025 */ _ref_atomic_int64 call_tmp6 = NULL;
  /* 1106034 */ _ref_atomic_int_least64_t call_tmp7 = NULL;
  /* 70102*/ /* 1272261*/ local_memory_order_relaxed = memory_order_relaxed;
  /* 1106411*/ call_tmp2 = chpl_task_getRequestedSubloc();
  /* 1106419*/ ret_to_arg_ref_tmp_ = &call_tmp3;
  /* 1106424*/ chpl_buildLocaleID(chpl_nodeID, call_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106430*/ call_tmp4 = chpl__initCopy_chpl_rt_localeID_t(call_tmp3);
  /* 1106437*/ call_tmp5 = chpl_localeID_to_locale(&call_tmp4, _ln, _fn);
  /* 343648*/ call_tmp = call_tmp5;
  /* 1275948*/ chpl_check_nil(call_tmp, INT64(440), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1106027*/ call_tmp6 = &((call_tmp)->runningTaskCounter);
  /* 1275950*/ chpl_check_nil(call_tmp6, INT64(440), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1106036*/ call_tmp7 = &((call_tmp6)->_v);
  /* 1106042*/ atomic_fetch_add_explicit_int_least64_t(call_tmp7, INT64(1), local_memory_order_relaxed);
  /* 274358*/ return;
}

/* ChapelLocale.chpl:445 */
/*   70116 */ void chpl_taskRunningCntDec(int64_t _ln, c_string _fn) {
  /* 1272266 */ memory_order local_memory_order_relaxed;
  /*  343652 */ locale call_tmp = NULL;
  /* 1106445 */ int32_t call_tmp2;
  /* 1106451 */ chpl_localeID_t call_tmp3;
  /* 1106453 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106464 */ chpl_localeID_t call_tmp4;
  /* 1106471 */ locale call_tmp5 = NULL;
  /* 1106078 */ _ref_atomic_int64 call_tmp6 = NULL;
  /* 1106087 */ _ref_atomic_int_least64_t call_tmp7 = NULL;
  /* 70117*/ /* 1272267*/ local_memory_order_relaxed = memory_order_relaxed;
  /* 1106447*/ call_tmp2 = chpl_task_getRequestedSubloc();
  /* 1106455*/ ret_to_arg_ref_tmp_ = &call_tmp3;
  /* 1106460*/ chpl_buildLocaleID(chpl_nodeID, call_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106466*/ call_tmp4 = chpl__initCopy_chpl_rt_localeID_t(call_tmp3);
  /* 1106473*/ call_tmp5 = chpl_localeID_to_locale(&call_tmp4, _ln, _fn);
  /* 343655*/ call_tmp = call_tmp5;
  /* 1275956*/ chpl_check_nil(call_tmp, INT64(446), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1106080*/ call_tmp6 = &((call_tmp)->runningTaskCounter);
  /* 1275958*/ chpl_check_nil(call_tmp6, INT64(446), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelLocale.chpl");
  /* 1106089*/ call_tmp7 = &((call_tmp6)->_v);
  /* 1106095*/ atomic_fetch_sub_explicit_int_least64_t(call_tmp7, INT64(1), local_memory_order_relaxed);
  /* 274360*/ return;
}

