/* MemTracking.chpl:23 */
/*  235335 */ static void chpl__init_MemTracking(int64_t _ln, c_string _fn) {
  /* 1274341 */ c_string modFormatStr;
  /* 1274342 */ c_string modStr;
  /* 1274358 */ _ref_int32_t refIndentLevel = NULL;
  /*  299165 */ chpl_bool const_tmp;
  /*  381466 */ chpl_bool call_tmp;
  /* 1095444 */ chpl_bool call_tmp2;
  /*  381481 */ c_string call_tmp3;
  /*  299205 */ chpl_bool const_tmp2;
  /*  381486 */ chpl_bool call_tmp4;
  /* 1095453 */ chpl_bool call_tmp5;
  /*  381501 */ c_string call_tmp6;
  /*  299245 */ chpl_bool const_tmp3;
  /*  381506 */ chpl_bool call_tmp7;
  /* 1095462 */ chpl_bool call_tmp8;
  /*  381521 */ c_string call_tmp9;
  /*  299285 */ chpl_bool const_tmp4;
  /*  381526 */ chpl_bool call_tmp10;
  /* 1095471 */ chpl_bool call_tmp11;
  /*  381541 */ c_string call_tmp12;
  /*  299325 */ uint64_t const_tmp5;
  /*  381546 */ chpl_bool call_tmp13;
  /* 1095480 */ chpl_bool call_tmp14;
  /* 1149819 */ uint64_t call_tmp15;
  /*  381561 */ c_string call_tmp16;
  /*  299365 */ uint64_t const_tmp6;
  /*  381566 */ chpl_bool call_tmp17;
  /* 1095489 */ chpl_bool call_tmp18;
  /* 1149829 */ uint64_t call_tmp19;
  /*  381581 */ c_string call_tmp20;
  /*  299405 */ c_string const_tmp7;
  /*  381586 */ chpl_bool call_tmp21;
  /* 1095498 */ chpl_bool call_tmp22;
  /*  381601 */ c_string call_tmp23;
  /*  299445 */ c_string const_tmp8;
  /*  381606 */ chpl_bool call_tmp24;
  /* 1095507 */ chpl_bool call_tmp25;
  /*  381621 */ c_string call_tmp26;
  /*  299491 */ string_rec type_tmp;
  /* 1053140 */ _ref_string_rec _ref_tmp_ = NULL;
  /*  299508 */ string_rec type_tmp2;
  /* 1053146 */ _ref_string_rec _ref_tmp_2 = NULL;
  /* 235336*/ /* 1274377*/ if (chpl__init_MemTracking_p) /* 1274378*/ {
    /* 1274374*/ goto _exit_chpl__init_MemTracking;
  }
  /* 1274350*/ modFormatStr = "%*s\n";
  /* 1274353*/ modStr = "MemTracking";
  /* 1274356*/ printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  /* 1274362*/ refIndentLevel = &moduleInitLevel;
  /* 1274365*/ *(refIndentLevel) += INT64(1);
  /* 1274339*/ chpl__init_MemTracking_p = true;
  /* 1273279*/ {
    /* 1273280*/ chpl__init_NewString(_ln, _fn);
  }
  /* 381469*/ call_tmp = chpl_config_has_value("memTrack", "Built-in");
  /* 1095446*/ call_tmp2 = (! call_tmp);
  /* 299190*/ if (call_tmp2) /* 299191*/ {
    /* 299202*/ const_tmp = false;
  } else /* 299192*/ {
    /* 381484*/ call_tmp3 = chpl_config_get_value("memTrack", "Built-in");
    /* 299188*/ const_tmp = _command_line_cast5(call_tmp3, _ln, _fn);
  }
  /* 299167*/ memTrack = const_tmp;
  /* 381489*/ call_tmp4 = chpl_config_has_value("memStats", "Built-in");
  /* 1095455*/ call_tmp5 = (! call_tmp4);
  /* 299230*/ if (call_tmp5) /* 299231*/ {
    /* 299242*/ const_tmp2 = false;
  } else /* 299232*/ {
    /* 381504*/ call_tmp6 = chpl_config_get_value("memStats", "Built-in");
    /* 299228*/ const_tmp2 = _command_line_cast6(call_tmp6, _ln, _fn);
  }
  /* 299207*/ memStats = const_tmp2;
  /* 381509*/ call_tmp7 = chpl_config_has_value("memLeaks", "Built-in");
  /* 1095464*/ call_tmp8 = (! call_tmp7);
  /* 299270*/ if (call_tmp8) /* 299271*/ {
    /* 299282*/ const_tmp3 = false;
  } else /* 299272*/ {
    /* 381524*/ call_tmp9 = chpl_config_get_value("memLeaks", "Built-in");
    /* 299268*/ const_tmp3 = _command_line_cast7(call_tmp9, _ln, _fn);
  }
  /* 299247*/ memLeaks = const_tmp3;
  /* 381529*/ call_tmp10 = chpl_config_has_value("memLeaksTable", "Built-in");
  /* 1095473*/ call_tmp11 = (! call_tmp10);
  /* 299310*/ if (call_tmp11) /* 299311*/ {
    /* 299322*/ const_tmp4 = false;
  } else /* 299312*/ {
    /* 381544*/ call_tmp12 = chpl_config_get_value("memLeaksTable", "Built-in");
    /* 299308*/ const_tmp4 = _command_line_cast8(call_tmp12, _ln, _fn);
  }
  /* 299287*/ memLeaksTable = const_tmp4;
  /* 381549*/ call_tmp13 = chpl_config_has_value("memMax", "Built-in");
  /* 1095482*/ call_tmp14 = (! call_tmp13);
  /* 299350*/ if (call_tmp14) /* 299351*/ {
    /* 1149821*/ call_tmp15 = ((uint64_t)(INT64(0)));
    /* 299362*/ const_tmp5 = call_tmp15;
  } else /* 299352*/ {
    /* 381564*/ call_tmp16 = chpl_config_get_value("memMax", "Built-in");
    /* 299348*/ const_tmp5 = _command_line_cast9(call_tmp16, _ln, _fn);
  }
  /* 299327*/ memMax = const_tmp5;
  /* 381569*/ call_tmp17 = chpl_config_has_value("memThreshold", "Built-in");
  /* 1095491*/ call_tmp18 = (! call_tmp17);
  /* 299390*/ if (call_tmp18) /* 299391*/ {
    /* 1149831*/ call_tmp19 = ((uint64_t)(INT64(0)));
    /* 299402*/ const_tmp6 = call_tmp19;
  } else /* 299392*/ {
    /* 381584*/ call_tmp20 = chpl_config_get_value("memThreshold", "Built-in");
    /* 299388*/ const_tmp6 = _command_line_cast10(call_tmp20, _ln, _fn);
  }
  /* 299367*/ memThreshold = const_tmp6;
  /* 381589*/ call_tmp21 = chpl_config_has_value("memLog", "Built-in");
  /* 1095500*/ call_tmp22 = (! call_tmp21);
  /* 299430*/ if (call_tmp22) /* 299431*/ {
    /* 299442*/ const_tmp7 = "";
  } else /* 299432*/ {
    /* 381604*/ call_tmp23 = chpl_config_get_value("memLog", "Built-in");
    /* 299428*/ const_tmp7 = _command_line_cast11(call_tmp23, _ln, _fn);
  }
  /* 299407*/ memLog = const_tmp7;
  /* 381609*/ call_tmp24 = chpl_config_has_value("memLeaksLog", "Built-in");
  /* 1095509*/ call_tmp25 = (! call_tmp24);
  /* 299470*/ if (call_tmp25) /* 299471*/ {
    /* 299482*/ const_tmp8 = "";
  } else /* 299472*/ {
    /* 381624*/ call_tmp26 = chpl_config_get_value("memLeaksLog", "Built-in");
    /* 299468*/ const_tmp8 = _command_line_cast12(call_tmp26, _ln, _fn);
  }
  /* 299447*/ memLeaksLog = const_tmp8;
  /* 299494*/ type_tmp = string_rec2(_ln, _fn);
  /* 1053144*/ _ref_tmp_ = &type_tmp;
  /* 299496*/ chpl___ASSIGN_9(_ref_tmp_, memLog, _ln, _fn);
  /* 299487*/ s_memLog = type_tmp;
  /* 299511*/ type_tmp2 = string_rec2(_ln, _fn);
  /* 1053150*/ _ref_tmp_2 = &type_tmp2;
  /* 299513*/ chpl___ASSIGN_9(_ref_tmp_2, memLeaksLog, _ln, _fn);
  /* 299504*/ s_memLeaksLog = type_tmp2;
  /* 1274368*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_MemTracking:;
  /* 280546*/ return;
}

/* MemTracking.chpl:56 */
/*  127504 */ void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaks, _ref_chpl_bool ret_memLeaksTable, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog, int64_t _ln, c_string _fn) {
  /* 1272375 */ c_string local_memLeaksLog;
  /* 1272369 */ c_string local_memLog;
  /* 1272360 */ string_rec local_s_memLeaksLog;
  /* 1272351 */ string_rec local_s_memLog;
  /* 1272345 */ uint64_t local_memThreshold;
  /* 1272339 */ uint64_t local_memMax;
  /* 1272333 */ chpl_bool local_memLeaksTable;
  /* 1272327 */ chpl_bool local_memLeaks;
  /* 1272321 */ chpl_bool local_memStats;
  /* 1272315 */ chpl_bool local_memTrack;
  /* 1106481 */ int32_t call_tmp;
  /* 1106487 */ chpl_localeID_t call_tmp2;
  /* 1106489 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106500 */ chpl_localeID_t call_tmp3;
  /* 1106507 */ locale call_tmp4 = NULL;
  /*  381633 */ int64_t call_tmp5;
  /* 1101072 */ chpl_bool call_tmp6;
  /* 1112422 */ int64_t ret;
  /* 1101082 */ chpl_bool call_tmp7;
  /* 1112806 */ locale ret2 = NULL;
  /*  381674 */ int64_t call_tmp8;
  /* 1119240 */ c_string ret3;
  /* 1112432 */ int64_t ret4;
  /*  381693 */ c_string_copy call_tmp9;
  /* 1101768 */ c_string call_tmp10;
  /* 1112442 */ int64_t ret5;
  /* 1101092 */ chpl_bool call_tmp11;
  /* 1112816 */ locale ret6 = NULL;
  /*  381724 */ int64_t call_tmp12;
  /* 1119250 */ c_string ret7;
  /* 1112452 */ int64_t ret8;
  /*  381743 */ c_string_copy call_tmp13;
  /* 1101778 */ c_string call_tmp14;
  /* 127505*/ /* 1272376*/ local_memLeaksLog = memLeaksLog;
  /* 1272370*/ local_memLog = memLog;
  /* 1272361*/ local_s_memLeaksLog = s_memLeaksLog;
  /* 1272352*/ local_s_memLog = s_memLog;
  /* 1272346*/ local_memThreshold = memThreshold;
  /* 1272340*/ local_memMax = memMax;
  /* 1272334*/ local_memLeaksTable = memLeaksTable;
  /* 1272328*/ local_memLeaks = memLeaks;
  /* 1272322*/ local_memStats = memStats;
  /* 1272316*/ local_memTrack = memTrack;
  /* 1094651*/ *(ret_memTrack) = local_memTrack;
  /* 1094657*/ *(ret_memStats) = local_memStats;
  /* 1094663*/ *(ret_memLeaks) = local_memLeaks;
  /* 1094669*/ *(ret_memLeaksTable) = local_memLeaksTable;
  /* 1114673*/ *(ret_memMax) = local_memMax;
  /* 1114679*/ *(ret_memThreshold) = local_memThreshold;
  /* 1106483*/ call_tmp = chpl_task_getRequestedSubloc();
  /* 1106491*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1106496*/ chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106502*/ call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  /* 1106509*/ call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  /* 1275140*/ chpl_check_nil(call_tmp4, INT64(71), "/export/home/hzhang86/chapel/chapel/modules/internal/MemTracking.chpl");
  /* 381636*/ call_tmp5 = id(call_tmp4, _ln, _fn);
  /* 1101074*/ call_tmp6 = (call_tmp5 != INT64(0));
  /* 127676*/ if (call_tmp6) /* 127620*/ {
    /* 1112424*/ ret = (&local_s_memLog)->len;
    /* 1101084*/ call_tmp7 = (ret != INT64(0));
    /* 127616*/ if (call_tmp7) /* 127617*/ {
      /* 1112808*/ ret2 = (&local_s_memLog)->home;
      /* 1275142*/ chpl_check_nil(ret2, INT64(74), "/export/home/hzhang86/chapel/chapel/modules/internal/MemTracking.chpl");
      /* 381677*/ call_tmp8 = id(ret2, _ln, _fn);
      /* 1119242*/ ret3 = (&local_s_memLog)->base;
      /* 1112434*/ ret4 = (&local_s_memLog)->len;
      /* 381696*/ call_tmp9 = remoteStringCopy(call_tmp8, ret3, ret4, _ln, _fn);
      /* 1101770*/ call_tmp10 = ((c_string)(call_tmp9));
      /* 1098043*/ *(ret_memLog) = call_tmp10;
    } else /* 127618*/ {
      /* 1098049*/ *(ret_memLog) = "";
    }
    /* 1112444*/ ret5 = (&local_s_memLeaksLog)->len;
    /* 1101094*/ call_tmp11 = (ret5 != INT64(0));
    /* 127659*/ if (call_tmp11) /* 127660*/ {
      /* 1112818*/ ret6 = (&local_s_memLeaksLog)->home;
      /* 1275144*/ chpl_check_nil(ret6, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/MemTracking.chpl");
      /* 381727*/ call_tmp12 = id(ret6, _ln, _fn);
      /* 1119252*/ ret7 = (&local_s_memLeaksLog)->base;
      /* 1112454*/ ret8 = (&local_s_memLeaksLog)->len;
      /* 381746*/ call_tmp13 = remoteStringCopy(call_tmp12, ret7, ret8, _ln, _fn);
      /* 1101780*/ call_tmp14 = ((c_string)(call_tmp13));
      /* 1098055*/ *(ret_memLeaksLog) = call_tmp14;
    } else /* 127661*/ {
      /* 1098061*/ *(ret_memLeaksLog) = "";
    }
  } else /* 127668*/ {
    /* 1098067*/ *(ret_memLog) = local_memLog;
    /* 1098073*/ *(ret_memLeaksLog) = local_memLeaksLog;
  }
  /* 280544*/ return;
}

