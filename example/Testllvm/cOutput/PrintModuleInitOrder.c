/* PrintModuleInitOrder.chpl:30 */
/*  235254 */ void chpl__init_PrintModuleInitOrder(int64_t _ln, c_string _fn) {
  /* 1273421 */ c_string modFormatStr;
  /* 1273422 */ c_string modStr;
  /* 1273438 */ _ref_int32_t refIndentLevel = NULL;
  /*  291137 */ chpl_bool const_tmp;
  /*  316770 */ chpl_bool call_tmp;
  /* 1095408 */ chpl_bool call_tmp2;
  /*  316785 */ c_string call_tmp3;
  /*  316835 */ chpl_bool call_tmp4;
  /* 235255*/ /* 1273457*/ if (chpl__init_PrintModuleInitOrder_p) /* 1273458*/ {
    /* 1273454*/ goto _exit_chpl__init_PrintModuleInitOrder;
  }
  /* 1273430*/ modFormatStr = "%*s\n";
  /* 1273433*/ modStr = "PrintModuleInitOrder";
  /* 1273436*/ printModuleInit(modFormatStr, modStr, INT64(20), _ln, _fn);
  /* 1273442*/ refIndentLevel = &moduleInitLevel;
  /* 1273445*/ *(refIndentLevel) += INT64(1);
  /* 1273419*/ chpl__init_PrintModuleInitOrder_p = true;
  /* 316773*/ call_tmp = chpl_config_has_value("printModuleInitOrder", "Built-in");
  /* 1095410*/ call_tmp2 = (! call_tmp);
  /* 291164*/ if (call_tmp2) /* 291165*/ {
    /* 291169*/ const_tmp = false;
  } else /* 291166*/ {
    /* 316788*/ call_tmp3 = chpl_config_get_value("printModuleInitOrder", "Built-in");
    /* 291162*/ const_tmp = _command_line_cast14(call_tmp3, _ln, _fn);
  }
  /* 291139*/ printModuleInitOrder = const_tmp;
  /* 291173*/ moduleInitLevel = INT32(2);
  /* 316838*/ call_tmp4 = printModuleInitOrder;
  /* 14772*/ if (call_tmp4) /* 14773*/ {
    /* 14768*/ initPrint();
  }
  /* 1273448*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_PrintModuleInitOrder:;
  /* 263396*/ return;
}

/* PrintModuleInitOrder.chpl:38 */
/*   14676 */ static void printModuleInit(c_string s1, c_string s2, int64_t len, int64_t _ln, c_string _fn) {
  /* 1272217 */ chpl_bool local_printModuleInitOrder;
  /*  316800 */ chpl_bool call_tmp;
  /* 1105427 */ int32_t call_tmp2;
  /* 1115364 */ int32_t call_tmp3;
  /* 1115374 */ int32_t call_tmp4;
  /* 14677*/ /* 1272218*/ local_printModuleInitOrder = printModuleInitOrder;
  /* 316803*/ call_tmp = local_printModuleInitOrder;
  /* 14736*/ if (call_tmp) /* 14737*/ {
    /* 1105429*/ call_tmp2 = ((int32_t)(len));
    /* 1115366*/ call_tmp3 = (moduleInitLevel + call_tmp2);
    /* 1115376*/ call_tmp4 = (call_tmp3 + INT32(2));
    /* 14732*/ printf(s1, call_tmp4, s2);
  }
  /* 263390*/ return;
}

/* PrintModuleInitOrder.chpl:44 */
/*   14743 */ static void initPrint(void) {
  /* 14744*/ /* 14761*/ printf("Initializing Modules:\n");
  /* 263394*/ return;
}

