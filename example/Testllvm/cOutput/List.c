/* List.chpl:1 */
/*  235374 */ static void chpl__init_List(int64_t _ln, c_string _fn) {
  /* 1274799 */ c_string modFormatStr;
  /* 1274800 */ c_string modStr;
  /* 1274816 */ _ref_int32_t refIndentLevel = NULL;
  /* 235375*/ /* 1274835*/ if (chpl__init_List_p) /* 1274836*/ {
    /* 1274832*/ goto _exit_chpl__init_List;
  }
  /* 1274808*/ modFormatStr = "%*s\n";
  /* 1274811*/ modStr = "List";
  /* 1274814*/ printModuleInit(modFormatStr, modStr, INT64(4), _ln, _fn);
  /* 1274820*/ refIndentLevel = &moduleInitLevel;
  /* 1274823*/ *(refIndentLevel) += INT64(1);
  /* 1274797*/ chpl__init_List_p = true;
  /* 1274826*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_List:;
  /* 285466*/ return;
}

/* List.chpl:20 */
/*  514909 */ static listNode_BaseArr _construct_listNode(BaseArr data, listNode_BaseArr next, listNode_BaseArr meme, int64_t _ln, c_string _fn) {
  /*  514933 */ listNode_BaseArr this7 = NULL;
  /*  514980 */ object T = NULL;
  /* 514974*/ /* 514977*/ this7 = meme;
  /* 1275250*/ chpl_check_nil(this7, INT64(20), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
  /* 514982*/ T = &((this7)->super);
  /* 514988*/ _construct_object(T);
  /* 1275252*/ chpl_check_nil(this7, INT64(22), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
  /* 514995*/ (this7)->data = data;
  /* 1275254*/ chpl_check_nil(this7, INT64(23), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
  /* 514999*/ (this7)->next = next;
  /* 515003*/ return this7;
}

/* List.chpl:20 */
/*  515073 */ static void chpl__auto_destroy_listNode(listNode_BaseArr this7, int64_t _ln, c_string _fn) {
  /* 515082*/ /* 515083*/ return;
}

/* List.chpl:20 */
/*  515912 */ static void chpl__auto_destroy_listNode2(listNode_BaseDom this7, int64_t _ln, c_string _fn) {
  /* 515921*/ /* 515922*/ return;
}

/* List.chpl:26 */
/*  515128 */ static list_BaseArr _construct_list(listNode_BaseArr first, listNode_BaseArr last, int64_t length2, list_BaseArr* const meme, int64_t _ln, c_string _fn) {
  /*  515158 */ list_BaseArr this7;
  /* 515194*/ /* 515197*/ this7 = *(meme);
  /* 515204*/ (&this7)->first = first;
  /* 515208*/ (&this7)->last = last;
  /* 515212*/ (&this7)->length = length2;
  /* 515216*/ return this7;
}

/* List.chpl:26 */
/*  515967 */ static list_BaseDom _construct_list2(listNode_BaseDom first, listNode_BaseDom last, int64_t length2, list_BaseDom* const meme, int64_t _ln, c_string _fn) {
  /*  515997 */ list_BaseDom this7;
  /* 516033*/ /* 516036*/ this7 = *(meme);
  /* 516043*/ (&this7)->first = first;
  /* 516047*/ (&this7)->last = last;
  /* 516051*/ (&this7)->length = length2;
  /* 516055*/ return this7;
}

/* List.chpl:41 */
/*  564619 */ static void remove3(_ref_list_BaseDom this7, BaseDom x, int64_t _ln, c_string _fn) {
  /*  564638 */ listNode_BaseDom tmp = NULL;
  /* 1122678 */ listNode_BaseDom ret = NULL;
  /*  564653 */ listNode_BaseDom prev = NULL;
  /*  564656 */ listNode_BaseDom type_tmp = NULL;
  /*  564683 */ chpl_bool T;
  /* 1122528 */ object call_tmp = NULL;
  /* 1122535 */ chpl_bool call_tmp2;
  /* 1122542 */ chpl_bool T2;
  /* 1122546 */ listNode_BaseDom T3 = NULL;
  /* 1122552 */ BaseDom ret2 = NULL;
  /* 1122559 */ object call_tmp3 = NULL;
  /* 1122566 */ object call_tmp4 = NULL;
  /* 1122573 */ chpl_bool call_tmp5;
  /* 1122770 */ listNode_BaseDom ret3 = NULL;
  /* 1122598 */ object call_tmp6 = NULL;
  /* 1122605 */ chpl_bool call_tmp7;
  /* 1122612 */ chpl_bool T4;
  /* 1122616 */ listNode_BaseDom T5 = NULL;
  /* 1122622 */ BaseDom ret4 = NULL;
  /* 1122629 */ object call_tmp8 = NULL;
  /* 1122636 */ object call_tmp9 = NULL;
  /* 1122643 */ chpl_bool call_tmp10;
  /* 1122398 */ object call_tmp11 = NULL;
  /* 1095125 */ chpl_bool call_tmp12;
  /* 1122408 */ object call_tmp13 = NULL;
  /* 1095135 */ chpl_bool call_tmp14;
  /* 1122757 */ _ref_listNode_BaseDom call_tmp15 = NULL;
  /* 1122780 */ listNode_BaseDom ret5 = NULL;
  /* 1122698 */ listNode_BaseDom ret6 = NULL;
  /* 1122418 */ object call_tmp16 = NULL;
  /* 1122428 */ object call_tmp17 = NULL;
  /* 1094965 */ chpl_bool call_tmp18;
  /* 1122665 */ _ref_listNode_BaseDom call_tmp19 = NULL;
  /* 1122790 */ listNode_BaseDom ret7 = NULL;
  /* 1122817 */ listNode_BaseDom ret8 = NULL;
  /* 1122438 */ object call_tmp20 = NULL;
  /* 1122448 */ object call_tmp21 = NULL;
  /* 1094975 */ chpl_bool call_tmp22;
  /* 1122804 */ _ref_listNode_BaseDom call_tmp23 = NULL;
  /*  565063 */ chpl_opaque call_tmp24;
  /* 1122831 */ _ref_int64_t call_tmp25 = NULL;
  /* 564637*/ /* 1276424*/ chpl_check_nil(this7, INT64(42), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
  /* 1122680*/ ret = (this7)->first;
  /* 564648*/ tmp = ret;
  /* 1122717*/ type_tmp = nil;
  /* 564680*/ prev = type_tmp;
  /* 1122530*/ call_tmp = ((object)(ret));
  /* 1122537*/ call_tmp2 = (call_tmp != nil);
  /* 1122587*/ if (call_tmp2) /* 1122545*/ {
    /* 1122548*/ T3 = ret;
    /* 1276418*/ chpl_check_nil(T3, INT64(44), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1122554*/ ret2 = (T3)->data;
    /* 1122561*/ call_tmp3 = ((object)(ret2));
    /* 1122568*/ call_tmp4 = ((object)(x));
    /* 1122575*/ call_tmp5 = (call_tmp3 != call_tmp4);
    /* 1122580*/ T2 = call_tmp5;
  } else /* 1122583*/ {
    /* 1122584*/ T2 = false;
  }
  /* 564783*/ T = T2;
  /* 564788*/ while (T) {
    /* 1122723*/ prev = tmp;
    /* 1276430*/ chpl_check_nil(tmp, INT64(46), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1122772*/ ret3 = (tmp)->next;
    /* 1122729*/ tmp = ret3;
    /* 1122600*/ call_tmp6 = ((object)(ret3));
    /* 1122607*/ call_tmp7 = (call_tmp6 != nil);
    /* 1122657*/ if (call_tmp7) /* 1122615*/ {
      /* 1122618*/ T5 = ret3;
      /* 1276420*/ chpl_check_nil(T5, INT64(44), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1122624*/ ret4 = (T5)->data;
      /* 1122631*/ call_tmp8 = ((object)(ret4));
      /* 1122638*/ call_tmp9 = ((object)(x));
      /* 1122645*/ call_tmp10 = (call_tmp8 != call_tmp9);
      /* 1122650*/ T4 = call_tmp10;
    } else /* 1122653*/ {
      /* 1122654*/ T4 = false;
    }
    /* 564908*/ T = T4;
  }
  /* 1122400*/ call_tmp11 = ((object)(tmp));
  /* 1095127*/ call_tmp12 = (call_tmp11 != nil);
  /* 565084*/ if (call_tmp12) /* 564931*/ {
    /* 1122410*/ call_tmp13 = ((object)(prev));
    /* 1095137*/ call_tmp14 = (call_tmp13 != nil);
    /* 564969*/ if (call_tmp14) /* 564948*/ {
      /* 1276428*/ chpl_check_nil(prev, INT64(50), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1122759*/ call_tmp15 = &((prev)->next);
      /* 1276432*/ chpl_check_nil(tmp, INT64(50), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1122782*/ ret5 = (tmp)->next;
      /* 1122735*/ *(call_tmp15) = ret5;
    }
    /* 1276426*/ chpl_check_nil(this7, INT64(51), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1122700*/ ret6 = (this7)->first;
    /* 1122420*/ call_tmp16 = ((object)(ret6));
    /* 1122430*/ call_tmp17 = ((object)(tmp));
    /* 1094967*/ call_tmp18 = (call_tmp16 == call_tmp17);
    /* 565015*/ if (call_tmp18) /* 564994*/ {
      /* 1276422*/ chpl_check_nil(this7, INT64(52), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1122667*/ call_tmp19 = &((this7)->first);
      /* 1276434*/ chpl_check_nil(tmp, INT64(52), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1122792*/ ret7 = (tmp)->next;
      /* 1122741*/ *(call_tmp19) = ret7;
    }
    /* 1276438*/ chpl_check_nil(this7, INT64(53), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1122819*/ ret8 = (this7)->last;
    /* 1122440*/ call_tmp20 = ((object)(ret8));
    /* 1122450*/ call_tmp21 = ((object)(tmp));
    /* 1094977*/ call_tmp22 = (call_tmp20 == call_tmp21);
    /* 565053*/ if (call_tmp22) /* 565040*/ {
      /* 1276436*/ chpl_check_nil(this7, INT64(54), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1122806*/ call_tmp23 = &((this7)->last);
      /* 1122747*/ *(call_tmp23) = prev;
    }
    /* 565065*/ call_tmp24 = ((void*)(tmp));
    /* 565070*/ chpl_here_free(call_tmp24, _ln, _fn);
    /* 1276440*/ chpl_check_nil(this7, INT64(56), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1122833*/ call_tmp25 = &((this7)->length);
    /* 1116289*/ *(call_tmp25) -= INT64(1);
  }
  /* 565085*/ return;
}

/* List.chpl:41 */
/*  607421 */ static void remove4(_ref_list_BaseArr this7, BaseArr x, int64_t _ln, c_string _fn) {
  /*  607440 */ listNode_BaseArr tmp = NULL;
  /* 1124110 */ listNode_BaseArr ret = NULL;
  /*  607455 */ listNode_BaseArr prev = NULL;
  /*  607458 */ listNode_BaseArr type_tmp = NULL;
  /*  607485 */ chpl_bool T;
  /* 1130923 */ object call_tmp = NULL;
  /* 1130930 */ chpl_bool call_tmp2;
  /* 1130937 */ chpl_bool T2;
  /* 1130941 */ listNode_BaseArr T3 = NULL;
  /* 1130947 */ BaseArr ret2 = NULL;
  /* 1130954 */ object call_tmp3 = NULL;
  /* 1130961 */ object call_tmp4 = NULL;
  /* 1130968 */ chpl_bool call_tmp5;
  /* 1124593 */ listNode_BaseArr ret3 = NULL;
  /* 1130993 */ object call_tmp6 = NULL;
  /* 1131000 */ chpl_bool call_tmp7;
  /* 1131007 */ chpl_bool T4;
  /* 1131011 */ listNode_BaseArr T5 = NULL;
  /* 1131017 */ BaseArr ret4 = NULL;
  /* 1131024 */ object call_tmp8 = NULL;
  /* 1131031 */ object call_tmp9 = NULL;
  /* 1131038 */ chpl_bool call_tmp10;
  /* 1124293 */ object call_tmp11 = NULL;
  /* 1095185 */ chpl_bool call_tmp12;
  /* 1124303 */ object call_tmp13 = NULL;
  /* 1095195 */ chpl_bool call_tmp14;
  /* 1124570 */ _ref_listNode_BaseArr call_tmp15 = NULL;
  /* 1124603 */ listNode_BaseArr ret5 = NULL;
  /* 1124130 */ listNode_BaseArr ret6 = NULL;
  /* 1124313 */ object call_tmp16 = NULL;
  /* 1124323 */ object call_tmp17 = NULL;
  /* 1094985 */ chpl_bool call_tmp18;
  /* 1124087 */ _ref_listNode_BaseArr call_tmp19 = NULL;
  /* 1124613 */ listNode_BaseArr ret7 = NULL;
  /* 1129991 */ listNode_BaseArr ret8 = NULL;
  /* 1124333 */ object call_tmp20 = NULL;
  /* 1124343 */ object call_tmp21 = NULL;
  /* 1094995 */ chpl_bool call_tmp22;
  /* 1129948 */ _ref_listNode_BaseArr call_tmp23 = NULL;
  /*  607865 */ chpl_opaque call_tmp24;
  /* 1130131 */ _ref_int64_t call_tmp25 = NULL;
  /* 607439*/ /* 1276466*/ chpl_check_nil(this7, INT64(42), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
  /* 1124112*/ ret = (this7)->first;
  /* 607450*/ tmp = ret;
  /* 1124707*/ type_tmp = nil;
  /* 607482*/ prev = type_tmp;
  /* 1130925*/ call_tmp = ((object)(ret));
  /* 1130932*/ call_tmp2 = (call_tmp != nil);
  /* 1130982*/ if (call_tmp2) /* 1130940*/ {
    /* 1130943*/ T3 = ret;
    /* 1276802*/ chpl_check_nil(T3, INT64(44), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130949*/ ret2 = (T3)->data;
    /* 1130956*/ call_tmp3 = ((object)(ret2));
    /* 1130963*/ call_tmp4 = ((object)(x));
    /* 1130970*/ call_tmp5 = (call_tmp3 != call_tmp4);
    /* 1130975*/ T2 = call_tmp5;
  } else /* 1130978*/ {
    /* 1130979*/ T2 = false;
  }
  /* 607585*/ T = T2;
  /* 607590*/ while (T) {
    /* 1124713*/ prev = tmp;
    /* 1276488*/ chpl_check_nil(tmp, INT64(46), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1124595*/ ret3 = (tmp)->next;
    /* 1124719*/ tmp = ret3;
    /* 1130995*/ call_tmp6 = ((object)(ret3));
    /* 1131002*/ call_tmp7 = (call_tmp6 != nil);
    /* 1131052*/ if (call_tmp7) /* 1131010*/ {
      /* 1131013*/ T5 = ret3;
      /* 1276804*/ chpl_check_nil(T5, INT64(44), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1131019*/ ret4 = (T5)->data;
      /* 1131026*/ call_tmp8 = ((object)(ret4));
      /* 1131033*/ call_tmp9 = ((object)(x));
      /* 1131040*/ call_tmp10 = (call_tmp8 != call_tmp9);
      /* 1131045*/ T4 = call_tmp10;
    } else /* 1131048*/ {
      /* 1131049*/ T4 = false;
    }
    /* 607710*/ T = T4;
  }
  /* 1124295*/ call_tmp11 = ((object)(tmp));
  /* 1095187*/ call_tmp12 = (call_tmp11 != nil);
  /* 607886*/ if (call_tmp12) /* 607733*/ {
    /* 1124305*/ call_tmp13 = ((object)(prev));
    /* 1095197*/ call_tmp14 = (call_tmp13 != nil);
    /* 607771*/ if (call_tmp14) /* 607750*/ {
      /* 1276484*/ chpl_check_nil(prev, INT64(50), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1124572*/ call_tmp15 = &((prev)->next);
      /* 1276490*/ chpl_check_nil(tmp, INT64(50), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1124605*/ ret5 = (tmp)->next;
      /* 1124725*/ *(call_tmp15) = ret5;
    }
    /* 1276468*/ chpl_check_nil(this7, INT64(51), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1124132*/ ret6 = (this7)->first;
    /* 1124315*/ call_tmp16 = ((object)(ret6));
    /* 1124325*/ call_tmp17 = ((object)(tmp));
    /* 1094987*/ call_tmp18 = (call_tmp16 == call_tmp17);
    /* 607817*/ if (call_tmp18) /* 607796*/ {
      /* 1276462*/ chpl_check_nil(this7, INT64(52), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1124089*/ call_tmp19 = &((this7)->first);
      /* 1276492*/ chpl_check_nil(tmp, INT64(52), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1124615*/ ret7 = (tmp)->next;
      /* 1124731*/ *(call_tmp19) = ret7;
    }
    /* 1276712*/ chpl_check_nil(this7, INT64(53), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1129993*/ ret8 = (this7)->last;
    /* 1124335*/ call_tmp20 = ((object)(ret8));
    /* 1124345*/ call_tmp21 = ((object)(tmp));
    /* 1094997*/ call_tmp22 = (call_tmp20 == call_tmp21);
    /* 607855*/ if (call_tmp22) /* 607842*/ {
      /* 1276704*/ chpl_check_nil(this7, INT64(54), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
      /* 1129950*/ call_tmp23 = &((this7)->last);
      /* 1124737*/ *(call_tmp23) = prev;
    }
    /* 607867*/ call_tmp24 = ((void*)(tmp));
    /* 607872*/ chpl_here_free(call_tmp24, _ln, _fn);
    /* 1276732*/ chpl_check_nil(this7, INT64(56), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130133*/ call_tmp25 = &((this7)->length);
    /* 1116295*/ *(call_tmp25) -= INT64(1);
  }
  /* 607887*/ return;
}

/* List.chpl:68 */
/*  601964 */ static void append(_ref_list_BaseArr this7, BaseArr e, int64_t _ln, c_string _fn) {
  /* 1129961 */ listNode_BaseArr ret = NULL;
  /* 1124263 */ object call_tmp = NULL;
  /* 1095893 */ chpl_bool call_tmp2;
  /* 1129971 */ listNode_BaseArr ret2 = NULL;
  /*  604119 */ listNode_BaseArr coerce_tmp = NULL;
  /* 1124560 */ _ref_listNode_BaseArr call_tmp3 = NULL;
  /* 1130001 */ listNode_BaseArr this8 = NULL;
  /* 1130003 */ int64_t call_tmp4;
  /* 1130009 */ chpl_opaque cast_tmp;
  /* 1130036 */ listNode_BaseArr call_tmp5 = NULL;
  /* 1130047 */ listNode_BaseArr wrap_call_tmp = NULL;
  /* 1129928 */ _ref_listNode_BaseArr call_tmp6 = NULL;
  /* 1129981 */ listNode_BaseArr ret3 = NULL;
  /*  604273 */ listNode_BaseArr coerce_tmp2 = NULL;
  /* 1124583 */ listNode_BaseArr ret4 = NULL;
  /* 1124077 */ _ref_listNode_BaseArr call_tmp7 = NULL;
  /* 1130059 */ listNode_BaseArr this9 = NULL;
  /* 1130061 */ int64_t call_tmp8;
  /* 1130067 */ chpl_opaque cast_tmp2;
  /* 1130094 */ listNode_BaseArr call_tmp9 = NULL;
  /* 1130105 */ listNode_BaseArr wrap_call_tmp2 = NULL;
  /* 1129938 */ _ref_listNode_BaseArr call_tmp10 = NULL;
  /* 1124100 */ listNode_BaseArr ret5 = NULL;
  /* 1130121 */ _ref_int64_t call_tmp11 = NULL;
  /* 601982*/ /* 1276706*/ chpl_check_nil(this7, INT64(69), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
  /* 1129963*/ ret = (this7)->last;
  /* 1124265*/ call_tmp = ((object)(ret));
  /* 1095895*/ call_tmp2 = (call_tmp != nil);
  /* 602113*/ if (call_tmp2) /* 601999*/ {
    /* 1276708*/ chpl_check_nil(this7, INT64(70), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1129973*/ ret2 = (this7)->last;
    /* 604122*/ coerce_tmp = ret2;
    /* 1276482*/ chpl_check_nil(coerce_tmp, INT64(70), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1124562*/ call_tmp3 = &((coerce_tmp)->next);
    /* 1130005*/ call_tmp4 = sizeof(chpl_listNode_BaseArr_object);
    /* 1130011*/ cast_tmp = chpl_here_alloc(call_tmp4, INT16(2), _ln, _fn);
    /* 1130017*/ this8 = ((listNode_BaseArr)(cast_tmp));
    /* 1130022*/ ((object)(this8))->chpl__cid = chpl__cid_listNode_BaseArr;
    /* 1276714*/ chpl_check_nil(this8, INT64(70), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130024*/ (this8)->data = nil;
    /* 1276716*/ chpl_check_nil(this8, INT64(70), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130028*/ (this8)->next = nil;
    /* 1276718*/ chpl_check_nil(this8, INT64(70), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130032*/ (this8)->data = e;
    /* 1130038*/ call_tmp5 = ((listNode_BaseArr)(nil));
    /* 1276720*/ chpl_check_nil(this8, INT64(70), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130043*/ (this8)->next = call_tmp5;
    /* 1130049*/ wrap_call_tmp = _construct_listNode(e, call_tmp5, this8, _ln, _fn);
    /* 1124683*/ *(call_tmp3) = wrap_call_tmp;
    /* 1276700*/ chpl_check_nil(this7, INT64(71), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1129930*/ call_tmp6 = &((this7)->last);
    /* 1276710*/ chpl_check_nil(this7, INT64(71), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1129983*/ ret3 = (this7)->last;
    /* 604276*/ coerce_tmp2 = ret3;
    /* 1276486*/ chpl_check_nil(coerce_tmp2, INT64(71), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1124585*/ ret4 = (coerce_tmp2)->next;
    /* 1124689*/ *(call_tmp6) = ret4;
  } else /* 602064*/ {
    /* 1276460*/ chpl_check_nil(this7, INT64(73), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1124079*/ call_tmp7 = &((this7)->first);
    /* 1130063*/ call_tmp8 = sizeof(chpl_listNode_BaseArr_object);
    /* 1130069*/ cast_tmp2 = chpl_here_alloc(call_tmp8, INT16(2), _ln, _fn);
    /* 1130075*/ this9 = ((listNode_BaseArr)(cast_tmp2));
    /* 1130080*/ ((object)(this9))->chpl__cid = chpl__cid_listNode_BaseArr;
    /* 1276722*/ chpl_check_nil(this9, INT64(73), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130082*/ (this9)->data = nil;
    /* 1276724*/ chpl_check_nil(this9, INT64(73), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130086*/ (this9)->next = nil;
    /* 1276726*/ chpl_check_nil(this9, INT64(73), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130090*/ (this9)->data = e;
    /* 1130096*/ call_tmp9 = ((listNode_BaseArr)(nil));
    /* 1276728*/ chpl_check_nil(this9, INT64(73), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1130101*/ (this9)->next = call_tmp9;
    /* 1130107*/ wrap_call_tmp2 = _construct_listNode(e, call_tmp9, this9, _ln, _fn);
    /* 1124695*/ *(call_tmp7) = wrap_call_tmp2;
    /* 1276702*/ chpl_check_nil(this7, INT64(74), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1129940*/ call_tmp10 = &((this7)->last);
    /* 1276464*/ chpl_check_nil(this7, INT64(74), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
    /* 1124102*/ ret5 = (this7)->first;
    /* 1124701*/ *(call_tmp10) = ret5;
  }
  /* 1276730*/ chpl_check_nil(this7, INT64(76), "/export/home/hzhang86/chapel/chapel/modules/standard/List.chpl");
  /* 1130123*/ call_tmp11 = &((this7)->length);
  /* 1116229*/ *(call_tmp11) += INT64(1);
  /* 602126*/ return;
}

