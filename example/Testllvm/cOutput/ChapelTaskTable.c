/* ChapelTaskTable.chpl:23 */
/*  235332 */ static void chpl__init_ChapelTaskTable(int64_t _ln, c_string _fn) {
  /* 1274295 */ c_string modFormatStr;
  /* 1274296 */ c_string modStr;
  /* 1274312 */ _ref_int32_t refIndentLevel = NULL;
  /* 1149325 */ chpldev_taskTable_t call_tmp = NULL;
  /* 1149335 */ chpl_bool call_tmp2;
  /* 235333*/ /* 1274331*/ if (chpl__init_ChapelTaskTable_p) /* 1274332*/ {
    /* 1274328*/ goto _exit_chpl__init_ChapelTaskTable;
  }
  /* 1274304*/ modFormatStr = "%*s\n";
  /* 1274307*/ modStr = "ChapelTaskTable";
  /* 1274310*/ printModuleInit(modFormatStr, modStr, INT64(15), _ln, _fn);
  /* 1274316*/ refIndentLevel = &moduleInitLevel;
  /* 1274319*/ *(refIndentLevel) += INT64(1);
  /* 1274293*/ chpl__init_ChapelTaskTable_p = true;
  /* 1273268*/ {
    /* 1273269*/ chpl__init_ChapelBase(_ln, _fn);
    /* 1273271*/ chpl__init_ChapelIO(_ln, _fn);
    /* 1273273*/ chpl__init_ChapelArray(_ln, _fn);
    /* 1273275*/ chpl__init_DefaultRectangular(_ln, _fn);
    /* 1273277*/ chpl__init_DefaultAssociative(_ln, _fn);
  }
  /* 1149327*/ call_tmp = ((chpldev_taskTable_t)(nil));
  /* 299145*/ chpldev_taskTable = call_tmp;
  /* 1149337*/ call_tmp2 = (taskreport != INT32(0));
  /* 126814*/ if (call_tmp2) /* 126815*/ {
    /* 126810*/ chpldev_taskTable_init(_ln, _fn);
  }
  /* 1274322*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelTaskTable:;
  /* 280542*/ return;
}

/* ChapelTaskTable.chpl:65 */
/*  197479 */ static chpldev_Task _construct_chpldev_Task(taskState state, uint32_t lineno, c_string filename, uint64_t tl_info, chpldev_Task* const meme, int64_t _ln, c_string _fn) {
  /*  197481 */ chpldev_Task this7;
  /* 197480*/ /* 197490*/ this7 = *(meme);
  /* 197503*/ (&this7)->state = state;
  /* 197520*/ (&this7)->lineno = lineno;
  /* 197533*/ (&this7)->filename = filename;
  /* 197550*/ (&this7)->tl_info = tl_info;
  /* 197555*/ return this7;
}

/* ChapelTaskTable.chpl:65 */
/*  934094 */ static void chpl___ASSIGN_3(_ref_chpldev_Task _arg1, chpldev_Task* const _arg2, int64_t _ln, c_string _fn) {
  /* 1117804 */ _ref_taskState call_tmp = NULL;
  /* 1201143 */ taskState ret;
  /* 1117818 */ _ref_uint32_t call_tmp2 = NULL;
  /* 1201176 */ uint32_t ret2;
  /* 1117832 */ _ref_c_string call_tmp3 = NULL;
  /* 1201209 */ c_string ret3;
  /* 1117846 */ _ref_uint64_t call_tmp4 = NULL;
  /* 1201252 */ uint64_t ret4;
  /* 934108*/ /* 1276302*/ chpl_check_nil(_arg1, INT64(65), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1117806*/ call_tmp = &((_arg1)->state);
  /* 1201145*/ ret = (_arg2)->state;
  /* 1117774*/ *(call_tmp) = ret;
  /* 1276304*/ chpl_check_nil(_arg1, INT64(65), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1117820*/ call_tmp2 = &((_arg1)->lineno);
  /* 1201178*/ ret2 = (_arg2)->lineno;
  /* 1114661*/ *(call_tmp2) = ret2;
  /* 1276306*/ chpl_check_nil(_arg1, INT64(65), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1117834*/ call_tmp3 = &((_arg1)->filename);
  /* 1201211*/ ret3 = (_arg2)->filename;
  /* 1098181*/ *(call_tmp3) = ret3;
  /* 1276308*/ chpl_check_nil(_arg1, INT64(65), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1117848*/ call_tmp4 = &((_arg1)->tl_info);
  /* 1201254*/ ret4 = (_arg2)->tl_info;
  /* 1114703*/ *(call_tmp4) = ret4;
  /* 934189*/ return;
}

/* ChapelTaskTable.chpl:65 */
/*  439814 */ static chpldev_Task chpl__initCopy3(chpldev_Task* const x, int64_t _ln, c_string _fn) {
  /* 1201133 */ taskState ret;
  /* 1201166 */ uint32_t ret2;
  /* 1201199 */ c_string ret3;
  /* 1201242 */ uint64_t ret4;
  /* 1201082 */ chpldev_Task this7;
  /* 1201116 */ chpldev_Task wrap_call_tmp;
  /* 439815*/ /* 1201135*/ ret = (x)->state;
  /* 1201168*/ ret2 = (x)->lineno;
  /* 1201201*/ ret3 = (x)->filename;
  /* 1201244*/ ret4 = (x)->tl_info;
  /* 1201084*/ (&this7)->state = taskState_pending;
  /* 1201088*/ (&this7)->lineno = UINT32(0);
  /* 1201092*/ (&this7)->filename = "";
  /* 1201096*/ (&this7)->tl_info = UINT64(0);
  /* 1201100*/ (&this7)->state = ret;
  /* 1201104*/ (&this7)->lineno = ret2;
  /* 1201108*/ (&this7)->filename = ret3;
  /* 1201112*/ (&this7)->tl_info = ret4;
  /* 1201118*/ wrap_call_tmp = _construct_chpldev_Task(ret, ret2, ret3, ret4, &this7, _ln, _fn);
  /* 439846*/ return wrap_call_tmp;
}

/* ChapelTaskTable.chpl:72 */
/*  197588 */ static chpldev_taskTable_t _construct_chpldev_taskTable_t(DefaultAssociativeDom_chpl_taskID_t_F dom, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F map, chpldev_taskTable_t meme, int64_t _ln, c_string _fn) {
  /*  197590 */ chpldev_taskTable_t this7 = NULL;
  /*  197602 */ object T = NULL;
  /* 197589*/ /* 197597*/ this7 = meme;
  /* 1275232*/ chpl_check_nil(this7, INT64(72), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 197609*/ T = &((this7)->super);
  /* 197600*/ _construct_object(T);
  /* 1275234*/ chpl_check_nil(this7, INT64(73), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 197631*/ (this7)->dom = dom;
  /* 1275236*/ chpl_check_nil(this7, INT64(74), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 197654*/ (this7)->map = map;
  /* 197659*/ return this7;
}

/* ChapelTaskTable.chpl:72 */
/*  440082 */ static void chpl__auto_destroy_chpldev_taskTable_t(chpldev_taskTable_t this7, int64_t _ln, c_string _fn) {
  /* 1033473 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _field_destructor_tmp_ = NULL;
  /* 1033483 */ DefaultAssociativeDom_chpl_taskID_t_F _field_destructor_tmp_2 = NULL;
  /* 440083*/ /* 1275662*/ chpl_check_nil(this7, INT64(74), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1033478*/ _field_destructor_tmp_ = (this7)->map;
  /* 1033480*/ chpl__autoDestroy8(_field_destructor_tmp_, _ln, _fn);
  /* 1275664*/ chpl_check_nil(this7, INT64(73), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1033488*/ _field_destructor_tmp_2 = (this7)->dom;
  /* 1033490*/ chpl__autoDestroy3(_field_destructor_tmp_2, _ln, _fn);
  /* 440088*/ return;
}

/* ChapelTaskTable.chpl:83 */
/*  126724 */ static void chpldev_taskTable_init(int64_t _ln, c_string _fn) {
  /*  126744 */ chpl___EndCount _coforallCount = NULL;
  /* 1097191 */ chpl___EndCount this7 = NULL;
  /* 1097193 */ int64_t call_tmp;
  /* 1097199 */ chpl_opaque cast_tmp;
  /* 1097214 */ atomic_int64 _init_class_tmp_;
  /* 1097228 */ atomic_int64 this8;
  /* 1097230 */ atomic_int_least64_t ret;
  /* 1097232 */ atomic_int_least64_t type_tmp;
  /* 1097237 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1097251 */ atomic_int64 wrap_call_tmp;
  /* 1097267 */ chpl_task_list_p ret2;
  /* 1097276 */ chpl___EndCount wrap_call_tmp2 = NULL;
  /* 1149539 */ DefaultRectangularArr_locale_1_int64_t_F ret3 = NULL;
  /* 1246498 */ DefaultRectangularArr_locale_1_int64_t_F _ic__F0_this = NULL;
  /* 1061743 */ int64_t i;
  /* 1062018 */ DefaultRectangularArr_locale_1_int64_t_F this9 = NULL;
  /* 1125978 */ DefaultRectangularDom_1_int64_t_F ret4 = NULL;
  /* 1061772 */ int64_t call_tmp2;
  /* 1062025 */ DefaultRectangularArr_locale_1_int64_t_F this10 = NULL;
  /* 1140185 */ int64_t sum;
  /* 1265729 */ int64_t ret_x1;
  /* 1265733 */ _ref__tuple_1_star_int64_t ret_ = NULL;
  /* 1140216 */ int64_t call_tmp3;
  /* 1062032 */ DefaultRectangularArr_locale_1_int64_t_F this11 = NULL;
  /* 1125988 */ DefaultRectangularDom_1_int64_t_F ret5 = NULL;
  /* 1061818 */ int64_t call_tmp4;
  /* 1115544 */ int64_t call_tmp5;
  /* 1062039 */ DefaultRectangularArr_locale_1_int64_t_F this12 = NULL;
  /* 1140240 */ int64_t sum2;
  /* 1265764 */ int64_t ret_x12;
  /* 1265768 */ _ref__tuple_1_star_int64_t ret_2 = NULL;
  /* 1140271 */ int64_t call_tmp6;
  /* 1061857 */ int64_t step;
  /* 1104224 */ int64_t call_tmp7;
  /* 1061877 */ int64_t last;
  /* 1062046 */ DefaultRectangularArr_locale_1_int64_t_F this13 = NULL;
  /* 1125998 */ DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  /* 1061892 */ int64_t call_tmp8;
  /* 1104234 */ int64_t call_tmp9;
  /* 1111169 */ int64_t call_tmp10;
  /* 1115554 */ int64_t call_tmp11;
  /* 1062053 */ DefaultRectangularArr_locale_1_int64_t_F this14 = NULL;
  /* 1138237 */ _ddata_locale ret7 = NULL;
  /* 1061968 */ _ddata_locale coerce_tmp = NULL;
  /* 1139005 */ _ref_locale call_tmp12 = NULL;
  /* 1093988 */ chpl___EndCount rvfDerefTmp = NULL;
  /* 1094064 */ _class_localscoforall_fn3 _args_forcoforall_fn = NULL;
  /* 1094068 */ int64_t chpl_here_alloc_size;
  /* 1094073 */ chpl_opaque chpl_here_alloc_tmp;
  /* 1097883 */ chpl___EndCount delete_tmp = NULL;
  /* 1097888 */ _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  /* 1097895 */ _ref_atomic_int_least64_t call_tmp13 = NULL;
  /* 1097905 */ chpl_opaque call_tmp14;
  /* 126725*/ /* 1097195*/ call_tmp = sizeof(chpl_chpl___EndCount_object);
  /* 1097201*/ cast_tmp = chpl_here_alloc(call_tmp, INT16(15), _ln, _fn);
  /* 1097207*/ this7 = ((chpl___EndCount)(cast_tmp));
  /* 1097212*/ ((object)(this7))->chpl__cid = chpl__cid_chpl___EndCount;
  /* 1275870*/ chpl_check_nil(this7, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1097216*/ (this7)->i = _init_class_tmp_;
  /* 1275872*/ chpl_check_nil(this7, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1097220*/ (this7)->taskCnt = INT64(0);
  /* 1275874*/ chpl_check_nil(this7, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1097224*/ (this7)->taskList = NULL;
  /* 1097234*/ ret = type_tmp;
  /* 1097239*/ _ref_tmp_ = &ret;
  /* 1097244*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  /* 1097247*/ (&this8)->_v = ret;
  /* 1097253*/ wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
  /* 1275876*/ chpl_check_nil(this7, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1097259*/ (this7)->i = wrap_call_tmp;
  /* 1275878*/ chpl_check_nil(this7, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1097263*/ (this7)->taskCnt = INT64(0);
  /* 1097269*/ ret2 = NULL;
  /* 1275880*/ chpl_check_nil(this7, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1097272*/ (this7)->taskList = ret2;
  /* 1097278*/ wrap_call_tmp2 = _construct__EndCount(&wrap_call_tmp, INT64(0), ret2, this7, _ln, _fn);
  /* 126783*/ _coforallCount = wrap_call_tmp2;
  /* 1149541*/ ret3 = Locales;
  /* 1149623*/ _ic__F0_this = ret3;
  /* 1062023*/ this9 = ret3;
  /* 1276606*/ chpl_check_nil(this9, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1125980*/ ret4 = (this9)->dom;
  /* 1275756*/ chpl_check_nil(ret4, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1061780*/ call_tmp2 = dsiLow(ret4, _ln, _fn);
  /* 1062030*/ this10 = ret3;
  /* 1140187*/ sum = INT64(0);
  /* 1278356*/ chpl_check_nil(this10, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1265737*/ ret_ = &((this10)->blk);
  /* 1265742*/ ret_x1 = *(*(ret_) + INT64(0));
  /* 1140218*/ call_tmp3 = (call_tmp2 * ret_x1);
  /* 1140223*/ sum += call_tmp3;
  /* 1062037*/ this11 = ret3;
  /* 1276608*/ chpl_check_nil(this11, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1125990*/ ret5 = (this11)->dom;
  /* 1275758*/ chpl_check_nil(ret5, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1061826*/ call_tmp4 = dsiLow(ret5, _ln, _fn);
  /* 1115546*/ call_tmp5 = (call_tmp4 + INT64(1));
  /* 1062044*/ this12 = ret3;
  /* 1140242*/ sum2 = INT64(0);
  /* 1278358*/ chpl_check_nil(this12, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1265772*/ ret_2 = &((this12)->blk);
  /* 1265777*/ ret_x12 = *(*(ret_2) + INT64(0));
  /* 1140273*/ call_tmp6 = (call_tmp5 * ret_x12);
  /* 1140278*/ sum2 += call_tmp6;
  /* 1104226*/ call_tmp7 = (sum2 - sum);
  /* 1061872*/ step = call_tmp7;
  /* 1062051*/ this13 = ret3;
  /* 1276610*/ chpl_check_nil(this13, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1126000*/ ret6 = (this13)->dom;
  /* 1275760*/ chpl_check_nil(ret6, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1061900*/ call_tmp8 = dsiNumIndices(ret6, _ln, _fn);
  /* 1104236*/ call_tmp9 = (call_tmp8 - INT64(1));
  /* 1111171*/ call_tmp10 = (call_tmp9 * call_tmp7);
  /* 1115556*/ call_tmp11 = (sum + call_tmp10);
  /* 1061934*/ last = call_tmp11;
  /* 1061937*/ for (i = sum; ((i <= last)); i += step) {
    /* 1062058*/ this14 = _ic__F0_this;
    /* 1277044*/ chpl_check_nil(this14, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1138239*/ ret7 = (this14)->shiftedData;
    /* 1061970*/ coerce_tmp = ret7;
    /* 1139007*/ call_tmp12 = (coerce_tmp + i);
    /* 1061995*/ _upEndCount(_coforallCount, _ln, _fn);
    /* 1093992*/ rvfDerefTmp = _coforallCount;
    /* 1094071*/ chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn3_object);
    /* 1094078*/ chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36), _ln, _fn);
    /* 1094083*/ _args_forcoforall_fn = ((_class_localscoforall_fn3)(chpl_here_alloc_tmp));
    /* 1275810*/ chpl_check_nil(_args_forcoforall_fn, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1094087*/ (_args_forcoforall_fn)->_0_loc = call_tmp12;
    /* 1275812*/ chpl_check_nil(_args_forcoforall_fn, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1094091*/ (_args_forcoforall_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /* 1305276*/ (_args_forcoforall_fn)->_ln = _ln;
    /* 1305279*/ (_args_forcoforall_fn)->_fn = _fn;
    /* 1094124*/ /*** wrapcoforall_fn3 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(2), ((void*)(_args_forcoforall_fn)), &(((_args_forcoforall_fn)->_1_rvfDerefTmp)->taskList), chpl_nodeID, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  }
  /* 126786*/ chpl_taskListProcess((_coforallCount)->taskList, _ln, _fn);
  /* 126791*/ _waitEndCount(_coforallCount, _ln, _fn);
  /* 1097885*/ delete_tmp = _coforallCount;
  /* 1275912*/ chpl_check_nil(delete_tmp, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1097890*/ _field_destructor_tmp_ = &((delete_tmp)->i);
  /* 1275914*/ chpl_check_nil(_field_destructor_tmp_, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1097897*/ call_tmp13 = &((_field_destructor_tmp_)->_v);
  /* 1097903*/ atomic_destroy_int_least64_t(call_tmp13);
  /* 1097907*/ call_tmp14 = ((void*)(delete_tmp));
  /* 1097912*/ chpl_here_free(call_tmp14, _ln, _fn);
  /* 280496*/ return;
}

/* ChapelTaskTable.chpl:87 */
/*  461001 */ static void coforall_fn3(_ref_locale loc, chpl___EndCount _coforallCount, int64_t _ln, c_string _fn) {
  /* 1149663 */ chpldev_taskTable_t this7 = NULL;
  /* 1149665 */ int64_t call_tmp;
  /* 1149671 */ chpl_opaque cast_tmp;
  /* 1149686 */ DefaultAssociativeDom_chpl_taskID_t_F _init_class_tmp_ = NULL;
  /* 1149700 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _init_class_tmp_2 = NULL;
  /* 1149714 */ DefaultAssociativeDom_chpl_taskID_t_F default_argdom = NULL;
  /* 1149716 */ chpl___RuntimeTypeInfo2 call_tmp2;
  /* 1149723 */ DefaultDist _runtime_type_tmp_ = NULL;
  /* 1149730 */ _ref_DefaultAssociativeDom_chpl_taskID_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1149744 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F default_argmap = NULL;
  /* 1149746 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  /* 1149748 */ _ref_DefaultAssociativeDom_chpl_taskID_t_F ret_to_arg_ref_tmp_2 = NULL;
  /* 1149758 */ chpl___RuntimeTypeInfo6 call_tmp4;
  /* 1149765 */ DefaultAssociativeDom_chpl_taskID_t_F _runtime_type_tmp_2 = NULL;
  /* 1149772 */ _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret_to_arg_ref_tmp_3 = NULL;
  /* 1149786 */ chpldev_taskTable_t wrap_call_tmp = NULL;
  /* 461002*/ /* 1149667*/ call_tmp = sizeof(chpl_chpldev_taskTable_t_object);
  /* 1149673*/ cast_tmp = chpl_here_alloc(call_tmp, INT16(27), _ln, _fn);
  /* 1149679*/ this7 = ((chpldev_taskTable_t)(cast_tmp));
  /* 1149684*/ ((object)(this7))->chpl__cid = chpl__cid_chpldev_taskTable_t;
  /* 1149688*/ _init_class_tmp_ = nil;
  /* 1277624*/ chpl_check_nil(this7, INT64(88), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1149696*/ (this7)->dom = _init_class_tmp_;
  /* 1149702*/ _init_class_tmp_2 = nil;
  /* 1277626*/ chpl_check_nil(this7, INT64(88), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1149710*/ (this7)->map = _init_class_tmp_2;
  /* 1149718*/ call_tmp2 = chpl__buildDomainRuntimeType2(defaultDist, _ln, _fn);
  /* 1149725*/ _runtime_type_tmp_ = (&call_tmp2)->d;
  /* 1149732*/ ret_to_arg_ref_tmp_ = &default_argdom;
  /* 1149737*/ chpl__convertRuntimeTypeToValue2(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1277628*/ chpl_check_nil(this7, INT64(88), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1149740*/ (this7)->dom = default_argdom;
  /* 1149750*/ ret_to_arg_ref_tmp_2 = &call_tmp3;
  /* 1149755*/ chpl__ensureDomainExpr2(default_argdom, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1149760*/ call_tmp4 = chpl__buildArrayRuntimeType4(call_tmp3, _ln, _fn);
  /* 1149767*/ _runtime_type_tmp_2 = (&call_tmp4)->dom;
  /* 1149774*/ ret_to_arg_ref_tmp_3 = &default_argmap;
  /* 1149779*/ chpl__convertRuntimeTypeToValue7(_runtime_type_tmp_2, ret_to_arg_ref_tmp_3, _ln, _fn);
  /* 1277630*/ chpl_check_nil(this7, INT64(88), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1149782*/ (this7)->map = default_argmap;
  /* 1149788*/ wrap_call_tmp = _construct_chpldev_taskTable_t(default_argdom, default_argmap, this7, _ln, _fn);
  /* 1149796*/ chpl__autoDestroy3(call_tmp3, _ln, _fn);
  /* 1149801*/ chpldev_taskTable = wrap_call_tmp;
  /* 126747*/ _downEndCount(_coforallCount, _ln, _fn);
  /* 461006*/ return;
}

/* ChapelTaskTable.chpl:87 */
/* 1094095 */ static void wrapcoforall_fn3(_class_localscoforall_fn3 c) {
  /* 1305262 */ int64_t _ln;
  /* 1305261 */ c_string _fn;
  /* 1094102 */ _ref_locale _0_loc = NULL;
  /* 1094110 */ chpl___EndCount _1_rvfDerefTmp = NULL;
  /* 1094096*/ /* 1305269*/ _ln = (c)->_ln;
  /* 1305263*/ _fn = (c)->_fn;
  /* 1275814*/ chpl_check_nil(c, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1094107*/ _0_loc = (c)->_0_loc;
  /* 1275816*/ chpl_check_nil(c, INT64(87), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1094115*/ _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  /* 1094100*/ coforall_fn3(_0_loc, _1_rvfDerefTmp, _ln, _fn);
  /* 1094120*/ chpl_here_free(((void*)(c)), _ln, _fn);
  /* 1094122*/ return;
}

/* ChapelTaskTable.chpl:111 */
/*  126823 */ void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, c_string filename, uint64_t tl_info, int64_t _ln, c_string _fn) {
  /* 1110639 */ object call_tmp = NULL;
  /* 1094905 */ chpl_bool call_tmp2;
  /* 1110699 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  /*  381072 */ chpl_bool call_tmp4;
  /* 1095354 */ chpl_bool call_tmp5;
  /*  381087 */ chpl_bool call_tmp6;
  /* 1110709 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp7 = NULL;
  /* 1118003 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp8 = NULL;
  /*  926768 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp = NULL;
  /* 1198588 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  /* 1198602 */ _ref_chpldev_Task wrap_call_tmp = NULL;
  /* 1201034 */ chpldev_Task this7;
  /* 1201068 */ chpldev_Task wrap_call_tmp2;
  /* 126824*/ /* 1110641*/ call_tmp = ((object)(chpldev_taskTable));
  /* 1094907*/ call_tmp2 = (call_tmp == nil);
  /* 126852*/ if (call_tmp2) /* 126853*/ {
    /* 280502*/ goto _end_chpldev_taskTable_add;
  }
  /* 1275986*/ chpl_check_nil(chpldev_taskTable, INT64(118), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1110701*/ call_tmp3 = (chpldev_taskTable)->dom;
  /* 1275134*/ chpl_check_nil(call_tmp3, INT64(118), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 381075*/ call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
  /* 1095356*/ call_tmp5 = (! call_tmp4);
  /* 126894*/ if (call_tmp5) /* 126882*/ {
    /* 381090*/ call_tmp6 = chpl_task_getSerial();
    /* 126886*/ chpl_task_setSerial(true);
    /* 1275988*/ chpl_check_nil(chpldev_taskTable, INT64(123), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110711*/ call_tmp7 = (chpldev_taskTable)->dom;
    /* 1275136*/ chpl_check_nil(call_tmp7, INT64(123), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 126878*/ add(call_tmp7, taskID, _ln, _fn);
    /* 126890*/ chpl_task_setSerial(call_tmp6);
  }
  /* 1276310*/ chpl_check_nil(chpldev_taskTable, INT64(125), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1118005*/ call_tmp8 = (chpldev_taskTable)->map;
  /* 926771*/ coerce_tmp = call_tmp8;
  /* 1198590*/ ret = coerce_tmp;
  /* 1277970*/ chpl_check_nil(ret, INT64(125), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1198604*/ wrap_call_tmp = dsiAccess(ret, taskID, false, _ln, _fn);
  /* 1201036*/ (&this7)->state = taskState_pending;
  /* 1201040*/ (&this7)->lineno = UINT32(0);
  /* 1201044*/ (&this7)->filename = "";
  /* 1201048*/ (&this7)->tl_info = UINT64(0);
  /* 1201052*/ (&this7)->state = taskState_pending;
  /* 1201056*/ (&this7)->lineno = lineno;
  /* 1201060*/ (&this7)->filename = filename;
  /* 1201064*/ (&this7)->tl_info = tl_info;
  /* 1201070*/ wrap_call_tmp2 = _construct_chpldev_Task(taskState_pending, lineno, filename, tl_info, &this7, _ln, _fn);
  /* 126918*/ chpl___ASSIGN_3(wrap_call_tmp, &wrap_call_tmp2, _ln, _fn);
  _end_chpldev_taskTable_add:;
  /* 280500*/ return;
}

/* ChapelTaskTable.chpl:129 */
/*  126929 */ void chpldev_taskTable_remove(chpl_taskID_t taskID, int64_t _ln, c_string _fn) {
  /* 1110779 */ object call_tmp = NULL;
  /* 1110786 */ chpl_bool call_tmp2;
  /* 1110793 */ chpl_bool T;
  /* 1110801 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  /* 1110808 */ chpl_bool call_tmp4;
  /* 1110816 */ chpl_bool call_tmp5;
  /*  381172 */ chpl_bool call_tmp6;
  /* 1110729 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp7 = NULL;
  /* 126930*/ /* 1110781*/ call_tmp = ((object)(chpldev_taskTable));
  /* 1110788*/ call_tmp2 = (call_tmp == nil);
  /* 1110825*/ if (call_tmp2) /* 1110796*/ {
    /* 1110797*/ T = true;
  } else /* 1110800*/ {
    /* 1275994*/ chpl_check_nil(chpldev_taskTable, INT64(131), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110803*/ call_tmp3 = (chpldev_taskTable)->dom;
    /* 1275996*/ chpl_check_nil(call_tmp3, INT64(131), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110810*/ call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
    /* 1110818*/ call_tmp5 = (! call_tmp4);
    /* 1110822*/ T = call_tmp5;
  }
  /* 126998*/ if (T) /* 126999*/ {
    /* 280508*/ goto _end_chpldev_taskTable_remove;
  }
  /* 381175*/ call_tmp6 = chpl_task_getSerial();
  /* 127020*/ chpl_task_setSerial(true);
  /* 1275990*/ chpl_check_nil(chpldev_taskTable, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1110731*/ call_tmp7 = (chpldev_taskTable)->dom;
  /* 1275138*/ chpl_check_nil(call_tmp7, INT64(138), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 127012*/ remove2(call_tmp7, taskID, _ln, _fn);
  /* 127024*/ chpl_task_setSerial(call_tmp6);
  _end_chpldev_taskTable_remove:;
  /* 280506*/ return;
}

/* ChapelTaskTable.chpl:141 */
/*  127034 */ void chpldev_taskTable_set_active(chpl_taskID_t taskID, int64_t _ln, c_string _fn) {
  /* 1110829 */ object call_tmp = NULL;
  /* 1110836 */ chpl_bool call_tmp2;
  /* 1110843 */ chpl_bool T;
  /* 1110851 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  /* 1110858 */ chpl_bool call_tmp4;
  /* 1110866 */ chpl_bool call_tmp5;
  /* 1118013 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp6 = NULL;
  /*  935317 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp = NULL;
  /* 1198625 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  /* 1198639 */ _ref_chpldev_Task wrap_call_tmp = NULL;
  /* 1117784 */ _ref_taskState call_tmp7 = NULL;
  /* 127035*/ /* 1110831*/ call_tmp = ((object)(chpldev_taskTable));
  /* 1110838*/ call_tmp2 = (call_tmp == nil);
  /* 1110875*/ if (call_tmp2) /* 1110846*/ {
    /* 1110847*/ T = true;
  } else /* 1110850*/ {
    /* 1275998*/ chpl_check_nil(chpldev_taskTable, INT64(143), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110853*/ call_tmp3 = (chpldev_taskTable)->dom;
    /* 1276000*/ chpl_check_nil(call_tmp3, INT64(143), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110860*/ call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
    /* 1110868*/ call_tmp5 = (! call_tmp4);
    /* 1110872*/ T = call_tmp5;
  }
  /* 127103*/ if (T) /* 127104*/ {
    /* 280514*/ goto _end_chpldev_taskTable_set_active;
  }
  /* 1276312*/ chpl_check_nil(chpldev_taskTable, INT64(146), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1118015*/ call_tmp6 = (chpldev_taskTable)->map;
  /* 935320*/ coerce_tmp = call_tmp6;
  /* 1198627*/ ret = coerce_tmp;
  /* 1277972*/ chpl_check_nil(ret, INT64(146), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1198641*/ wrap_call_tmp = dsiAccess(ret, taskID, false, _ln, _fn);
  /* 1276298*/ chpl_check_nil(wrap_call_tmp, INT64(146), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1117786*/ call_tmp7 = &((wrap_call_tmp)->state);
  /* 1117762*/ *(call_tmp7) = taskState_active;
  _end_chpldev_taskTable_set_active:;
  /* 280512*/ return;
}

/* ChapelTaskTable.chpl:149 */
/*  127136 */ void chpldev_taskTable_set_suspended(chpl_taskID_t taskID, int64_t _ln, c_string _fn) {
  /* 1110879 */ object call_tmp = NULL;
  /* 1110886 */ chpl_bool call_tmp2;
  /* 1110893 */ chpl_bool T;
  /* 1110901 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  /* 1110908 */ chpl_bool call_tmp4;
  /* 1110916 */ chpl_bool call_tmp5;
  /* 1118023 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp6 = NULL;
  /*  935361 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp = NULL;
  /* 1198662 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = NULL;
  /* 1198676 */ _ref_chpldev_Task wrap_call_tmp = NULL;
  /* 1117794 */ _ref_taskState call_tmp7 = NULL;
  /* 127137*/ /* 1110881*/ call_tmp = ((object)(chpldev_taskTable));
  /* 1110888*/ call_tmp2 = (call_tmp == nil);
  /* 1110925*/ if (call_tmp2) /* 1110896*/ {
    /* 1110897*/ T = true;
  } else /* 1110900*/ {
    /* 1276002*/ chpl_check_nil(chpldev_taskTable, INT64(151), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110903*/ call_tmp3 = (chpldev_taskTable)->dom;
    /* 1276004*/ chpl_check_nil(call_tmp3, INT64(151), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110910*/ call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
    /* 1110918*/ call_tmp5 = (! call_tmp4);
    /* 1110922*/ T = call_tmp5;
  }
  /* 127205*/ if (T) /* 127206*/ {
    /* 280520*/ goto _end_chpldev_taskTable_set_suspended;
  }
  /* 1276314*/ chpl_check_nil(chpldev_taskTable, INT64(154), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1118025*/ call_tmp6 = (chpldev_taskTable)->map;
  /* 935364*/ coerce_tmp = call_tmp6;
  /* 1198664*/ ret = coerce_tmp;
  /* 1277974*/ chpl_check_nil(ret, INT64(154), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1198678*/ wrap_call_tmp = dsiAccess(ret, taskID, false, _ln, _fn);
  /* 1276300*/ chpl_check_nil(wrap_call_tmp, INT64(154), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1117796*/ call_tmp7 = &((wrap_call_tmp)->state);
  /* 1117768*/ *(call_tmp7) = taskState_suspended;
  _end_chpldev_taskTable_set_suspended:;
  /* 280518*/ return;
}

/* ChapelTaskTable.chpl:157 */
/*  127236 */ uint64_t chpldev_taskTable_get_tl_info(chpl_taskID_t taskID, int64_t _ln, c_string _fn) {
  /*  280524 */ uint64_t ret;
  /* 1110929 */ object call_tmp = NULL;
  /* 1110936 */ chpl_bool call_tmp2;
  /* 1110943 */ chpl_bool T;
  /* 1110951 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  /* 1110958 */ chpl_bool call_tmp4;
  /* 1110966 */ chpl_bool call_tmp5;
  /* 1118033 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp6 = NULL;
  /*  935407 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp = NULL;
  /* 1198699 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret2 = NULL;
  /* 1198713 */ _ref_chpldev_Task wrap_call_tmp = NULL;
  /* 1201232 */ uint64_t ret3;
  /* 127237*/ /* 1110931*/ call_tmp = ((object)(chpldev_taskTable));
  /* 1110938*/ call_tmp2 = (call_tmp == nil);
  /* 1110975*/ if (call_tmp2) /* 1110946*/ {
    /* 1110947*/ T = true;
  } else /* 1110950*/ {
    /* 1276006*/ chpl_check_nil(chpldev_taskTable, INT64(159), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110953*/ call_tmp3 = (chpldev_taskTable)->dom;
    /* 1276008*/ chpl_check_nil(call_tmp3, INT64(159), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1110960*/ call_tmp4 = member2(call_tmp3, taskID, _ln, _fn);
    /* 1110968*/ call_tmp5 = (! call_tmp4);
    /* 1110972*/ T = call_tmp5;
  }
  /* 127311*/ if (T) /* 127312*/ {
    /* 280529*/ ret = UINT64(0);
    /* 280531*/ goto _end_chpldev_taskTable_get_tl_info;
  }
  /* 1276316*/ chpl_check_nil(chpldev_taskTable, INT64(162), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1118035*/ call_tmp6 = (chpldev_taskTable)->map;
  /* 935410*/ coerce_tmp = call_tmp6;
  /* 1198701*/ ret2 = coerce_tmp;
  /* 1277976*/ chpl_check_nil(ret2, INT64(162), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1198715*/ wrap_call_tmp = dsiAccess(ret2, taskID, false, _ln, _fn);
  /* 1278038*/ chpl_check_nil(wrap_call_tmp, INT64(162), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1201234*/ ret3 = (wrap_call_tmp)->tl_info;
  /* 280534*/ ret = ret3;
  _end_chpldev_taskTable_get_tl_info:;
  /* 280526*/ return ret;
}

/* ChapelTaskTable.chpl:165 */
/*  127333 */ void chpldev_taskTable_print(int64_t _ln, c_string _fn) {
  /* 1272309 */ channel_T_dynamic_T local_stderr;
  /* 1110689 */ object call_tmp = NULL;
  /* 1094955 */ chpl_bool call_tmp2;
  /* 1110769 */ DefaultAssociativeDom_chpl_taskID_t_F call_tmp3 = NULL;
  /*  935461 */ DefaultAssociativeDom_chpl_taskID_t_F coerce_tmp = NULL;
  /* 1201452 */ DefaultAssociativeDom_chpl_taskID_t_F ret = NULL;
  /* 1244951 */ DefaultAssociativeDom_chpl_taskID_t_F _ic__F0_this = NULL;
  /* 1245361 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp_F1_tab = NULL;
  /* 1062314 */ DefaultAssociativeDom_chpl_taskID_t_F this7 = NULL;
  /* 1244609 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp4 = NULL;
  /* 1244644 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F T = NULL;
  /* 1245319 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _ic__F1_tab = NULL;
  /* 1073561 */ DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  /* 1073565 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /* 1133037 */ DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  /* 1133059 */ _tuple_1_star_int64_t default_argoffset;
  /* 1133061 */ _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
  /* 1073593 */ DefaultRectangularDom_1_int64_t_F this8 = NULL;
  /* 1259215 */ range_int64_t_bounded_F ret_x1;
  /* 1259219 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  /* 1263667 */ range_int64_t_bounded_F _ic__F0_this2;
  /* 1073632 */ _ref_range_int64_t_bounded_F this9 = NULL;
  /* 1073644 */ int64_t i;
  /* 1128776 */ int64_t ret3;
  /* 1073684 */ int64_t end;
  /* 1129117 */ int64_t ret4;
  /* 1074056 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F tab = NULL;
  /* 1161430 */ _tuple_1_star_int64_t i2;
  /* 1161432 */ _tuple_1_star_int64_t this10;
  /* 1161441 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp6 = NULL;
  /* 1161443 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret5 = NULL;
  /* 1161453 */ DefaultRectangularDom_1_int64_t_F ret6 = NULL;
  /* 1161460 */ chpl_bool call_tmp7;
  /* 1161468 */ chpl_bool call_tmp8;
  /* 1161476 */ chpl_string call_tmp9;
  /* 1161489 */ int64_t sum;
  /* 1266220 */ int64_t ret_x12;
  /* 1266224 */ _ref__tuple_1_star_int64_t ret_2 = NULL;
  /* 1161506 */ int64_t coerce_tmp2;
  /* 1161520 */ int64_t call_tmp10;
  /* 1161530 */ _ddata_chpl_TableEntry_chpl_taskID_t ret7 = NULL;
  /* 1161537 */ _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp3 = NULL;
  /* 1161542 */ _ref_chpl_TableEntry_chpl_taskID_t call_tmp11 = NULL;
  /* 1162238 */ chpl__hash_status ret8;
  /* 1162454 */ int64_t call_tmp12;
  /* 1162464 */ int64_t call_tmp13;
  /* 1100971 */ chpl_bool call_tmp14;
  /* 1073840 */ DefaultAssociativeDom_chpl_taskID_t_F this11 = NULL;
  /* 1159161 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp15 = NULL;
  /* 1073852 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F coerce_tmp4 = NULL;
  /* 1161552 */ _tuple_1_star_int64_t i3;
  /* 1161554 */ _tuple_1_star_int64_t this12;
  /* 1161563 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F call_tmp16 = NULL;
  /* 1161565 */ DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret9 = NULL;
  /* 1161575 */ DefaultRectangularDom_1_int64_t_F ret10 = NULL;
  /* 1161582 */ chpl_bool call_tmp17;
  /* 1161590 */ chpl_bool call_tmp18;
  /* 1161598 */ chpl_string call_tmp19;
  /* 1161611 */ int64_t sum2;
  /* 1266243 */ int64_t ret_x13;
  /* 1266247 */ _ref__tuple_1_star_int64_t ret_3 = NULL;
  /* 1161628 */ int64_t coerce_tmp5;
  /* 1161642 */ int64_t call_tmp20;
  /* 1161652 */ _ddata_chpl_TableEntry_chpl_taskID_t ret11 = NULL;
  /* 1161659 */ _ddata_chpl_TableEntry_chpl_taskID_t coerce_tmp6 = NULL;
  /* 1161664 */ _ref_chpl_TableEntry_chpl_taskID_t call_tmp21 = NULL;
  /* 1162653 */ chpl_taskID_t ret12;
  /* 1118043 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp22 = NULL;
  /* 1073898 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp7 = NULL;
  /* 1198736 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret13 = NULL;
  /* 1198750 */ _ref_chpldev_Task wrap_call_tmp = NULL;
  /* 1201219 */ c_string ret14;
  /* 1118053 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp23 = NULL;
  /* 1073931 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp8 = NULL;
  /* 1198773 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret15 = NULL;
  /* 1198787 */ _ref_chpldev_Task wrap_call_tmp2 = NULL;
  /* 1201186 */ uint32_t ret16;
  /* 1118063 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F call_tmp24 = NULL;
  /* 1073964 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F coerce_tmp9 = NULL;
  /* 1198810 */ DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret17 = NULL;
  /* 1198824 */ _ref_chpldev_Task wrap_call_tmp3 = NULL;
  /* 1201153 */ taskState ret18;
  /* 1105349 */ chpl_string call_tmp25;
  /* 1105365 */ chpl_string call_tmp26;
  /* 1105381 */ chpl_string call_tmp27;
  /* 1074029 */ _ref_channel_T_dynamic_T _ref_tmp_ = NULL;
  /* 127334*/ /* 1272310*/ local_stderr = stderr2;
  /* 1110691*/ call_tmp = ((object)(chpldev_taskTable));
  /* 1094957*/ call_tmp2 = (call_tmp == nil);
  /* 127344*/ if (call_tmp2) /* 127345*/ {
    /* 280540*/ goto _end_chpldev_taskTable_print;
  }
  /* 1275992*/ chpl_check_nil(chpldev_taskTable, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1110771*/ call_tmp3 = (chpldev_taskTable)->dom;
  /* 935464*/ coerce_tmp = call_tmp3;
  /* 1201454*/ ret = coerce_tmp;
  /* 1201507*/ _ic__F0_this = ret;
  /* 1062319*/ this7 = ret;
  /* 1278210*/ chpl_check_nil(this7, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1244611*/ call_tmp4 = (this7)->table;
  /* 1244651*/ T = chpl__autoCopy6(call_tmp4, _ln, _fn);
  /* 1245372*/ call_tmp_F1_tab = T;
  /* 1198222*/ _ic__F1_tab = T;
  /* 1073567*/ ret_to_arg_ref_tmp_ = &call_tmp5;
  /* 1275806*/ chpl_check_nil(T, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1073572*/ _dom2(T, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1133039*/ ret2 = call_tmp5;
  /* 1133063*/ ret_to_arg_ref_tmp_2 = &default_argoffset;
  /* 1133068*/ createTuple(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 1073595*/ this8 = ret2;
  /* 1278260*/ chpl_check_nil(this8, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
  /* 1259223*/ ret_ = &((this8)->ranges);
  /* 1259228*/ ret_x1 = *(*(ret_) + INT64(0));
  /* 1128066*/ _ic__F0_this2 = ret_x1;
  /* 1073634*/ this9 = &_ic__F0_this2;
  /* 1128476*/ checkIfIterWillOverflow(this9, true, _ln, _fn);
  /* 1128778*/ ret3 = (&_ic__F0_this2)->_low;
  /* 1129119*/ ret4 = (&_ic__F0_this2)->_high;
  /* 1073705*/ end = ret4;
  /* 1073708*/ for (i = ret3; ((i <= end)); i += INT64(1)) {
    /* 1074061*/ tab = _ic__F1_tab;
    /* 1161434*/ *(this10 + INT64(0)) = i;
    /* 1161438*/ *(i2 + INT64(0)) = *(this10 + INT64(0));
    /* 1161445*/ ret5 = tab;
    /* 1161450*/ call_tmp6 = ret5;
    /* 1277760*/ chpl_check_nil(call_tmp6, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1161455*/ ret6 = (call_tmp6)->dom;
    /* 1277762*/ chpl_check_nil(ret6, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1161462*/ call_tmp7 = dsiMember2(ret6, &this10, _ln, _fn);
    /* 1161470*/ call_tmp8 = (! call_tmp7);
    /* 1161488*/ if (call_tmp8) /* 1161475*/ {
      /* 1161478*/ string_from_c_string(&call_tmp9, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
      /* 1161485*/ halt2(call_tmp9, &this10, _ln, _fn);
    }
    /* 1161491*/ sum = INT64(0);
    /* 1278406*/ chpl_check_nil(call_tmp6, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1266228*/ ret_2 = &((call_tmp6)->blk);
    /* 1266233*/ ret_x12 = *(*(ret_2) + INT64(0));
    /* 1161508*/ coerce_tmp2 = *(i2 + INT64(0));
    /* 1161522*/ call_tmp10 = (coerce_tmp2 * ret_x12);
    /* 1161527*/ sum += call_tmp10;
    /* 1277764*/ chpl_check_nil(call_tmp6, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1161532*/ ret7 = (call_tmp6)->shiftedData;
    /* 1161539*/ coerce_tmp3 = ret7;
    /* 1161544*/ call_tmp11 = (coerce_tmp3 + sum);
    /* 1277804*/ chpl_check_nil(call_tmp11, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
    /* 1162240*/ ret8 = (call_tmp11)->status;
    /* 1162456*/ call_tmp12 = ((int64_t)(ret8));
    /* 1162466*/ call_tmp13 = ((int64_t)(chpl__hash_status_full));
    /* 1100973*/ call_tmp14 = (call_tmp12 == call_tmp13);
    /* 1073815*/ if (call_tmp14) /* 1073807*/ {
      /* 1073842*/ this11 = _ic__F0_this;
      /* 1277692*/ chpl_check_nil(this11, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1159163*/ call_tmp15 = (this11)->table;
      /* 1073854*/ coerce_tmp4 = call_tmp15;
      /* 1161556*/ *(this12 + INT64(0)) = i;
      /* 1161560*/ *(i3 + INT64(0)) = *(this12 + INT64(0));
      /* 1161567*/ ret9 = coerce_tmp4;
      /* 1161572*/ call_tmp16 = ret9;
      /* 1277766*/ chpl_check_nil(call_tmp16, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1161577*/ ret10 = (call_tmp16)->dom;
      /* 1277768*/ chpl_check_nil(ret10, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1161584*/ call_tmp17 = dsiMember2(ret10, &this12, _ln, _fn);
      /* 1161592*/ call_tmp18 = (! call_tmp17);
      /* 1161610*/ if (call_tmp18) /* 1161597*/ {
        /* 1161600*/ string_from_c_string(&call_tmp19, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
        /* 1161607*/ halt2(call_tmp19, &this12, _ln, _fn);
      }
      /* 1161613*/ sum2 = INT64(0);
      /* 1278408*/ chpl_check_nil(call_tmp16, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1266251*/ ret_3 = &((call_tmp16)->blk);
      /* 1266256*/ ret_x13 = *(*(ret_3) + INT64(0));
      /* 1161630*/ coerce_tmp5 = *(i3 + INT64(0));
      /* 1161644*/ call_tmp20 = (coerce_tmp5 * ret_x13);
      /* 1161649*/ sum2 += call_tmp20;
      /* 1277770*/ chpl_check_nil(call_tmp16, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1161654*/ ret11 = (call_tmp16)->shiftedData;
      /* 1161661*/ coerce_tmp6 = ret11;
      /* 1161666*/ call_tmp21 = (coerce_tmp6 + sum2);
      /* 1277820*/ chpl_check_nil(call_tmp21, INT64(169), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1162655*/ ret12 = (call_tmp21)->idx;
      /* 1276318*/ chpl_check_nil(chpldev_taskTable, INT64(170), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1118045*/ call_tmp22 = (chpldev_taskTable)->map;
      /* 1073900*/ coerce_tmp7 = call_tmp22;
      /* 1198738*/ ret13 = coerce_tmp7;
      /* 1277978*/ chpl_check_nil(ret13, INT64(170), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1198752*/ wrap_call_tmp = dsiAccess(ret13, ret12, false, _ln, _fn);
      /* 1278036*/ chpl_check_nil(wrap_call_tmp, INT64(170), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1201221*/ ret14 = (wrap_call_tmp)->filename;
      /* 1276320*/ chpl_check_nil(chpldev_taskTable, INT64(171), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1118055*/ call_tmp23 = (chpldev_taskTable)->map;
      /* 1073933*/ coerce_tmp8 = call_tmp23;
      /* 1198775*/ ret15 = coerce_tmp8;
      /* 1277980*/ chpl_check_nil(ret15, INT64(171), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1198789*/ wrap_call_tmp2 = dsiAccess(ret15, ret12, false, _ln, _fn);
      /* 1278034*/ chpl_check_nil(wrap_call_tmp2, INT64(171), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1201188*/ ret16 = (wrap_call_tmp2)->lineno;
      /* 1276322*/ chpl_check_nil(chpldev_taskTable, INT64(172), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1118065*/ call_tmp24 = (chpldev_taskTable)->map;
      /* 1073966*/ coerce_tmp9 = call_tmp24;
      /* 1198812*/ ret17 = coerce_tmp9;
      /* 1277982*/ chpl_check_nil(ret17, INT64(172), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1198826*/ wrap_call_tmp3 = dsiAccess(ret17, ret12, false, _ln, _fn);
      /* 1278032*/ chpl_check_nil(wrap_call_tmp3, INT64(172), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTaskTable.chpl");
      /* 1201155*/ ret18 = (wrap_call_tmp3)->state;
      /* 1105351*/ string_from_c_string(&call_tmp25, "- ", INT64(0), INT64(0), _ln, _fn);
      /* 1105367*/ string_from_c_string(&call_tmp26, ":", INT64(0), INT64(0), _ln, _fn);
      /* 1105383*/ string_from_c_string(&call_tmp27, " is ", INT64(0), INT64(0), _ln, _fn);
      /* 1074031*/ _ref_tmp_ = &local_stderr;
      /* 1074038*/ writeln3(_ref_tmp_, call_tmp25, ret14, call_tmp26, ret16, call_tmp27, ret18, _ln, _fn);
    }
  }
  /* 1073823*/ chpl__autoDestroy2(call_tmp5, _ln, _fn);
  /* 1242266*/ chpl__autoDestroy6(call_tmp_F1_tab, _ln, _fn);
  _end_chpldev_taskTable_print:;
  /* 280538*/ return;
}

