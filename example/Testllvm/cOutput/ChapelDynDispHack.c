/* ChapelDynDispHack.chpl:21 */
/*  235341 */ static void chpl__init_ChapelDynDispHack(int64_t _ln, c_string _fn) {
  /* 1274433 */ c_string modFormatStr;
  /* 1274434 */ c_string modStr;
  /* 1274450 */ _ref_int32_t refIndentLevel = NULL;
  /* 1106517 */ int32_t call_tmp;
  /* 1106523 */ chpl_localeID_t call_tmp2;
  /* 1106525 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106536 */ chpl_localeID_t call_tmp3;
  /* 1106543 */ locale call_tmp4 = NULL;
  /*  382431 */ int64_t call_tmp5;
  /* 1114955 */ chpl_bool call_tmp6;
  /* 235342*/ /* 1274469*/ if (chpl__init_ChapelDynDispHack_p) /* 1274470*/ {
    /* 1274466*/ goto _exit_chpl__init_ChapelDynDispHack;
  }
  /* 1274442*/ modFormatStr = "%*s\n";
  /* 1274445*/ modStr = "ChapelDynDispHack";
  /* 1274448*/ printModuleInit(modFormatStr, modStr, INT64(17), _ln, _fn);
  /* 1274454*/ refIndentLevel = &moduleInitLevel;
  /* 1274457*/ *(refIndentLevel) += INT64(1);
  /* 1274431*/ chpl__init_ChapelDynDispHack_p = true;
  /* 1106519*/ call_tmp = chpl_task_getRequestedSubloc();
  /* 1106527*/ ret_to_arg_ref_tmp_ = &call_tmp2;
  /* 1106532*/ chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1106538*/ call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  /* 1106545*/ call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  /* 1275146*/ chpl_check_nil(call_tmp4, INT64(32), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelDynDispHack.chpl");
  /* 382434*/ call_tmp5 = id(call_tmp4, _ln, _fn);
  /* 1114957*/ call_tmp6 = (call_tmp5 >= INT64(0));
  /* 128580*/ assert2(call_tmp6, _ln, _fn);
  /* 1274460*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDynDispHack:;
  /* 280687*/ return;
}

