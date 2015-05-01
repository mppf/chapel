/* experiment.chpl:12 */
/*  235347 */ static void chpl__init_Hui(int64_t _ln, c_string _fn) {
  /* 1274525 */ c_string modFormatStr;
  /* 1274526 */ c_string modStr;
  /* 1274540 */ _ref_int32_t refIndentLevel = NULL;
  /*  299579 */ chpl_string const_tmp;
  /*  382466 */ chpl_bool call_tmp;
  /* 1095525 */ chpl_bool call_tmp2;
  /*  299609 */ chpl_string type_tmp;
  /* 1138512 */ chpl_string ret;
  /* 1053152 */ _ref_chpl_string _ref_tmp_ = NULL;
  /* 1101460 */ chpl_string call_tmp3;
  /*  382481 */ c_string call_tmp4;
  /*  299622 */ _tuple_2_int64_t__real64 type_tmp2;
  /*  382491 */ _tuple_2_int64_t__real64 call_tmp5;
  /* 1150424 */ Actor call_tmp6 = NULL;
  /* 1104661 */ chpl_string call_tmp7;
  /* 235348*/ /* 1274559*/ if (chpl__init_Hui_p) /* 1274560*/ {
    /* 1274556*/ goto _exit_chpl__init_Hui;
  }
  /* 1274532*/ modFormatStr = "%*s\n";
  /* 1274535*/ modStr = "Hui";
  /* 1274538*/ printModuleInit(modFormatStr, modStr, INT64(3), INT64(12), "example/experiment.chpl");
  /* 1274544*/ refIndentLevel = &moduleInitLevel;
  /* 1274547*/ *(refIndentLevel) += INT64(1);
  /* 1274523*/ chpl__init_Hui_p = true;
  /* 382469*/ call_tmp = chpl_config_has_value("message", "Hui");
  /* 1095527*/ call_tmp2 = (! call_tmp);
  /* 299606*/ if (call_tmp2) /* 299607*/ {
    /* 1138514*/ ret = defaultStringValue;
    /* 299613*/ type_tmp = ret;
    /* 1053156*/ _ref_tmp_ = &type_tmp;
    /* 1101462*/ string_from_c_string(&call_tmp3, "Hello, world!", INT64(0), INT64(0), INT64(21), "example/experiment.chpl");
    /* 1101468*/ *(_ref_tmp_) = call_tmp3;
    /* 299615*/ const_tmp = type_tmp;
  } else /* 299608*/ {
    /* 382484*/ call_tmp4 = chpl_config_get_value("message", "Hui");
    /* 299604*/ const_tmp = _command_line_cast13(call_tmp4, INT64(0), "<command line setting of 'message'>");
  }
  /* 299581*/ message = const_tmp;
  /* 1268002*/ (&type_tmp2)->x1 = INT64(0);
  /* 1268006*/ (&type_tmp2)->x2 = 0.0;
  /* 1268016*/ (&call_tmp5)->x1 = INT64(1);
  /* 1268020*/ (&call_tmp5)->x2 = 2.3;
  /* 1150408*/ type_tmp2 = call_tmp5;
  /* 299630*/ gv_t = call_tmp5;
  /* 299642*/ gv_b = true;
  /* 1150426*/ call_tmp6 = ((Actor)(nil));
  /* 299651*/ globalActor = call_tmp6;
  /* 1104663*/ string_from_c_string(&call_tmp7, "A simple procedure", INT64(0), INT64(0), INT64(57), "example/experiment.chpl");
  /* 128764*/ writeln4(call_tmp7, INT64(57), "example/experiment.chpl");
  /* 1274550*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Hui:;
  /* 280720*/ return;
}

/* ChapelBase.chpl:24 */
/* 1052209 */ static void chpl__autoDestroyGlobals(void) {
  /* 1272758 */ channel_T_dynamic_T local_stderr;
  /* 1272752 */ channel_T_dynamic_T local_stdout;
  /* 1272746 */ channel_F_dynamic_T local_stdin;
  /* 1272740 */ string_rec local_s_memLeaksLog;
  /* 1272734 */ string_rec local_s_memLog;
  /* 1272728 */ DefaultRectangularDom_1_int64_t_F local_LocaleSpace = NULL;
  /* 1272722 */ DefaultRectangularArr_locale_1_int64_t_F local_chpl_emptyLocales = NULL;
  /* 1272716 */ DefaultRectangularDom_1_int64_t_F local_chpl_emptyLocaleSpace = NULL;
  /* 1241226 */ _ref_string_rec _destructor_tmp_ = NULL;
  /* 1241238 */ _ref_string_rec _destructor_tmp_2 = NULL;
  /* 1241795 */ _ref_channel_F_dynamic_T _destructor_tmp_3 = NULL;
  /* 1241933 */ _ref_channel_T_dynamic_T _destructor_tmp_4 = NULL;
  /* 1241945 */ _ref_channel_T_dynamic_T _destructor_tmp_5 = NULL;
  /* 1052210*/ /* 1272759*/ local_stderr = stderr2;
  /* 1272753*/ local_stdout = stdout2;
  /* 1272747*/ local_stdin = stdin2;
  /* 1272741*/ local_s_memLeaksLog = s_memLeaksLog;
  /* 1272735*/ local_s_memLog = s_memLog;
  /* 1272729*/ local_LocaleSpace = LocaleSpace;
  /* 1272723*/ local_chpl_emptyLocales = chpl_emptyLocales;
  /* 1272717*/ local_chpl_emptyLocaleSpace = chpl_emptyLocaleSpace;
  /* 1052214*/ chpl__autoDestroy2(local_chpl_emptyLocaleSpace, INT64(93), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1052217*/ chpl__autoDestroy4(local_chpl_emptyLocales, INT64(94), "/export/home/hzhang86/chapel/chapel/modules/internal/localeModels/flat/LocaleModel.chpl");
  /* 1052220*/ chpl__autoDestroy(defaultDist, INT64(72), "/export/home/hzhang86/chapel/chapel/modules/internal/DefaultRectangular.chpl");
  /* 1052223*/ chpl__autoDestroy4(Locales, INT64(51), "/export/home/hzhang86/chapel/chapel/modules/internal/LocalesArray.chpl");
  /* 1052226*/ chpl__autoDestroy2(local_LocaleSpace, INT64(55), "/export/home/hzhang86/chapel/chapel/modules/internal/LocalesArray.chpl");
  /* 1241228*/ _destructor_tmp_ = &local_s_memLog;
  /* 1278194*/ chpl_check_nil(_destructor_tmp_, INT64(40), "/export/home/hzhang86/chapel/chapel/modules/internal/MemTracking.chpl");
  /* 1241233*/ chpl___TILDE_string_rec(_destructor_tmp_, INT64(40), "/export/home/hzhang86/chapel/chapel/modules/internal/MemTracking.chpl");
  /* 1241240*/ _destructor_tmp_2 = &local_s_memLeaksLog;
  /* 1278196*/ chpl_check_nil(_destructor_tmp_2, INT64(41), "/export/home/hzhang86/chapel/chapel/modules/internal/MemTracking.chpl");
  /* 1241245*/ chpl___TILDE_string_rec(_destructor_tmp_2, INT64(41), "/export/home/hzhang86/chapel/chapel/modules/internal/MemTracking.chpl");
  /* 1241797*/ _destructor_tmp_3 = &local_stdin;
  /* 1241802*/ chpl___TILDE_channel(_destructor_tmp_3, INT64(2024), "/export/home/hzhang86/chapel/chapel/modules/standard/IO.chpl");
  /* 1241935*/ _destructor_tmp_4 = &local_stdout;
  /* 1241940*/ chpl___TILDE_channel2(_destructor_tmp_4, INT64(2025), "/export/home/hzhang86/chapel/chapel/modules/standard/IO.chpl");
  /* 1241947*/ _destructor_tmp_5 = &local_stderr;
  /* 1241952*/ chpl___TILDE_channel2(_destructor_tmp_5, INT64(2026), "/export/home/hzhang86/chapel/chapel/modules/standard/IO.chpl");
  /* 1052268*/ return;
}

/* experiment.chpl:26 */
/*  197897 */ static Actor _construct_Actor(chpl_string name, uint64_t age, Actor meme, int64_t _ln, c_string _fn) {
  /*  197899 */ Actor this7 = NULL;
  /*  197911 */ object T = NULL;
  /* 197898*/ /* 197906*/ this7 = meme;
  /* 1275238*/ chpl_check_nil(this7, INT64(26), "example/experiment.chpl");
  /* 197918*/ T = &((this7)->super);
  /* 197909*/ _construct_object(T);
  /* 1275240*/ chpl_check_nil(this7, INT64(27), "example/experiment.chpl");
  /* 197930*/ (this7)->name = name;
  /* 1275242*/ chpl_check_nil(this7, INT64(28), "example/experiment.chpl");
  /* 197943*/ (this7)->age = age;
  /* 197948*/ return this7;
}

/* experiment.chpl:26 */
/*  440448 */ static void chpl__auto_destroy_Actor(Actor this7, int64_t _ln, c_string _fn) {
  /* 440449*/ /* 440454*/ return;
}

/* experiment.chpl:45 */
/*  128656 */ static void sayhello(int64_t level) {
  /* 1104757 */ chpl_string call_tmp;
  /* 128657*/ /* 1104759*/ string_from_c_string(&call_tmp, "Hello, Hui", INT64(0), INT64(0), INT64(46), "example/experiment.chpl");
  /* 128664*/ writeln5(call_tmp, level, INT64(46), "example/experiment.chpl");
  /* 280702*/ return;
}

/* experiment.chpl:49 */
/*  128675 */ static int64_t factorial(int64_t x) {
  /*  382506 */ int64_t call_tmp;
  /* 1115384 */ int64_t call_tmp2;
  /* 1115982 */ int64_t ret;
  /* 1115984 */ chpl_bool call_tmp3;
  /* 1115993 */ chpl_bool call_tmp4;
  /* 1116002 */ chpl_string call_tmp5;
  /* 1116010 */ chpl_string call_tmp6;
  /* 1116032 */ int64_t i;
  /* 1116037 */ int64_t y;
  /* 1116042 */ int64_t z;
  /* 1116047 */ chpl_bool T;
  /* 1116049 */ chpl_bool call_tmp7;
  /* 1116062 */ int64_t call_tmp8;
  /* 1116069 */ chpl_bool call_tmp9;
  /* 1116088 */ chpl_bool call_tmp10;
  /* 1109272 */ chpl_bool call_tmp11;
  /* 1111209 */ int64_t T2;
  /* 1111211 */ chpl_bool call_tmp12;
  /* 1111224 */ int64_t call_tmp13;
  /* 1111231 */ int64_t call_tmp14;
  /* 1111238 */ int64_t call_tmp15;
  /* 128676*/ /* 1115386*/ call_tmp2 = (x + INT64(5));
  /* 382509*/ call_tmp = call_tmp2;
  /* 1115986*/ call_tmp3 = (x < INT64(0));
  /* 1116031*/ if (call_tmp3) /* 1115992*/ {
    /* 1115995*/ call_tmp4 = (call_tmp2 == INT64(0));
    /* 1116030*/ if (call_tmp4) /* 1116001*/ {
      /* 1116004*/ string_from_c_string(&call_tmp5, "cannot compute ", INT64(0), INT64(0), INT64(50), "example/experiment.chpl");
      /* 1116012*/ string_from_c_string(&call_tmp6, " ** ", INT64(0), INT64(0), INT64(50), "example/experiment.chpl");
      /* 1116019*/ halt4(call_tmp5, call_tmp2, call_tmp6, x, INT64(50), "example/experiment.chpl");
    } else /* 1116024*/ {
      /* 1116025*/ ret = INT64(0);
      /* 1116029*/ goto _end__intExpHelp;
    }
  }
  /* 1116034*/ i = x;
  /* 1116039*/ y = INT64(1);
  /* 1116044*/ z = call_tmp;
  /* 1116051*/ call_tmp7 = (x != INT64(0));
  /* 1116056*/ T = call_tmp7;
  /* 1116059*/ while (T) {
    /* 1116064*/ call_tmp8 = (i % INT64(2));
    /* 1116071*/ call_tmp9 = (call_tmp8 == INT64(1));
    /* 1116081*/ if (call_tmp9) /* 1116077*/ {
      /* 1116078*/ y *= z;
    }
    /* 1116082*/ z *= z;
    /* 1116085*/ i /= INT64(2);
    /* 1116090*/ call_tmp10 = (i != INT64(0));
    /* 1116095*/ T = call_tmp10;
  }
  /* 1116098*/ ret = y;
  _end__intExpHelp:;
  /* 128693*/ sayhello(ret);
  /* 1109274*/ call_tmp11 = (x < INT64(0));
  /* 128708*/ if (call_tmp11) /* 128709*/ {
    /* 128704*/ halt("factorial -- Sorry, this is not the gamma procedure!", INT64(53), "example/experiment.chpl");
  }
  /* 1111213*/ call_tmp12 = (x == INT64(0));
  /* 1111248*/ if (call_tmp12) /* 1111219*/ {
    /* 1111220*/ T2 = INT64(1);
  } else /* 1111223*/ {
    /* 1111226*/ call_tmp13 = (x - INT64(1));
    /* 1111233*/ call_tmp14 = factorial(call_tmp13);
    /* 1111240*/ call_tmp15 = (x * call_tmp14);
    /* 1111245*/ T2 = call_tmp15;
  }
  /* 280713*/ return T2;
}

/* experiment.chpl:59 */
/*  128768 */ static void chpl_user_main(void) {
  /* 1272381 */ chpl_string local_message;
  /* 1155917 */ Actor this7 = NULL;
  /* 1155919 */ int64_t call_tmp;
  /* 1155925 */ chpl_opaque cast_tmp;
  /* 1155948 */ chpl_string ret;
  /*  382561 */ int64_t call_tmp2;
  /* 1104821 */ chpl_string call_tmp3;
  /* 128769*/ /* 1272382*/ local_message = message;
  /* 1155921*/ call_tmp = sizeof(chpl_Actor_object);
  /* 1155927*/ cast_tmp = chpl_here_alloc(call_tmp, INT16(29), INT64(60), "example/experiment.chpl");
  /* 1155933*/ this7 = ((Actor)(cast_tmp));
  /* 1155938*/ ((object)(this7))->chpl__cid = chpl__cid_Actor;
  /* 1277644*/ chpl_check_nil(this7, INT64(60), "example/experiment.chpl");
  /* 1155940*/ (this7)->name = defaultStringValue;
  /* 1277646*/ chpl_check_nil(this7, INT64(60), "example/experiment.chpl");
  /* 1155944*/ (this7)->age = UINT64(0);
  /* 1155950*/ ret = defaultStringValue;
  /* 1277648*/ chpl_check_nil(this7, INT64(60), "example/experiment.chpl");
  /* 1155953*/ (this7)->name = ret;
  /* 1277650*/ chpl_check_nil(this7, INT64(60), "example/experiment.chpl");
  /* 1155957*/ (this7)->age = UINT64(0);
  /* 1155966*/ _construct_Actor(ret, UINT64(0), this7, INT64(60), "example/experiment.chpl");
  /* 128786*/ writeln4(local_message, INT64(62), "example/experiment.chpl");
  /* 382564*/ call_tmp2 = factorial(INT64(6));
  /* 1104823*/ string_from_c_string(&call_tmp3, "6! is ", INT64(0), INT64(0), INT64(63), "example/experiment.chpl");
  /* 128797*/ writeln5(call_tmp3, call_tmp2, INT64(63), "example/experiment.chpl");
  /* 280718*/ return;
}

/* experiment.chpl:59 */
/*  422069 */ int64_t chpl_gen_main(chpl_main_argument* const _arg) {
  /* 1097289 */ chpl___EndCount this7 = NULL;
  /* 1097291 */ int64_t call_tmp;
  /* 1097297 */ chpl_opaque cast_tmp;
  /* 1097312 */ atomic_int64 _init_class_tmp_;
  /* 1097326 */ atomic_int64 this8;
  /* 1097328 */ atomic_int_least64_t ret;
  /* 1097330 */ atomic_int_least64_t type_tmp;
  /* 1097335 */ _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  /* 1097349 */ atomic_int64 wrap_call_tmp;
  /* 1097365 */ chpl_task_list_p ret2;
  /* 1097374 */ chpl___EndCount wrap_call_tmp2 = NULL;
  /* 422070*/ /* 1097293*/ call_tmp = sizeof(chpl_chpl___EndCount_object);
  /* 1097299*/ cast_tmp = chpl_here_alloc(call_tmp, INT16(15), INT64(59), "example/experiment.chpl");
  /* 1097305*/ this7 = ((chpl___EndCount)(cast_tmp));
  /* 1097310*/ ((object)(this7))->chpl__cid = chpl__cid_chpl___EndCount;
  /* 1275882*/ chpl_check_nil(this7, INT64(59), "example/experiment.chpl");
  /* 1097314*/ (this7)->i = _init_class_tmp_;
  /* 1275884*/ chpl_check_nil(this7, INT64(59), "example/experiment.chpl");
  /* 1097318*/ (this7)->taskCnt = INT64(0);
  /* 1275886*/ chpl_check_nil(this7, INT64(59), "example/experiment.chpl");
  /* 1097322*/ (this7)->taskList = NULL;
  /* 1097332*/ ret = type_tmp;
  /* 1097337*/ _ref_tmp_ = &ret;
  /* 1097342*/ atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  /* 1097345*/ (&this8)->_v = ret;
  /* 1097351*/ wrap_call_tmp = _construct_atomic_int64(ret, &this8, INT64(59), "example/experiment.chpl");
  /* 1275888*/ chpl_check_nil(this7, INT64(59), "example/experiment.chpl");
  /* 1097357*/ (this7)->i = wrap_call_tmp;
  /* 1275890*/ chpl_check_nil(this7, INT64(59), "example/experiment.chpl");
  /* 1097361*/ (this7)->taskCnt = INT64(0);
  /* 1097367*/ ret2 = NULL;
  /* 1275892*/ chpl_check_nil(this7, INT64(59), "example/experiment.chpl");
  /* 1097370*/ (this7)->taskList = ret2;
  /* 1097376*/ wrap_call_tmp2 = _construct__EndCount(&wrap_call_tmp, INT64(0), ret2, this7, INT64(59), "example/experiment.chpl");
  /* 422084*/ chpl_rt_preUserCodeHook();
  /* 422086*/ chpl__init_Hui(INT64(59), "example/experiment.chpl");
  /* 422088*/ chpl_user_main();
  /* 422093*/ chpl_rt_postUserCodeHook();
  /* 422095*/ _waitEndCount2(wrap_call_tmp2, INT64(59), "example/experiment.chpl");
  /* 1052212*/ chpl__autoDestroyGlobals();
  /* 422103*/ return INT64(0);
}

