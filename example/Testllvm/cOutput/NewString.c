/* NewString.chpl:99 */
/*  235356 */ static void chpl__init_NewString(int64_t _ln, c_string _fn) {
  /* 1274615 */ c_string modFormatStr;
  /* 1274616 */ c_string modStr;
  /* 1274632 */ _ref_int32_t refIndentLevel = NULL;
  /* 235357*/ /* 1274651*/ if (chpl__init_NewString_p) /* 1274652*/ {
    /* 1274648*/ goto _exit_chpl__init_NewString;
  }
  /* 1274624*/ modFormatStr = "%*s\n";
  /* 1274627*/ modStr = "NewString";
  /* 1274630*/ printModuleInit(modFormatStr, modStr, INT64(9), _ln, _fn);
  /* 1274636*/ refIndentLevel = &moduleInitLevel;
  /* 1274639*/ *(refIndentLevel) += INT64(1);
  /* 1274613*/ chpl__init_NewString_p = true;
  /* 1273289*/ {
    /* 1273290*/ chpl__init_BaseStringType(_ln, _fn);
  }
  /* 1274642*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_NewString:;
  /* 281266*/ return;
}

/* NewString.chpl:102 */
/*  197962 */ static string_refcnt _construct_string_refcnt(atomic_refcnt* const val, string_refcnt meme, int64_t _ln, c_string _fn) {
  /*  197964 */ string_refcnt this7 = NULL;
  /*  197975 */ object T = NULL;
  /* 197963*/ /* 197970*/ this7 = meme;
  /* 1275244*/ chpl_check_nil(this7, INT64(102), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 197982*/ T = &((this7)->super);
  /* 197973*/ _construct_object(T);
  /* 1275246*/ chpl_check_nil(this7, INT64(103), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 197994*/ (this7)->val = *(val);
  /* 197999*/ return this7;
}

/* NewString.chpl:102 */
/*  440542 */ static void chpl__auto_destroy_string_refcnt(string_refcnt this7, int64_t _ln, c_string _fn) {
  /* 1033513 */ _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  /* 1112156 */ _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  /* 1112163 */ _ref_atomic_int_least64_t call_tmp = NULL;
  /* 440543*/ /* 1275666*/ chpl_check_nil(this7, INT64(103), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1033518*/ _field_destructor_tmp_ = &((this7)->val);
  /* 1276058*/ chpl_check_nil(_field_destructor_tmp_, INT64(103), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1112158*/ _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  /* 1276060*/ chpl_check_nil(_field_destructor_tmp_2, INT64(103), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1112165*/ call_tmp = &((_field_destructor_tmp_2)->_v);
  /* 1112171*/ atomic_destroy_int_least64_t(call_tmp);
  /* 440548*/ return;
}

/* NewString.chpl:112 */
/*  198033 */ static string_rec _construct_string_rec(c_string base, int64_t len, locale home, string_refcnt refCnt, string_refcnt aliasRefCnt, string_rec* const meme, int64_t _ln, c_string _fn) {
  /*  198035 */ string_rec this7;
  /* 198034*/ /* 198045*/ this7 = *(meme);
  /* 198058*/ (&this7)->base = base;
  /* 198071*/ (&this7)->len = len;
  /* 198084*/ (&this7)->home = home;
  /* 198097*/ (&this7)->refCnt = refCnt;
  /* 198110*/ (&this7)->aliasRefCnt = aliasRefCnt;
  /* 198115*/ return this7;
}

/* NewString.chpl:119 */
/*  129055 */ static string_rec string_rec2(int64_t _ln, c_string _fn) {
  /*  254644 */ string_rec this7;
  /* 1150162 */ string_rec this8;
  /* 1150192 */ locale call_tmp = NULL;
  /* 1150203 */ string_refcnt call_tmp2 = NULL;
  /* 1150214 */ string_refcnt call_tmp3 = NULL;
  /* 1150225 */ string_rec wrap_call_tmp;
  /* 1118125 */ _ref_locale call_tmp4 = NULL;
  /* 1106553 */ int32_t call_tmp5;
  /* 1106559 */ chpl_localeID_t call_tmp6;
  /* 1106561 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106572 */ chpl_localeID_t call_tmp7;
  /* 1106579 */ locale call_tmp8 = NULL;
  /* 1118159 */ _ref_string_refcnt call_tmp9 = NULL;
  /* 1150240 */ string_refcnt this9 = NULL;
  /* 1150242 */ int64_t call_tmp10;
  /* 1150248 */ chpl_opaque cast_tmp;
  /* 1150263 */ atomic_refcnt _init_class_tmp_;
  /* 1150265 */ atomic_int64 _init_class_tmp_2;
  /* 1150275 */ atomic_refcnt this10;
  /* 1150277 */ atomic_int64 _init_class_tmp_3;
  /* 1150283 */ atomic_int64 this11;
  /* 1150285 */ atomic_int_least64_t ret;
  /* 1150287 */ atomic_int_least64_t type_tmp;
  /* 1150292 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1150306 */ atomic_int64 wrap_call_tmp2;
  /* 1150318 */ atomic_refcnt wrap_call_tmp3;
  /* 1150330 */ string_refcnt wrap_call_tmp4 = NULL;
  /* 1118173 */ _ref_string_refcnt call_tmp11 = NULL;
  /* 1111464 */ string_refcnt ret2 = NULL;
  /* 129056*/ /* 1150164*/ (&this8)->base = "";
  /* 1150168*/ (&this8)->len = INT64(0);
  /* 1150172*/ (&this8)->home = nil;
  /* 1150176*/ (&this8)->refCnt = nil;
  /* 1150180*/ (&this8)->aliasRefCnt = nil;
  /* 1150184*/ (&this8)->base = "";
  /* 1150188*/ (&this8)->len = INT64(0);
  /* 1150194*/ call_tmp = ((locale)(nil));
  /* 1150199*/ (&this8)->home = call_tmp;
  /* 1150205*/ call_tmp2 = ((string_refcnt)(nil));
  /* 1150210*/ (&this8)->refCnt = call_tmp2;
  /* 1150216*/ call_tmp3 = ((string_refcnt)(nil));
  /* 1150221*/ (&this8)->aliasRefCnt = call_tmp3;
  /* 1150227*/ wrap_call_tmp = _construct_string_rec("", INT64(0), call_tmp, call_tmp2, call_tmp3, &this8, _ln, _fn);
  /* 254645*/ this7 = wrap_call_tmp;
  /* 1118127*/ call_tmp4 = &((&this7)->home);
  /* 1106555*/ call_tmp5 = chpl_task_getRequestedSubloc();
  /* 1106563*/ ret_to_arg_ref_tmp_ = &call_tmp6;
  /* 1106568*/ chpl_buildLocaleID(chpl_nodeID, call_tmp5, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106574*/ call_tmp7 = chpl__initCopy_chpl_rt_localeID_t(call_tmp6);
  /* 1106581*/ call_tmp8 = chpl_localeID_to_locale(&call_tmp7, _ln, _fn);
  /* 1118448*/ *(call_tmp4) = call_tmp8;
  /* 1118161*/ call_tmp9 = &((&this7)->refCnt);
  /* 1150244*/ call_tmp10 = sizeof(chpl_string_refcnt_object);
  /* 1150250*/ cast_tmp = chpl_here_alloc(call_tmp10, INT16(28), _ln, _fn);
  /* 1150256*/ this9 = ((string_refcnt)(cast_tmp));
  /* 1150261*/ ((object)(this9))->chpl__cid = chpl__cid_string_refcnt;
  /* 1150267*/ (&_init_class_tmp_)->_cnt = _init_class_tmp_2;
  /* 1277632*/ chpl_check_nil(this9, INT64(122), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1150271*/ (this9)->val = _init_class_tmp_;
  /* 1150279*/ (&this10)->_cnt = _init_class_tmp_3;
  /* 1150289*/ ret = type_tmp;
  /* 1150294*/ _ref_tmp_ = &ret;
  /* 1150299*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  /* 1150302*/ (&this11)->_v = ret;
  /* 1150308*/ wrap_call_tmp2 = _construct_atomic_int64(ret, &this11, _ln, _fn);
  /* 1150314*/ (&this10)->_cnt = wrap_call_tmp2;
  /* 1150320*/ wrap_call_tmp3 = _construct_atomic_refcnt(&wrap_call_tmp2, &this10, _ln, _fn);
  /* 1277634*/ chpl_check_nil(this9, INT64(122), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1150326*/ (this9)->val = wrap_call_tmp3;
  /* 1150332*/ wrap_call_tmp4 = _construct_string_refcnt(&wrap_call_tmp3, this9, _ln, _fn);
  /* 1150341*/ *(call_tmp9) = wrap_call_tmp4;
  /* 1118175*/ call_tmp11 = &((&this7)->aliasRefCnt);
  /* 1111466*/ ret2 = (&this7)->refCnt;
  /* 1150347*/ *(call_tmp11) = ret2;
  /* 254649*/ return this7;
}

/* NewString.chpl:127 */
/*  129122 */ static void chpl___TILDE_string_rec(_ref_string_rec this7, int64_t _ln, c_string _fn) {
  /* 1272387 */ memory_order local_memory_order_seq_cst;
  /* 1112503 */ chpl_bool ret;
  /* 1112505 */ string_refcnt ret2 = NULL;
  /* 1112512 */ string_refcnt ret3 = NULL;
  /* 1112519 */ object call_tmp = NULL;
  /* 1112526 */ object call_tmp2 = NULL;
  /* 1112533 */ chpl_bool call_tmp3;
  /* 1112548 */ int64_t ret4;
  /* 1112555 */ chpl_bool call_tmp4;
  /* 1111474 */ string_refcnt ret5 = NULL;
  /*  484185 */ string_refcnt coerce_tmp = NULL;
  /* 1112176 */ _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  /* 1112183 */ _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  /* 1112190 */ _ref_atomic_int_least64_t call_tmp5 = NULL;
  /*  382707 */ chpl_opaque call_tmp6;
  /* 1111922 */ int64_t ret6;
  /* 1111924 */ string_refcnt ret7 = NULL;
  /* 1111931 */ string_refcnt ret8 = NULL;
  /* 1111938 */ object call_tmp7 = NULL;
  /* 1111945 */ object call_tmp8 = NULL;
  /* 1111952 */ chpl_bool call_tmp9;
  /* 1111959 */ chpl_bool call_tmp10;
  /* 1111967 */ string_refcnt ret9 = NULL;
  /* 1111974 */ string_refcnt coerce_tmp2 = NULL;
  /* 1111979 */ _ref_atomic_refcnt call_tmp11 = NULL;
  /* 1111986 */ _ref_atomic_int64 call_tmp12 = NULL;
  /* 1111993 */ memory_order default_argorder;
  /* 1112000 */ _ref_atomic_int_least64_t call_tmp13 = NULL;
  /* 1112007 */ int64_t call_tmp14;
  /* 1112016 */ int64_t call_tmp15;
  /* 1112029 */ string_refcnt ret10 = NULL;
  /* 1112036 */ string_refcnt coerce_tmp3 = NULL;
  /* 1112041 */ _ref_atomic_refcnt call_tmp16 = NULL;
  /* 1112048 */ _ref_atomic_int64 call_tmp17 = NULL;
  /* 1112055 */ memory_order default_argorder2;
  /* 1112062 */ _ref_atomic_int_least64_t call_tmp18 = NULL;
  /* 1112069 */ int64_t call_tmp19;
  /* 1112078 */ int64_t call_tmp20;
  /* 1109282 */ chpl_bool call_tmp21;
  /* 1100481 */ chpl_bool call_tmp22;
  /* 1119260 */ c_string ret11;
  /* 1119300 */ c_string call_tmp23;
  /* 1119307 */ int64_t call_tmp24;
  /* 1119314 */ chpl_bool call_tmp25;
  /* 1112288 */ string_refcnt ret12 = NULL;
  /* 1112295 */ string_refcnt coerce_tmp4 = NULL;
  /* 1112300 */ _ref_atomic_refcnt _field_destructor_tmp_3 = NULL;
  /* 1112307 */ _ref_atomic_int64 _field_destructor_tmp_4 = NULL;
  /* 1112314 */ _ref_atomic_int_least64_t call_tmp26 = NULL;
  /* 1112324 */ chpl_opaque call_tmp27;
  /* 1112333 */ string_refcnt ret13 = NULL;
  /* 1112340 */ string_refcnt ret14 = NULL;
  /* 1112347 */ object call_tmp28 = NULL;
  /* 1112354 */ object call_tmp29 = NULL;
  /* 1112361 */ chpl_bool call_tmp30;
  /* 1112370 */ string_refcnt ret15 = NULL;
  /* 1112377 */ string_refcnt coerce_tmp5 = NULL;
  /* 1112382 */ _ref_atomic_refcnt _field_destructor_tmp_5 = NULL;
  /* 1112389 */ _ref_atomic_int64 _field_destructor_tmp_6 = NULL;
  /* 1112396 */ _ref_atomic_int_least64_t call_tmp31 = NULL;
  /* 1112406 */ chpl_opaque call_tmp32;
  /* 1111703 */ string_refcnt ret16 = NULL;
  /* 1111710 */ string_refcnt ret17 = NULL;
  /* 1111717 */ object call_tmp33 = NULL;
  /* 1111724 */ object call_tmp34 = NULL;
  /* 1111731 */ chpl_bool call_tmp35;
  /* 1111484 */ string_refcnt ret18 = NULL;
  /*  493613 */ string_refcnt coerce_tmp6 = NULL;
  /* 1112203 */ _ref_atomic_refcnt _field_destructor_tmp_7 = NULL;
  /* 1112210 */ _ref_atomic_int64 _field_destructor_tmp_8 = NULL;
  /* 1112217 */ _ref_atomic_int_least64_t call_tmp36 = NULL;
  /*  382798 */ chpl_opaque call_tmp37;
  /* 129123*/ /* 1272388*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 1276100*/ chpl_check_nil(this7, INT64(129), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1112507*/ ret2 = (this7)->refCnt;
  /* 1276102*/ chpl_check_nil(this7, INT64(129), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1112514*/ ret3 = (this7)->aliasRefCnt;
  /* 1112521*/ call_tmp = ((object)(ret2));
  /* 1112528*/ call_tmp2 = ((object)(ret3));
  /* 1112535*/ call_tmp3 = (call_tmp != call_tmp2);
  /* 1112567*/ if (call_tmp3) /* 1112541*/ {
    /* 1112542*/ ret = false;
    /* 1112546*/ goto _end_isEmptyString;
  } else /* 1112547*/ {
    /* 1276104*/ chpl_check_nil(this7, INT64(129), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112550*/ ret4 = (this7)->len;
    /* 1112557*/ call_tmp4 = (ret4 == INT64(0));
    /* 1112562*/ ret = call_tmp4;
    /* 1112566*/ goto _end_isEmptyString;
  }
  _end_isEmptyString:;
  /* 129255*/ if (ret) /* 129152*/ {
    /* 1276010*/ chpl_check_nil(this7, INT64(130), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1111476*/ ret5 = (this7)->refCnt;
    /* 484188*/ coerce_tmp = ret5;
    /* 1276062*/ chpl_check_nil(coerce_tmp, INT64(130), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112178*/ _field_destructor_tmp_ = &((coerce_tmp)->val);
    /* 1276064*/ chpl_check_nil(_field_destructor_tmp_, INT64(130), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112185*/ _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    /* 1276066*/ chpl_check_nil(_field_destructor_tmp_2, INT64(130), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112192*/ call_tmp5 = &((_field_destructor_tmp_2)->_v);
    /* 1112198*/ atomic_destroy_int_least64_t(call_tmp5);
    /* 382710*/ call_tmp6 = ((void*)(ret5));
    /* 235699*/ chpl_here_free(call_tmp6, _ln, _fn);
  } else /* 129159*/ {
    /* 1276026*/ chpl_check_nil(this7, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1111926*/ ret7 = (this7)->refCnt;
    /* 1276028*/ chpl_check_nil(this7, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1111933*/ ret8 = (this7)->aliasRefCnt;
    /* 1111940*/ call_tmp7 = ((object)(ret7));
    /* 1111947*/ call_tmp8 = ((object)(ret8));
    /* 1111954*/ call_tmp9 = (call_tmp7 != call_tmp8);
    /* 1111961*/ call_tmp10 = (! call_tmp9);
    /* 1112090*/ if (call_tmp10) /* 1111966*/ {
      /* 1276030*/ chpl_check_nil(this7, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111969*/ ret9 = (this7)->refCnt;
      /* 1111976*/ coerce_tmp2 = ret9;
      /* 1276032*/ chpl_check_nil(coerce_tmp2, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111981*/ call_tmp11 = &((coerce_tmp2)->val);
      /* 1276034*/ chpl_check_nil(call_tmp11, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111988*/ call_tmp12 = &((call_tmp11)->_cnt);
      /* 1111995*/ default_argorder = local_memory_order_seq_cst;
      /* 1276036*/ chpl_check_nil(call_tmp12, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112002*/ call_tmp13 = &((call_tmp12)->_v);
      /* 1112009*/ call_tmp14 = atomic_fetch_sub_explicit_int_least64_t(call_tmp13, INT64(1), default_argorder);
      /* 1112018*/ call_tmp15 = (call_tmp14 - INT64(1));
      /* 1112023*/ ret6 = call_tmp15;
      /* 1112027*/ goto _end_decRefCnt;
    } else /* 1112028*/ {
      /* 1276038*/ chpl_check_nil(this7, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112031*/ ret10 = (this7)->aliasRefCnt;
      /* 1112038*/ coerce_tmp3 = ret10;
      /* 1276040*/ chpl_check_nil(coerce_tmp3, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112043*/ call_tmp16 = &((coerce_tmp3)->val);
      /* 1276042*/ chpl_check_nil(call_tmp16, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112050*/ call_tmp17 = &((call_tmp16)->_cnt);
      /* 1112057*/ default_argorder2 = local_memory_order_seq_cst;
      /* 1276044*/ chpl_check_nil(call_tmp17, INT64(132), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112064*/ call_tmp18 = &((call_tmp17)->_v);
      /* 1112071*/ call_tmp19 = atomic_fetch_sub_explicit_int_least64_t(call_tmp18, INT64(1), default_argorder2);
      /* 1112080*/ call_tmp20 = (call_tmp19 - INT64(1));
      /* 1112085*/ ret6 = call_tmp20;
      /* 1112089*/ goto _end_decRefCnt;
    }
    _end_decRefCnt:;
    /* 1109284*/ call_tmp21 = (ret6 < INT64(0));
    /* 129173*/ if (call_tmp21) /* 129174*/ {
      /* 129169*/ halt("string reference count is negative!", _ln, _fn);
    }
    /* 1100483*/ call_tmp22 = (ret6 == INT64(0));
    /* 129251*/ if (call_tmp22) /* 129197*/ {
      /* 1276342*/ chpl_check_nil(this7, INT64(137), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1119262*/ ret11 = (this7)->base;
      /* 1119302*/ call_tmp23 = ((c_string)(NULL));
      /* 1119309*/ call_tmp24 = string_compare(ret11, call_tmp23);
      /* 1119316*/ call_tmp25 = (call_tmp24 != INT64(0));
      /* 1119326*/ if (call_tmp25) /* 1119322*/ {
        /* 1119324*/ chpl_rt_free_c_string(ret11, _ln, _fn);
      }
      /* 1276074*/ chpl_check_nil(this7, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112290*/ ret12 = (this7)->refCnt;
      /* 1112297*/ coerce_tmp4 = ret12;
      /* 1276076*/ chpl_check_nil(coerce_tmp4, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112302*/ _field_destructor_tmp_3 = &((coerce_tmp4)->val);
      /* 1276078*/ chpl_check_nil(_field_destructor_tmp_3, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112309*/ _field_destructor_tmp_4 = &((_field_destructor_tmp_3)->_cnt);
      /* 1276080*/ chpl_check_nil(_field_destructor_tmp_4, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112316*/ call_tmp26 = &((_field_destructor_tmp_4)->_v);
      /* 1112322*/ atomic_destroy_int_least64_t(call_tmp26);
      /* 1112326*/ call_tmp27 = ((void*)(ret12));
      /* 1112331*/ chpl_here_free(call_tmp27, _ln, _fn);
      /* 1276082*/ chpl_check_nil(this7, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112335*/ ret13 = (this7)->refCnt;
      /* 1276084*/ chpl_check_nil(this7, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112342*/ ret14 = (this7)->aliasRefCnt;
      /* 1112349*/ call_tmp28 = ((object)(ret13));
      /* 1112356*/ call_tmp29 = ((object)(ret14));
      /* 1112363*/ call_tmp30 = (call_tmp28 != call_tmp29);
      /* 1112415*/ if (call_tmp30) /* 1112369*/ {
        /* 1276086*/ chpl_check_nil(this7, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1112372*/ ret15 = (this7)->aliasRefCnt;
        /* 1112379*/ coerce_tmp5 = ret15;
        /* 1276088*/ chpl_check_nil(coerce_tmp5, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1112384*/ _field_destructor_tmp_5 = &((coerce_tmp5)->val);
        /* 1276090*/ chpl_check_nil(_field_destructor_tmp_5, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1112391*/ _field_destructor_tmp_6 = &((_field_destructor_tmp_5)->_cnt);
        /* 1276092*/ chpl_check_nil(_field_destructor_tmp_6, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1112398*/ call_tmp31 = &((_field_destructor_tmp_6)->_v);
        /* 1112404*/ atomic_destroy_int_least64_t(call_tmp31);
        /* 1112408*/ call_tmp32 = ((void*)(ret15));
        /* 1112413*/ chpl_here_free(call_tmp32, _ln, _fn);
      }
    } else /* 129236*/ {
      /* 1276014*/ chpl_check_nil(this7, INT64(142), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111705*/ ret16 = (this7)->refCnt;
      /* 1276016*/ chpl_check_nil(this7, INT64(142), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111712*/ ret17 = (this7)->aliasRefCnt;
      /* 1111719*/ call_tmp33 = ((object)(ret16));
      /* 1111726*/ call_tmp34 = ((object)(ret17));
      /* 1111733*/ call_tmp35 = (call_tmp33 != call_tmp34);
      /* 129246*/ if (call_tmp35) /* 129247*/ {
        /* 1276012*/ chpl_check_nil(this7, INT64(142), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1111486*/ ret18 = (this7)->refCnt;
        /* 493616*/ coerce_tmp6 = ret18;
        /* 1276068*/ chpl_check_nil(coerce_tmp6, INT64(142), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1112205*/ _field_destructor_tmp_7 = &((coerce_tmp6)->val);
        /* 1276070*/ chpl_check_nil(_field_destructor_tmp_7, INT64(142), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1112212*/ _field_destructor_tmp_8 = &((_field_destructor_tmp_7)->_cnt);
        /* 1276072*/ chpl_check_nil(_field_destructor_tmp_8, INT64(142), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1112219*/ call_tmp36 = &((_field_destructor_tmp_8)->_v);
        /* 1112225*/ atomic_destroy_int_least64_t(call_tmp36);
        /* 382801*/ call_tmp37 = ((void*)(ret18));
        /* 235711*/ chpl_here_free(call_tmp37, _ln, _fn);
      }
    }
  }
  /* 280772*/ return;
}

/* NewString.chpl:149 */
/*  129278 */ static void reinitString(_ref_string_rec this7, c_string s, int64_t slen, int64_t _ln, c_string _fn) {
  /* 1272394 */ memory_order local_memory_order_seq_cst;
  /*  382808 */ int32_t call_tmp;
  /* 1106589 */ int32_t call_tmp2;
  /* 1106595 */ chpl_localeID_t call_tmp3;
  /* 1106597 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106608 */ chpl_localeID_t call_tmp4;
  /* 1106615 */ locale call_tmp5 = NULL;
  /*  382820 */ int64_t call_tmp6;
  /* 1112683 */ int64_t call_tmp7;
  /* 1100491 */ chpl_bool call_tmp8;
  /* 1112826 */ locale ret = NULL;
  /*  382839 */ int64_t call_tmp9;
  /* 1106625 */ int32_t call_tmp10;
  /* 1106631 */ chpl_localeID_t call_tmp11;
  /* 1106633 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_2 = NULL;
  /* 1106644 */ chpl_localeID_t call_tmp12;
  /* 1106651 */ locale call_tmp13 = NULL;
  /*  382851 */ int64_t call_tmp14;
  /* 1100501 */ chpl_bool call_tmp15;
  /* 1112573 */ chpl_bool ret2;
  /* 1112575 */ string_refcnt ret3 = NULL;
  /* 1112582 */ string_refcnt ret4 = NULL;
  /* 1112589 */ object call_tmp16 = NULL;
  /* 1112596 */ object call_tmp17 = NULL;
  /* 1112603 */ chpl_bool call_tmp18;
  /* 1112618 */ int64_t ret5;
  /* 1112625 */ chpl_bool call_tmp19;
  /* 1111397 */ chpl_bool call_tmp20;
  /* 1111404 */ chpl_bool T;
  /* 1111412 */ int64_t call_tmp21;
  /* 1111419 */ chpl_bool call_tmp22;
  /* 1111778 */ string_refcnt ret6 = NULL;
  /* 1111785 */ string_refcnt coerce_tmp = NULL;
  /* 1111790 */ _ref_atomic_refcnt call_tmp23 = NULL;
  /* 1111797 */ _ref_atomic_int64 call_tmp24 = NULL;
  /* 1111804 */ memory_order default_argorder;
  /* 1111811 */ _ref_atomic_int_least64_t call_tmp25 = NULL;
  /* 1111433 */ int64_t T2;
  /* 1111435 */ chpl_bool call_tmp26;
  /* 1111444 */ int64_t call_tmp27;
  /* 1101102 */ chpl_bool call_tmp28;
  /* 1112462 */ int64_t ret7;
  /* 1109292 */ chpl_bool call_tmp29;
  /* 1118077 */ _ref_c_string call_tmp30 = NULL;
  /* 1119270 */ c_string ret8;
  /*  382998 */ c_string call_tmp31;
  /* 1112472 */ int64_t ret9;
  /* 1101112 */ chpl_bool call_tmp32;
  /* 1119280 */ c_string ret10;
  /* 1119330 */ c_string call_tmp33;
  /* 1119337 */ int64_t call_tmp34;
  /* 1119344 */ chpl_bool call_tmp35;
  /* 1118087 */ _ref_c_string call_tmp36 = NULL;
  /*  383051 */ c_string call_tmp37;
  /* 1112482 */ int64_t ret11;
  /* 1101122 */ chpl_bool call_tmp38;
  /* 1119290 */ c_string ret12;
  /* 1119360 */ c_string call_tmp39;
  /* 1119367 */ int64_t call_tmp40;
  /* 1119374 */ chpl_bool call_tmp41;
  /* 1118097 */ _ref_c_string call_tmp42 = NULL;
  /* 1118111 */ _ref_int64_t call_tmp43 = NULL;
  /* 129279*/ /* 1272395*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 382811*/ call_tmp = chpl_nodeID;
  /* 1106591*/ call_tmp2 = chpl_task_getRequestedSubloc();
  /* 1106599*/ ret_to_arg_ref_tmp_ = &call_tmp3;
  /* 1106604*/ chpl_buildLocaleID(chpl_nodeID, call_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106610*/ call_tmp4 = chpl__initCopy_chpl_rt_localeID_t(call_tmp3);
  /* 1106617*/ call_tmp5 = chpl_localeID_to_locale(&call_tmp4, _ln, _fn);
  /* 1275148*/ chpl_check_nil(call_tmp5, INT64(150), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 382823*/ call_tmp6 = id(call_tmp5, _ln, _fn);
  /* 1112685*/ call_tmp7 = ((int64_t)(call_tmp));
  /* 1100493*/ call_tmp8 = (call_tmp7 == call_tmp6);
  /* 129301*/ assert2(call_tmp8, _ln, _fn);
  /* 1276112*/ chpl_check_nil(this7, INT64(151), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1112828*/ ret = (this7)->home;
  /* 1275150*/ chpl_check_nil(ret, INT64(151), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 382842*/ call_tmp9 = id(ret, _ln, _fn);
  /* 1106627*/ call_tmp10 = chpl_task_getRequestedSubloc();
  /* 1106635*/ ret_to_arg_ref_tmp_2 = &call_tmp11;
  /* 1106640*/ chpl_buildLocaleID(chpl_nodeID, call_tmp10, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1106646*/ call_tmp12 = chpl__initCopy_chpl_rt_localeID_t(call_tmp11);
  /* 1106653*/ call_tmp13 = chpl_localeID_to_locale(&call_tmp12, _ln, _fn);
  /* 1275152*/ chpl_check_nil(call_tmp13, INT64(151), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 382854*/ call_tmp14 = id(call_tmp13, _ln, _fn);
  /* 1100503*/ call_tmp15 = (call_tmp9 == call_tmp14);
  /* 129319*/ assert2(call_tmp15, _ln, _fn);
  /* 1276106*/ chpl_check_nil(this7, INT64(153), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1112577*/ ret3 = (this7)->refCnt;
  /* 1276108*/ chpl_check_nil(this7, INT64(153), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1112584*/ ret4 = (this7)->aliasRefCnt;
  /* 1112591*/ call_tmp16 = ((object)(ret3));
  /* 1112598*/ call_tmp17 = ((object)(ret4));
  /* 1112605*/ call_tmp18 = (call_tmp16 != call_tmp17);
  /* 1112637*/ if (call_tmp18) /* 1112611*/ {
    /* 1112612*/ ret2 = false;
    /* 1112616*/ goto _end_isEmptyString;
  } else /* 1112617*/ {
    /* 1276110*/ chpl_check_nil(this7, INT64(153), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112620*/ ret5 = (this7)->len;
    /* 1112627*/ call_tmp19 = (ret5 == INT64(0));
    /* 1112632*/ ret2 = call_tmp19;
    /* 1112636*/ goto _end_isEmptyString;
  }
  _end_isEmptyString:;
  /* 129418*/ if (ret2) /* 129415*/ {
    /* 1111399*/ call_tmp20 = (slen == INT64(0));
    /* 1111429*/ if (call_tmp20) /* 1111407*/ {
      /* 1111408*/ T = true;
    } else /* 1111411*/ {
      /* 1111414*/ call_tmp21 = string_compare(s, "");
      /* 1111421*/ call_tmp22 = (call_tmp21 == INT64(0));
      /* 1111426*/ T = call_tmp22;
    }
    /* 129411*/ if (T) /* 129412*/ {
      /* 280778*/ goto _end_reinitString;
    } else /* 129413*/ {
      /* 1276018*/ chpl_check_nil(this7, INT64(155), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111780*/ ret6 = (this7)->refCnt;
      /* 1111787*/ coerce_tmp = ret6;
      /* 1276020*/ chpl_check_nil(coerce_tmp, INT64(155), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111792*/ call_tmp23 = &((coerce_tmp)->val);
      /* 1276022*/ chpl_check_nil(call_tmp23, INT64(155), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111799*/ call_tmp24 = &((call_tmp23)->_cnt);
      /* 1111806*/ default_argorder = local_memory_order_seq_cst;
      /* 1276024*/ chpl_check_nil(call_tmp24, INT64(155), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1111813*/ call_tmp25 = &((call_tmp24)->_v);
      /* 1111819*/ atomic_fetch_add_explicit_int_least64_t(call_tmp25, INT64(1), default_argorder);
    }
  }
  /* 1111437*/ call_tmp26 = (slen == INT64(-1));
  /* 1111457*/ if (call_tmp26) /* 1111443*/ {
    /* 1111446*/ call_tmp27 = string_length(s);
    /* 1111450*/ T2 = call_tmp27;
  } else /* 1111453*/ {
    /* 1111454*/ T2 = slen;
  }
  /* 1101104*/ call_tmp28 = (T2 != INT64(0));
  /* 129571*/ if (call_tmp28) /* 129536*/ {
    /* 1276094*/ chpl_check_nil(this7, INT64(160), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112464*/ ret7 = (this7)->len;
    /* 1109294*/ call_tmp29 = (T2 < ret7);
    /* 129534*/ if (call_tmp29) /* 129489*/ {
      /* 1276324*/ chpl_check_nil(this7, INT64(162), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1118079*/ call_tmp30 = &((this7)->base);
      /* 1276344*/ chpl_check_nil(this7, INT64(162), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1119272*/ ret8 = (this7)->base;
      /* 383001*/ call_tmp31 = stringMove(ret8, s, T2, _ln, _fn);
      /* 1098079*/ *(call_tmp30) = call_tmp31;
    } else /* 129515*/ {
      /* 1276096*/ chpl_check_nil(this7, INT64(165), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1112474*/ ret9 = (this7)->len;
      /* 1101114*/ call_tmp32 = (ret9 != INT64(0));
      /* 129512*/ if (call_tmp32) /* 129513*/ {
        /* 1276346*/ chpl_check_nil(this7, INT64(166), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
        /* 1119282*/ ret10 = (this7)->base;
        /* 1119332*/ call_tmp33 = ((c_string)(NULL));
        /* 1119339*/ call_tmp34 = string_compare(ret10, call_tmp33);
        /* 1119346*/ call_tmp35 = (call_tmp34 != INT64(0));
        /* 1119356*/ if (call_tmp35) /* 1119352*/ {
          /* 1119354*/ chpl_rt_free_c_string(ret10, _ln, _fn);
        }
      }
      /* 1276326*/ chpl_check_nil(this7, INT64(168), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1118089*/ call_tmp36 = &((this7)->base);
      /* 383054*/ call_tmp37 = stringMove("", s, T2, _ln, _fn);
      /* 1098085*/ *(call_tmp36) = call_tmp37;
    }
  } else /* 129557*/ {
    /* 1276098*/ chpl_check_nil(this7, INT64(172), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112484*/ ret11 = (this7)->len;
    /* 1101124*/ call_tmp38 = (ret11 != INT64(0));
    /* 129554*/ if (call_tmp38) /* 129555*/ {
      /* 1276348*/ chpl_check_nil(this7, INT64(172), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
      /* 1119292*/ ret12 = (this7)->base;
      /* 1119362*/ call_tmp39 = ((c_string)(NULL));
      /* 1119369*/ call_tmp40 = string_compare(ret12, call_tmp39);
      /* 1119376*/ call_tmp41 = (call_tmp40 != INT64(0));
      /* 1119386*/ if (call_tmp41) /* 1119382*/ {
        /* 1119384*/ chpl_rt_free_c_string(ret12, _ln, _fn);
      }
    }
    /* 1276328*/ chpl_check_nil(this7, INT64(173), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1118099*/ call_tmp42 = &((this7)->base);
    /* 1098091*/ *(call_tmp42) = "";
  }
  /* 1276330*/ chpl_check_nil(this7, INT64(175), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 1118113*/ call_tmp43 = &((this7)->len);
  /* 1102833*/ *(call_tmp43) = T2;
  _end_reinitString:;
  /* 280776*/ return;
}

/* NewString.chpl:388 */
/*  131359 */ static void chpl___ASSIGN_9(_ref_string_rec lhs, c_string rhs_c, int64_t _ln, c_string _fn) {
  /* 1106661 */ int32_t call_tmp;
  /* 1106667 */ chpl_localeID_t call_tmp2;
  /* 1106669 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106680 */ chpl_localeID_t call_tmp3;
  /* 1106687 */ locale call_tmp4 = NULL;
  /*  384643 */ int64_t call_tmp5;
  /* 1112847 */ int32_t call_tmp6;
  /* 1112853 */ int64_t call_tmp7;
  /* 1112860 */ chpl_bool call_tmp8;
  /* 1112867 */ chpl_bool T;
  /* 1112875 */ locale ret = NULL;
  /* 1112882 */ int64_t call_tmp9;
  /* 1112889 */ chpl_bool call_tmp10;
  /* 1100001 */ int64_t call_tmp11;
  /* 131360*/ /* 1106663*/ call_tmp = chpl_task_getRequestedSubloc();
  /* 1106671*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1106676*/ chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106682*/ call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  /* 1106689*/ call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  /* 1275154*/ chpl_check_nil(call_tmp4, INT64(390), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 384646*/ call_tmp5 = id(call_tmp4, _ln, _fn);
  /* 1112849*/ call_tmp6 = chpl_nodeID;
  /* 1112855*/ call_tmp7 = ((int64_t)(call_tmp6));
  /* 1112862*/ call_tmp8 = (call_tmp7 != call_tmp5);
  /* 1112899*/ if (call_tmp8) /* 1112870*/ {
    /* 1112871*/ T = true;
  } else /* 1112874*/ {
    /* 1276114*/ chpl_check_nil(lhs, INT64(392), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112877*/ ret = (lhs)->home;
    /* 1276116*/ chpl_check_nil(ret, INT64(392), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
    /* 1112884*/ call_tmp9 = id(ret, _ln, _fn);
    /* 1112891*/ call_tmp10 = (call_tmp9 != call_tmp5);
    /* 1112896*/ T = call_tmp10;
  }
  /* 131470*/ if (T) /* 131471*/ {
    /* 131466*/ halt("Cannot assign a remote c_string to a string.", _ln, _fn);
  }
  /* 1100003*/ call_tmp11 = string_length(rhs_c);
  /* 1275156*/ chpl_check_nil(lhs, INT64(395), "/export/home/hzhang86/chapel/chapel/modules/standard/NewString.chpl");
  /* 131487*/ reinitString(lhs, rhs_c, call_tmp11, _ln, _fn);
  /* 280953*/ return;
}

