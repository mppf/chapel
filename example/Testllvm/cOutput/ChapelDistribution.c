/* ChapelDistribution.chpl:21 */
/*  235314 */ static void chpl__init_ChapelDistribution(int64_t _ln, c_string _fn) {
  /* 1274111 */ c_string modFormatStr;
  /* 1274112 */ c_string modStr;
  /* 1274128 */ _ref_int32_t refIndentLevel = NULL;
  /* 235315*/ /* 1274147*/ if (chpl__init_ChapelDistribution_p) /* 1274148*/ {
    /* 1274144*/ goto _exit_chpl__init_ChapelDistribution;
  }
  /* 1274120*/ modFormatStr = "%*s\n";
  /* 1274123*/ modStr = "ChapelDistribution";
  /* 1274126*/ printModuleInit(modFormatStr, modStr, INT64(18), _ln, _fn);
  /* 1274132*/ refIndentLevel = &moduleInitLevel;
  /* 1274135*/ *(refIndentLevel) += INT64(1);
  /* 1274109*/ chpl__init_ChapelDistribution_p = true;
  /* 1273252*/ {
    /* 1273253*/ chpl__init_List(_ln, _fn);
  }
  /* 1274138*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDistribution:;
  /* 278938*/ return;
}

/* ChapelDistribution.chpl:31 */
/*  194069 */ static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, BaseDist meme, int64_t _ln, c_string _fn) {
  /*  194071 */ BaseDist this7 = NULL;
  /*  194084 */ object T = NULL;
  /* 194070*/ /* 194079*/ this7 = meme;
  /* 1275198*/ chpl_check_nil(this7, INT64(31), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194091*/ T = &((this7)->super);
  /* 194082*/ _construct_object(T);
  /* 1275200*/ chpl_check_nil(this7, INT64(35), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194103*/ (this7)->_distCnt = *(_distCnt);
  /* 1275202*/ chpl_check_nil(this7, INT64(36), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194120*/ (this7)->_doms = *(_doms);
  /* 1275204*/ chpl_check_nil(this7, INT64(37), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194133*/ (this7)->_domsLock = *(_domsLock);
  /* 194138*/ return this7;
}

/* ChapelDistribution.chpl:31 */
/*  435134 */ static void chpl__auto_destroy_BaseDist(BaseDist this7, int64_t _ln, c_string _fn) {
  /* 1033333 */ _ref_atomicflag _field_destructor_tmp_ = NULL;
  /* 1102593 */ _ref_atomic_flag call_tmp = NULL;
  /* 1033353 */ _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  /* 1112096 */ _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  /* 1112103 */ _ref_atomic_int_least64_t call_tmp2 = NULL;
  /* 435135*/ /* 1275652*/ chpl_check_nil(this7, INT64(37), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1033338*/ _field_destructor_tmp_ = &((this7)->_domsLock);
  /* 1275924*/ chpl_check_nil(_field_destructor_tmp_, INT64(37), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1102595*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1102601*/ atomic_destroy_flag(call_tmp);
  /* 1275654*/ chpl_check_nil(this7, INT64(35), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1033358*/ _field_destructor_tmp_2 = &((this7)->_distCnt);
  /* 1276046*/ chpl_check_nil(_field_destructor_tmp_2, INT64(35), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1112098*/ _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  /* 1276048*/ chpl_check_nil(_field_destructor_tmp_3, INT64(35), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1112105*/ call_tmp2 = &((_field_destructor_tmp_3)->_v);
  /* 1112111*/ atomic_destroy_int_least64_t(call_tmp2);
  /* 435140*/ return;
}

/* ChapelDistribution.chpl:40 */
/*  110665 */ static int64_t destroyDist(BaseDist this7, int64_t _ln, c_string _fn) {
  /* 1272272 */ memory_order local_memory_order_seq_cst;
  /* 1109520 */ _ref_atomic_refcnt call_tmp = NULL;
  /* 1109527 */ _ref_atomic_int64 call_tmp2 = NULL;
  /* 1109534 */ memory_order default_argorder;
  /* 1109541 */ _ref_atomic_int_least64_t call_tmp3 = NULL;
  /* 1109548 */ int64_t call_tmp4;
  /* 1109557 */ int64_t call_tmp5;
  /* 1109567 */ chpl_bool call_tmp6;
  /* 110666*/ /* 1272273*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 110673*/ compilerAssert();
  /* 1109517*/ compilerAssert();
  /* 1275966*/ chpl_check_nil(this7, INT64(42), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1109522*/ call_tmp = &((this7)->_distCnt);
  /* 1275968*/ chpl_check_nil(call_tmp, INT64(42), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1109529*/ call_tmp2 = &((call_tmp)->_cnt);
  /* 1109536*/ default_argorder = local_memory_order_seq_cst;
  /* 1275970*/ chpl_check_nil(call_tmp2, INT64(42), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1109543*/ call_tmp3 = &((call_tmp2)->_v);
  /* 1109550*/ call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  /* 1109559*/ call_tmp5 = (call_tmp4 - INT64(1));
  /* 1109569*/ call_tmp6 = (call_tmp5 < INT64(0));
  /* 1109579*/ if (call_tmp6) /* 1109575*/ {
    /* 1109577*/ halt("distribution reference count is negative!", _ln, _fn);
  }
  /* 278625*/ return call_tmp5;
}

/* ChapelDistribution.chpl:110 */
/*  111016 */ static void dsiDestroyDistClass(BaseDist this7) {
  /* 111017*/ /* 278677*/ return;
}

/* ChapelDistribution.chpl:119 */
/*  194299 */ static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseDom meme, int64_t _ln, c_string _fn) {
  /*  194301 */ BaseDom this7 = NULL;
  /*  194314 */ object T = NULL;
  /* 194300*/ /* 194309*/ this7 = meme;
  /* 1275208*/ chpl_check_nil(this7, INT64(119), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194321*/ T = &((this7)->super);
  /* 194312*/ _construct_object(T);
  /* 1275210*/ chpl_check_nil(this7, INT64(123), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194333*/ (this7)->_domCnt = *(_domCnt);
  /* 1275212*/ chpl_check_nil(this7, INT64(124), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194350*/ (this7)->_arrs = *(_arrs);
  /* 1275214*/ chpl_check_nil(this7, INT64(125), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194363*/ (this7)->_arrsLock = *(_arrsLock);
  /* 194368*/ return this7;
}

/* ChapelDistribution.chpl:119 */
/*  435282 */ static void chpl__auto_destroy_BaseDom(BaseDom this7, int64_t _ln, c_string _fn) {
  /* 1033373 */ _ref_atomicflag _field_destructor_tmp_ = NULL;
  /* 1102606 */ _ref_atomic_flag call_tmp = NULL;
  /* 1033393 */ _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  /* 1112116 */ _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  /* 1112123 */ _ref_atomic_int_least64_t call_tmp2 = NULL;
  /* 435283*/ /* 1275656*/ chpl_check_nil(this7, INT64(125), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1033378*/ _field_destructor_tmp_ = &((this7)->_arrsLock);
  /* 1275926*/ chpl_check_nil(_field_destructor_tmp_, INT64(125), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1102608*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1102614*/ atomic_destroy_flag(call_tmp);
  /* 1275658*/ chpl_check_nil(this7, INT64(123), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1033398*/ _field_destructor_tmp_2 = &((this7)->_domCnt);
  /* 1276050*/ chpl_check_nil(_field_destructor_tmp_2, INT64(123), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1112118*/ _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  /* 1276052*/ chpl_check_nil(_field_destructor_tmp_3, INT64(123), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1112125*/ call_tmp2 = &((_field_destructor_tmp_3)->_v);
  /* 1112131*/ atomic_destroy_int_least64_t(call_tmp2);
  /* 435288*/ return;
}

/* ChapelDistribution.chpl:127 */
/*  111114 */ static BaseDist dsiMyDist(BaseDom this7, int64_t _ln, c_string _fn) {
  /*  278683 */ BaseDist ret = NULL;
  /* 111115*/ /* 111122*/ halt("internal error: dsiMyDist is not implemented", _ln, _fn);
  /* 1122252*/ ret = nil;
  /* 278690*/ return ret;
}

/* ChapelDistribution.chpl:133 */
/*  111133 */ static int64_t destroyDom(BaseDom this7, int64_t _ln, c_string _fn) {
  /* 1272278 */ memory_order local_memory_order_seq_cst;
  /*  111147 */ int64_t cnt;
  /* 1110360 */ _ref_atomic_refcnt call_tmp = NULL;
  /* 1110367 */ _ref_atomic_int64 call_tmp2 = NULL;
  /* 1110374 */ memory_order default_argorder;
  /* 1110381 */ _ref_atomic_int_least64_t call_tmp3 = NULL;
  /* 1110388 */ int64_t call_tmp4;
  /* 1110397 */ int64_t call_tmp5;
  /* 1110407 */ chpl_bool call_tmp6;
  /* 1109589 */ chpl_bool call_tmp7;
  /* 1109596 */ chpl_bool T;
  /* 1109600 */ chpl_bool call_tmp8;
  /* 1109602 */ int32_t _virtual_method_tmp_;
  /*  111206 */ BaseDist dist2 = NULL;
  /*  371846 */ BaseDist call_tmp9 = NULL;
  /* 1122268 */ chpl_bool T2;
  /* 1122270 */ _ref_atomicflag call_tmp10 = NULL;
  /* 1122277 */ memory_order default_argorder2;
  /* 1122284 */ _ref_atomic_flag call_tmp11 = NULL;
  /* 1122291 */ chpl_bool call_tmp12;
  /* 1122307 */ _ref_atomicflag call_tmp13 = NULL;
  /* 1122314 */ memory_order default_argorder3;
  /* 1122321 */ _ref_atomic_flag call_tmp14 = NULL;
  /* 1122328 */ chpl_bool call_tmp15;
  /* 1122339 */ _ref_list_BaseDom call_tmp16 = NULL;
  /* 1122350 */ _ref_atomicflag call_tmp17 = NULL;
  /* 1122357 */ memory_order default_argorder4;
  /* 1122364 */ _ref_atomic_flag call_tmp18 = NULL;
  /*  371860 */ int64_t call_tmp19;
  /* 1100421 */ chpl_bool call_tmp20;
  /* 1023353 */ int32_t _virtual_method_tmp_2;
  /*  371875 */ chpl_opaque call_tmp21;
  /* 111134*/ /* 1272279*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 111141*/ compilerAssert();
  /* 1110357*/ compilerAssert();
  /* 1275974*/ chpl_check_nil(this7, INT64(135), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1110362*/ call_tmp = &((this7)->_domCnt);
  /* 1275976*/ chpl_check_nil(call_tmp, INT64(135), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1110369*/ call_tmp2 = &((call_tmp)->_cnt);
  /* 1110376*/ default_argorder = local_memory_order_seq_cst;
  /* 1275978*/ chpl_check_nil(call_tmp2, INT64(135), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1110383*/ call_tmp3 = &((call_tmp2)->_v);
  /* 1110390*/ call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  /* 1110399*/ call_tmp5 = (call_tmp4 - INT64(1));
  /* 1110409*/ call_tmp6 = (call_tmp5 < INT64(0));
  /* 1110419*/ if (call_tmp6) /* 1110415*/ {
    /* 1110417*/ halt("domain reference count is negative!", _ln, _fn);
  }
  /* 298055*/ cnt = call_tmp5;
  /* 1109591*/ call_tmp7 = (call_tmp5 == INT64(0));
  /* 1109621*/ if (call_tmp7) /* 1109599*/ {
    /* 1275972*/ chpl_check_nil(this7, INT64(136), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1109604*/ _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
    /* 1109608*/ call_tmp8 = ((chpl_bool(*)(BaseDom))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(1))])(this7);
    /* 1109614*/ T = call_tmp8;
  } else /* 1109617*/ {
    /* 1109618*/ T = false;
  }
  /* 111250*/ if (T) /* 111209*/ {
    /* 1275124*/ chpl_check_nil(this7, INT64(137), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 371849*/ call_tmp9 = dsiMyDist(this7, _ln, _fn);
    /* 298059*/ dist2 = call_tmp9;
    /* 1276402*/ chpl_check_nil(dist2, INT64(139), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1122272*/ call_tmp10 = &((dist2)->_domsLock);
    /* 1122279*/ default_argorder2 = local_memory_order_seq_cst;
    /* 1276404*/ chpl_check_nil(call_tmp10, INT64(139), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1122286*/ call_tmp11 = &((call_tmp10)->_v);
    /* 1122293*/ call_tmp12 = atomic_flag_test_and_set_explicit(call_tmp11, default_argorder2);
    /* 1122299*/ T2 = call_tmp12;
    /* 1122302*/ while (T2) {
      /* 1122306*/ chpl_task_yield();
      /* 1276406*/ chpl_check_nil(dist2, INT64(139), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 1122309*/ call_tmp13 = &((dist2)->_domsLock);
      /* 1122316*/ default_argorder3 = local_memory_order_seq_cst;
      /* 1276408*/ chpl_check_nil(call_tmp13, INT64(139), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 1122323*/ call_tmp14 = &((call_tmp13)->_v);
      /* 1122330*/ call_tmp15 = atomic_flag_test_and_set_explicit(call_tmp14, default_argorder3);
      /* 1122336*/ T2 = call_tmp15;
    }
    /* 1276410*/ chpl_check_nil(dist2, INT64(139), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1122341*/ call_tmp16 = &((dist2)->_doms);
    /* 1276412*/ chpl_check_nil(call_tmp16, INT64(139), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1122347*/ remove3(call_tmp16, this7, _ln, _fn);
    /* 1276414*/ chpl_check_nil(dist2, INT64(139), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1122352*/ call_tmp17 = &((dist2)->_domsLock);
    /* 1122359*/ default_argorder4 = local_memory_order_seq_cst;
    /* 1276416*/ chpl_check_nil(call_tmp17, INT64(139), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1122366*/ call_tmp18 = &((call_tmp17)->_v);
    /* 1122372*/ atomic_flag_clear_explicit(call_tmp18, default_argorder4);
    /* 1275126*/ chpl_check_nil(dist2, INT64(140), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 371863*/ call_tmp19 = destroyDist(dist2, _ln, _fn);
    /* 1100423*/ call_tmp20 = (call_tmp19 == INT64(0));
    /* 111241*/ if (call_tmp20) /* 111242*/ {
      /* 1275628*/ chpl_check_nil(dist2, INT64(142), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 1023357*/ _virtual_method_tmp_2 = ((object)(dist2))->chpl__cid;
      /* 235585*/ ((void(*)(BaseDist, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_2) + INT64(0))])(dist2, _ln, _fn);
      /* 371878*/ call_tmp21 = ((void*)(dist2));
      /* 235591*/ chpl_here_free(call_tmp21, _ln, _fn);
    }
  }
  /* 278704*/ return cnt;
}

/* ChapelDistribution.chpl:177 */
/*  111383 */ static void _backupArrays(BaseDom this7, int64_t _ln, c_string _fn) {
  /* 1123609 */ list_BaseArr ret;
  /* 1258195 */ list_BaseArr _ic__F0_this;
  /* 1061128 */ listNode_BaseArr tmp = NULL;
  /* 1124140 */ listNode_BaseArr ret2 = NULL;
  /* 1061148 */ chpl_bool T;
  /* 1124353 */ object call_tmp = NULL;
  /* 1095225 */ chpl_bool call_tmp2;
  /* 1124496 */ BaseArr ret3 = NULL;
  /* 1061252 */ int32_t _virtual_method_tmp_;
  /* 1124623 */ listNode_BaseArr ret4 = NULL;
  /* 1124363 */ object call_tmp3 = NULL;
  /* 1095235 */ chpl_bool call_tmp4;
  /* 111384*/ /* 1276448*/ chpl_check_nil(this7, INT64(178), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1123611*/ ret = (this7)->_arrs;
  /* 1123781*/ _ic__F0_this = ret;
  /* 1124142*/ ret2 = (&_ic__F0_this)->first;
  /* 1061143*/ tmp = ret2;
  /* 1124355*/ call_tmp = ((object)(ret2));
  /* 1095227*/ call_tmp2 = (call_tmp != nil);
  /* 1061165*/ T = call_tmp2;
  /* 1061170*/ while (T) {
    /* 1276470*/ chpl_check_nil(tmp, INT64(178), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1124498*/ ret3 = (tmp)->data;
    /* 1275752*/ chpl_check_nil(ret3, INT64(179), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1061254*/ _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
    /* 1061258*/ ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(2))])(ret3, _ln, _fn);
    /* 1276494*/ chpl_check_nil(tmp, INT64(178), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1124625*/ ret4 = (tmp)->next;
    /* 1124743*/ tmp = ret4;
    /* 1124365*/ call_tmp3 = ((object)(ret4));
    /* 1095237*/ call_tmp4 = (call_tmp3 != nil);
    /* 1061238*/ T = call_tmp4;
  }
  /* 278717*/ return;
}

/* ChapelDistribution.chpl:182 */
/*  111432 */ static void _removeArrayBackups(BaseDom this7, int64_t _ln, c_string _fn) {
  /* 1123619 */ list_BaseArr ret;
  /* 1258209 */ list_BaseArr _ic__F0_this;
  /* 1061275 */ listNode_BaseArr tmp = NULL;
  /* 1124150 */ listNode_BaseArr ret2 = NULL;
  /* 1061295 */ chpl_bool T;
  /* 1124373 */ object call_tmp = NULL;
  /* 1095245 */ chpl_bool call_tmp2;
  /* 1124506 */ BaseArr ret3 = NULL;
  /* 1061399 */ int32_t _virtual_method_tmp_;
  /* 1124633 */ listNode_BaseArr ret4 = NULL;
  /* 1124383 */ object call_tmp3 = NULL;
  /* 1095255 */ chpl_bool call_tmp4;
  /* 111433*/ /* 1276450*/ chpl_check_nil(this7, INT64(183), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1123621*/ ret = (this7)->_arrs;
  /* 1123838*/ _ic__F0_this = ret;
  /* 1124152*/ ret2 = (&_ic__F0_this)->first;
  /* 1061290*/ tmp = ret2;
  /* 1124375*/ call_tmp = ((object)(ret2));
  /* 1095247*/ call_tmp2 = (call_tmp != nil);
  /* 1061312*/ T = call_tmp2;
  /* 1061317*/ while (T) {
    /* 1276472*/ chpl_check_nil(tmp, INT64(183), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1124508*/ ret3 = (tmp)->data;
    /* 1275754*/ chpl_check_nil(ret3, INT64(184), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1061401*/ _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
    /* 1061405*/ ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(3))])(ret3, _ln, _fn);
    /* 1276496*/ chpl_check_nil(tmp, INT64(183), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1124635*/ ret4 = (tmp)->next;
    /* 1124749*/ tmp = ret4;
    /* 1124385*/ call_tmp3 = ((object)(ret4));
    /* 1095257*/ call_tmp4 = (call_tmp3 != nil);
    /* 1061385*/ T = call_tmp4;
  }
  /* 278719*/ return;
}

/* ChapelDistribution.chpl:187 */
/*  925644 */ static void _preserveArrayElements(BaseDom this7, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn) {
  /* 1123649 */ list_BaseArr ret;
  /* 1258251 */ list_BaseArr _ic__F0_this;
  /* 1066430 */ listNode_BaseArr tmp = NULL;
  /* 1124180 */ listNode_BaseArr ret2 = NULL;
  /* 1066450 */ chpl_bool T;
  /* 1124433 */ object call_tmp = NULL;
  /* 1095305 */ chpl_bool call_tmp2;
  /* 1124536 */ BaseArr ret3 = NULL;
  /* 1066554 */ int32_t _virtual_method_tmp_;
  /* 1124663 */ listNode_BaseArr ret4 = NULL;
  /* 1124443 */ object call_tmp3 = NULL;
  /* 1095315 */ chpl_bool call_tmp4;
  /* 925659*/ /* 1276456*/ chpl_check_nil(this7, INT64(188), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1123651*/ ret = (this7)->_arrs;
  /* 1124009*/ _ic__F0_this = ret;
  /* 1124182*/ ret2 = (&_ic__F0_this)->first;
  /* 1066445*/ tmp = ret2;
  /* 1124435*/ call_tmp = ((object)(ret2));
  /* 1095307*/ call_tmp2 = (call_tmp != nil);
  /* 1066467*/ T = call_tmp2;
  /* 1066472*/ while (T) {
    /* 1276478*/ chpl_check_nil(tmp, INT64(188), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1124538*/ ret3 = (tmp)->data;
    /* 1275796*/ chpl_check_nil(ret3, INT64(189), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1066556*/ _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
    /* 1066560*/ ((void(*)(BaseArr, int64_t, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(4))])(ret3, oldslot, newslot, _ln, _fn);
    /* 1276502*/ chpl_check_nil(tmp, INT64(188), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1124665*/ ret4 = (tmp)->next;
    /* 1124767*/ tmp = ret4;
    /* 1124445*/ call_tmp3 = ((object)(ret4));
    /* 1095317*/ call_tmp4 = (call_tmp3 != nil);
    /* 1066540*/ T = call_tmp4;
  }
  /* 925706*/ return;
}

/* ChapelDistribution.chpl:214 */
/*  111634 */ static chpl_bool dsiLinksDistribution(BaseDom this7) {
  /* 111635*/ /* 278765*/ return true;
}

/* ChapelDistribution.chpl:219 */
/*  194261 */ static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme, int64_t _ln, c_string _fn) {
  /*  194263 */ BaseRectangularDom this7 = NULL;
  /*  194395 */ BaseDom T = NULL;
  /* 194262*/ /* 194268*/ this7 = meme;
  /* 1275216*/ chpl_check_nil(this7, INT64(219), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 194402*/ T = &((this7)->super);
  /* 194370*/ _construct_BaseDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
  /* 194406*/ return meme;
}

/* ChapelDistribution.chpl:219 */
/*  435349 */ static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this7, int64_t _ln, c_string _fn) {
  /* 1033413 */ BaseDom _parent_destructor_tmp_ = NULL;
  /* 1117003 */ _ref_atomicflag _field_destructor_tmp_ = NULL;
  /* 1117010 */ _ref_atomic_flag call_tmp = NULL;
  /* 1117020 */ _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  /* 1117027 */ _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  /* 1117034 */ _ref_atomic_int_least64_t call_tmp2 = NULL;
  /* 435350*/ /* 1033418*/ _parent_destructor_tmp_ = ((BaseDom)(this7));
  /* 1276204*/ chpl_check_nil(_parent_destructor_tmp_, INT64(219), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117005*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
  /* 1276206*/ chpl_check_nil(_field_destructor_tmp_, INT64(219), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117012*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1117018*/ atomic_destroy_flag(call_tmp);
  /* 1276208*/ chpl_check_nil(_parent_destructor_tmp_, INT64(219), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117022*/ _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
  /* 1276210*/ chpl_check_nil(_field_destructor_tmp_2, INT64(219), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117029*/ _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  /* 1276212*/ chpl_check_nil(_field_destructor_tmp_3, INT64(219), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117036*/ call_tmp2 = &((_field_destructor_tmp_3)->_v);
  /* 1117042*/ atomic_destroy_int_least64_t(call_tmp2);
  /* 435355*/ return;
}

/* ChapelDistribution.chpl:247 */
/*  195722 */ static BaseAssociativeDom _construct_BaseAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseAssociativeDom meme, int64_t _ln, c_string _fn) {
  /*  195724 */ BaseAssociativeDom this7 = NULL;
  /*  195757 */ BaseDom T = NULL;
  /* 195723*/ /* 195729*/ this7 = meme;
  /* 1275224*/ chpl_check_nil(this7, INT64(247), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 195764*/ T = &((this7)->super);
  /* 195732*/ _construct_BaseDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
  /* 195768*/ return meme;
}

/* ChapelDistribution.chpl:247 */
/*  435483 */ static void chpl__auto_destroy_BaseAssociativeDom(BaseAssociativeDom this7, int64_t _ln, c_string _fn) {
  /* 1033423 */ BaseDom _parent_destructor_tmp_ = NULL;
  /* 1117047 */ _ref_atomicflag _field_destructor_tmp_ = NULL;
  /* 1117054 */ _ref_atomic_flag call_tmp = NULL;
  /* 1117064 */ _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  /* 1117071 */ _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  /* 1117078 */ _ref_atomic_int_least64_t call_tmp2 = NULL;
  /* 435484*/ /* 1033428*/ _parent_destructor_tmp_ = ((BaseDom)(this7));
  /* 1276214*/ chpl_check_nil(_parent_destructor_tmp_, INT64(247), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117049*/ _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
  /* 1276216*/ chpl_check_nil(_field_destructor_tmp_, INT64(247), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117056*/ call_tmp = &((_field_destructor_tmp_)->_v);
  /* 1117062*/ atomic_destroy_flag(call_tmp);
  /* 1276218*/ chpl_check_nil(_parent_destructor_tmp_, INT64(247), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117066*/ _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
  /* 1276220*/ chpl_check_nil(_field_destructor_tmp_2, INT64(247), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117073*/ _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  /* 1276222*/ chpl_check_nil(_field_destructor_tmp_3, INT64(247), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1117080*/ call_tmp2 = &((_field_destructor_tmp_3)->_v);
  /* 1117086*/ atomic_destroy_int_least64_t(call_tmp2);
  /* 435489*/ return;
}

/* ChapelDistribution.chpl:271 */
/*  195154 */ static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme, int64_t _ln, c_string _fn) {
  /*  195156 */ BaseArr this7 = NULL;
  /*  195168 */ object T = NULL;
  /* 195155*/ /* 195163*/ this7 = meme;
  /* 1275218*/ chpl_check_nil(this7, INT64(271), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 195175*/ T = &((this7)->super);
  /* 195166*/ _construct_object(T);
  /* 1275220*/ chpl_check_nil(this7, INT64(275), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 195187*/ (this7)->_arrCnt = *(_arrCnt);
  /* 1275222*/ chpl_check_nil(this7, INT64(276), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 195200*/ (this7)->_arrAlias = _arrAlias;
  /* 195205*/ return this7;
}

/* ChapelDistribution.chpl:271 */
/*  435671 */ static void chpl__auto_destroy_BaseArr(BaseArr this7, int64_t _ln, c_string _fn) {
  /* 1033433 */ _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  /* 1112136 */ _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  /* 1112143 */ _ref_atomic_int_least64_t call_tmp = NULL;
  /* 435672*/ /* 1275660*/ chpl_check_nil(this7, INT64(275), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1033438*/ _field_destructor_tmp_ = &((this7)->_arrCnt);
  /* 1276054*/ chpl_check_nil(_field_destructor_tmp_, INT64(275), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1112138*/ _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  /* 1276056*/ chpl_check_nil(_field_destructor_tmp_2, INT64(275), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1112145*/ call_tmp = &((_field_destructor_tmp_2)->_v);
  /* 1112151*/ atomic_destroy_int_least64_t(call_tmp);
  /* 435677*/ return;
}

/* ChapelDistribution.chpl:280 */
/*  111933 */ static BaseDom dsiGetBaseDom(BaseArr this7, int64_t _ln, c_string _fn) {
  /*  278803 */ BaseDom ret = NULL;
  /* 111934*/ /* 111941*/ halt("internal error: dsiGetBaseDom is not implemented", _ln, _fn);
  /* 1130790*/ ret = nil;
  /* 278810*/ return ret;
}

/* ChapelDistribution.chpl:286 */
/*  111952 */ static int64_t destroyArr(BaseArr this7, int64_t _ln, c_string _fn) {
  /* 1272287 */ memory_order local_memory_order_seq_cst;
  /*  111966 */ int64_t cnt;
  /* 1110497 */ _ref_atomic_refcnt call_tmp = NULL;
  /* 1110504 */ _ref_atomic_int64 call_tmp2 = NULL;
  /* 1110511 */ memory_order default_argorder;
  /* 1110518 */ _ref_atomic_int_least64_t call_tmp3 = NULL;
  /* 1110525 */ int64_t call_tmp4;
  /* 1110534 */ int64_t call_tmp5;
  /* 1110544 */ chpl_bool call_tmp6;
  /* 1100431 */ chpl_bool call_tmp7;
  /* 1130710 */ BaseArr ret = NULL;
  /* 1130740 */ object call_tmp8 = NULL;
  /* 1095883 */ chpl_bool call_tmp9;
  /* 1130720 */ BaseArr ret2 = NULL;
  /*  372104 */ int64_t call_tmp10;
  /* 1100441 */ chpl_bool call_tmp11;
  /* 1130730 */ BaseArr ret3 = NULL;
  /* 1023360 */ int32_t _virtual_method_tmp_;
  /*  372121 */ chpl_opaque call_tmp12;
  /* 1023318 */ int32_t _virtual_method_tmp_2;
  /* 1100451 */ chpl_bool call_tmp13;
  /*  112023 */ BaseDom dom = NULL;
  /*  372140 */ BaseDom call_tmp14 = NULL;
  /* 1023325 */ int32_t _virtual_method_tmp_3;
  /* 1130806 */ chpl_bool T;
  /* 1130808 */ _ref_atomicflag call_tmp15 = NULL;
  /* 1130815 */ memory_order default_argorder2;
  /* 1130822 */ _ref_atomic_flag call_tmp16 = NULL;
  /* 1130829 */ chpl_bool call_tmp17;
  /* 1130845 */ _ref_atomicflag call_tmp18 = NULL;
  /* 1130852 */ memory_order default_argorder3;
  /* 1130859 */ _ref_atomic_flag call_tmp19 = NULL;
  /* 1130866 */ chpl_bool call_tmp20;
  /* 1130877 */ _ref_list_BaseArr call_tmp21 = NULL;
  /* 1130888 */ _ref_atomicflag call_tmp22 = NULL;
  /* 1130895 */ memory_order default_argorder4;
  /* 1130902 */ _ref_atomic_flag call_tmp23 = NULL;
  /*  372154 */ int64_t call_tmp24;
  /* 1100461 */ chpl_bool call_tmp25;
  /* 1023367 */ int32_t _virtual_method_tmp_4;
  /*  372169 */ chpl_opaque call_tmp26;
  /* 111953*/ /* 1272288*/ local_memory_order_seq_cst = memory_order_seq_cst;
  /* 111960*/ compilerAssert();
  /* 1110494*/ compilerAssert();
  /* 1275980*/ chpl_check_nil(this7, INT64(288), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1110499*/ call_tmp = &((this7)->_arrCnt);
  /* 1275982*/ chpl_check_nil(call_tmp, INT64(288), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1110506*/ call_tmp2 = &((call_tmp)->_cnt);
  /* 1110513*/ default_argorder = local_memory_order_seq_cst;
  /* 1275984*/ chpl_check_nil(call_tmp2, INT64(288), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
  /* 1110520*/ call_tmp3 = &((call_tmp2)->_v);
  /* 1110527*/ call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  /* 1110536*/ call_tmp5 = (call_tmp4 - INT64(1));
  /* 1110546*/ call_tmp6 = (call_tmp5 < INT64(0));
  /* 1110556*/ if (call_tmp6) /* 1110552*/ {
    /* 1110554*/ halt("array reference count is negative!", _ln, _fn);
  }
  /* 298076*/ cnt = call_tmp5;
  /* 1100433*/ call_tmp7 = (call_tmp5 == INT64(0));
  /* 112014*/ if (call_tmp7) /* 112011*/ {
    /* 1276780*/ chpl_check_nil(this7, INT64(290), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1130712*/ ret = (this7)->_arrAlias;
    /* 1130742*/ call_tmp8 = ((object)(ret));
    /* 1095885*/ call_tmp9 = (call_tmp8 != nil);
    /* 112009*/ if (call_tmp9) /* 112001*/ {
      /* 1276782*/ chpl_check_nil(this7, INT64(292), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 1130722*/ ret2 = (this7)->_arrAlias;
      /* 1275128*/ chpl_check_nil(ret2, INT64(292), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 372107*/ call_tmp10 = destroyArr(ret2, _ln, _fn);
      /* 1100443*/ call_tmp11 = (call_tmp10 == INT64(0));
      /* 111994*/ if (call_tmp11) /* 111995*/ {
        /* 1276784*/ chpl_check_nil(this7, INT64(294), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
        /* 1130732*/ ret3 = (this7)->_arrAlias;
        /* 1275630*/ chpl_check_nil(ret3, INT64(294), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
        /* 1023364*/ _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
        /* 235597*/ ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(0))])(ret3, _ln, _fn);
        /* 372124*/ call_tmp12 = ((void*)(ret3));
        /* 235603*/ chpl_here_free(call_tmp12, _ln, _fn);
      }
    } else /* 112006*/ {
      /* 1275624*/ chpl_check_nil(this7, INT64(297), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 1023322*/ _virtual_method_tmp_2 = ((object)(this7))->chpl__cid;
      /* 112004*/ ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_2) + INT64(6))])(this7, _ln, _fn);
    }
  }
  /* 1100453*/ call_tmp13 = (call_tmp5 == INT64(0));
  /* 112067*/ if (call_tmp13) /* 112026*/ {
    /* 1275626*/ chpl_check_nil(this7, INT64(301), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1023329*/ _virtual_method_tmp_3 = ((object)(this7))->chpl__cid;
    /* 372143*/ call_tmp14 = ((BaseDom(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_3) + INT64(5))])(this7, _ln, _fn);
    /* 298084*/ dom = call_tmp14;
    /* 1276786*/ chpl_check_nil(dom, INT64(303), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1130810*/ call_tmp15 = &((dom)->_arrsLock);
    /* 1130817*/ default_argorder2 = local_memory_order_seq_cst;
    /* 1276788*/ chpl_check_nil(call_tmp15, INT64(303), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1130824*/ call_tmp16 = &((call_tmp15)->_v);
    /* 1130831*/ call_tmp17 = atomic_flag_test_and_set_explicit(call_tmp16, default_argorder2);
    /* 1130837*/ T = call_tmp17;
    /* 1130840*/ while (T) {
      /* 1130844*/ chpl_task_yield();
      /* 1276790*/ chpl_check_nil(dom, INT64(303), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 1130847*/ call_tmp18 = &((dom)->_arrsLock);
      /* 1130854*/ default_argorder3 = local_memory_order_seq_cst;
      /* 1276792*/ chpl_check_nil(call_tmp18, INT64(303), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 1130861*/ call_tmp19 = &((call_tmp18)->_v);
      /* 1130868*/ call_tmp20 = atomic_flag_test_and_set_explicit(call_tmp19, default_argorder3);
      /* 1130874*/ T = call_tmp20;
    }
    /* 1276794*/ chpl_check_nil(dom, INT64(303), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1130879*/ call_tmp21 = &((dom)->_arrs);
    /* 1276796*/ chpl_check_nil(call_tmp21, INT64(303), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1130885*/ remove4(call_tmp21, this7, _ln, _fn);
    /* 1276798*/ chpl_check_nil(dom, INT64(303), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1130890*/ call_tmp22 = &((dom)->_arrsLock);
    /* 1130897*/ default_argorder4 = local_memory_order_seq_cst;
    /* 1276800*/ chpl_check_nil(call_tmp22, INT64(303), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 1130904*/ call_tmp23 = &((call_tmp22)->_v);
    /* 1130910*/ atomic_flag_clear_explicit(call_tmp23, default_argorder4);
    /* 1275130*/ chpl_check_nil(dom, INT64(304), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
    /* 372157*/ call_tmp24 = destroyDom(dom, _ln, _fn);
    /* 1100463*/ call_tmp25 = (call_tmp24 == INT64(0));
    /* 112058*/ if (call_tmp25) /* 112059*/ {
      /* 1275632*/ chpl_check_nil(dom, INT64(306), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDistribution.chpl");
      /* 1023371*/ _virtual_method_tmp_4 = ((object)(dom))->chpl__cid;
      /* 235609*/ ((void(*)(BaseDom, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_4) + INT64(0))])(dom, _ln, _fn);
      /* 372172*/ call_tmp26 = ((void*)(dom));
      /* 235615*/ chpl_here_free(call_tmp26, _ln, _fn);
    }
  }
  /* 278824*/ return cnt;
}

/* ChapelDistribution.chpl:312 */
/*  112077 */ static void dsiDestroyData(BaseArr this7, int64_t _ln, c_string _fn) {
  /* 112078*/ /* 278829*/ return;
}

/* ChapelDistribution.chpl:314 */
/*  577220 */ static void dsiReallocate(BaseArr this7, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
  /* 577231*/ /* 577233*/ halt("reallocating not supported for this array type", _ln, _fn);
  /* 577235*/ return;
}

/* ChapelDistribution.chpl:318 */
/*  112102 */ static void dsiPostReallocate(BaseArr this7) {
  /* 112103*/ /* 278833*/ return;
}

/* ChapelDistribution.chpl:349 */
/*  934991 */ static void clearEntry(BaseArr this7, chpl_taskID_t idx, chpl_bool haveLock, int64_t _ln, c_string _fn) {
  /* 935006*/ /* 935008*/ halt("clearEntry() not supported for non-associative arrays", _ln, _fn);
  /* 935010*/ return;
}

/* ChapelDistribution.chpl:353 */
/*  112203 */ static void _backupArray(BaseArr this7, int64_t _ln, c_string _fn) {
  /* 112204*/ /* 112210*/ halt("_backupArray() not supported for non-associative arrays", _ln, _fn);
  /* 278845*/ return;
}

/* ChapelDistribution.chpl:357 */
/*  112217 */ static void _removeArrayBackup(BaseArr this7, int64_t _ln, c_string _fn) {
  /* 112218*/ /* 112224*/ halt("_removeArrayBackup() not supported for non-associative arrays", _ln, _fn);
  /* 278847*/ return;
}

/* ChapelDistribution.chpl:361 */
/*  925727 */ static void _preserveArrayElement(BaseArr this7, int64_t oldslot, int64_t newslot, int64_t _ln, c_string _fn) {
  /* 925742*/ /* 925744*/ halt("_preserveArrayElement() not supported for non-associative arrays", _ln, _fn);
  /* 925746*/ return;
}

