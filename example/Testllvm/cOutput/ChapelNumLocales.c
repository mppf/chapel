/* ChapelNumLocales.chpl:23 */
/*  235344 */ static void chpl__init_ChapelNumLocales(int64_t _ln, c_string _fn) {
  /* 1274479 */ c_string modFormatStr;
  /* 1274480 */ c_string modStr;
  /* 1274496 */ _ref_int32_t refIndentLevel = NULL;
  /*  299547 */ int64_t const_tmp;
  /*  382441 */ chpl_bool call_tmp;
  /* 1095516 */ chpl_bool call_tmp2;
  /*  382451 */ int64_t call_tmp3;
  /*  382461 */ c_string call_tmp4;
  /* 235345*/ /* 1274515*/ if (chpl__init_ChapelNumLocales_p) /* 1274516*/ {
    /* 1274512*/ goto _exit_chpl__init_ChapelNumLocales;
  }
  /* 1274488*/ modFormatStr = "%*s\n";
  /* 1274491*/ modStr = "ChapelNumLocales";
  /* 1274494*/ printModuleInit(modFormatStr, modStr, INT64(16), _ln, _fn);
  /* 1274500*/ refIndentLevel = &moduleInitLevel;
  /* 1274503*/ *(refIndentLevel) += INT64(1);
  /* 1274477*/ chpl__init_ChapelNumLocales_p = true;
  /* 382444*/ call_tmp = chpl_config_has_value("numLocales", "Built-in");
  /* 1095518*/ call_tmp2 = (! call_tmp);
  /* 299572*/ if (call_tmp2) /* 299573*/ {
    /* 382454*/ call_tmp3 = chpl_comm_default_num_locales();
    /* 299577*/ const_tmp = call_tmp3;
  } else /* 299574*/ {
    /* 382464*/ call_tmp4 = chpl_config_get_value("numLocales", "Built-in");
    /* 299570*/ const_tmp = _command_line_cast4(call_tmp4, _ln, _fn);
  }
  /* 299549*/ numLocales = const_tmp;
  /* 1274506*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelNumLocales:;
  /* 280700*/ return;
}

