/* Error.chpl:1 */
/*  235395 */ static void chpl__init_Error(int64_t _ln, c_string _fn) {
  /* 1275029 */ c_string modFormatStr;
  /* 1275030 */ c_string modStr;
  /* 1275046 */ _ref_int32_t refIndentLevel = NULL;
  /* 235396*/ /* 1275065*/ if (chpl__init_Error_p) /* 1275066*/ {
    /* 1275062*/ goto _exit_chpl__init_Error;
  }
  /* 1275038*/ modFormatStr = "%*s\n";
  /* 1275041*/ modStr = "Error";
  /* 1275044*/ printModuleInit(modFormatStr, modStr, INT64(5), _ln, _fn);
  /* 1275050*/ refIndentLevel = &moduleInitLevel;
  /* 1275053*/ *(refIndentLevel) += INT64(1);
  /* 1275027*/ chpl__init_Error_p = true;
  /* 1273310*/ {
    /* 1273311*/ chpl__init_SysBasic(_ln, _fn);
  }
  /* 1275056*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Error:;
  /* 290236*/ return;
}

/* Error.chpl:25 */
/*  185537 */ static c_string quote_string(chpl_string s, int64_t len, int64_t _ln, c_string _fn) {
  /* 1272406 */ c_void_ptr local_c_nil;
  /*  290202 */ c_string ret;
  /*  185547 */ /*  185609 */ c_string ret2;
  /* 1098265 */ c_string call_tmp;
  /*  417289 */ syserr call_tmp2;
  /* 1052774 */ _ref_c_string _ref_tmp_ = NULL;
  /* 1113369 */ int32_t call_tmp3;
  /* 1113376 */ chpl_bool call_tmp4;
  /*  417299 */ c_string call_tmp5;
  /* 185538*/ /* 1272407*/ local_c_nil = c_nil;
  /* 307323*/ ret2 = "";
  /* 1098267*/ c_string_from_string(&call_tmp, &s, _ln, _fn);
  /* 1052778*/ _ref_tmp_ = &ret2;
  /* 417292*/ call_tmp2 = qio_quote_string(UINT8(34), UINT8(34), QIO_STRING_FORMAT_CHPL, call_tmp, len, _ref_tmp_, local_c_nil);
  /* 1113371*/ call_tmp3 = qio_err_iserr(call_tmp2);
  /* 1113378*/ call_tmp4 = (call_tmp3 != INT32(0));
  /* 185654*/ if (call_tmp4) /* 185655*/ {
    /* 417302*/ call_tmp5 = qio_strdup("<error>");
    /* 290207*/ ret = call_tmp5;
    /* 290209*/ goto _end_quote_string;
  }
  /* 290212*/ ret = ret2;
  _end_quote_string:;
  /* 290204*/ return ret;
}

/* Error.chpl:55 */
/*  185723 */ static void ioerror(syserr error, chpl_string msg, chpl_string path, int64_t _ln, c_string _fn) {
  /* 1113386 */ int32_t call_tmp;
  /* 1113393 */ chpl_bool call_tmp2;
  /*  185745 */ int32_t strerror_err;
  /*  417346 */ c_string call_tmp3;
  /* 1052780 */ _ref_int32_t _ref_tmp_ = NULL;
  /* 1100055 */ c_string call_tmp4;
  /* 1100061 */ int64_t call_tmp5;
  /*  417363 */ c_string call_tmp6;
  /* 1102310 */ c_string_copy call_tmp7;
  /* 1098274 */ c_string call_tmp8;
  /* 1101598 */ c_string call_tmp9;
  /* 1102320 */ c_string_copy call_tmp10;
  /* 1101608 */ c_string call_tmp11;
  /* 1102330 */ c_string_copy call_tmp12;
  /* 1101618 */ c_string call_tmp13;
  /* 1102340 */ c_string_copy call_tmp14;
  /* 185724*/ /* 1113388*/ call_tmp = qio_err_iserr(error);
  /* 1113395*/ call_tmp2 = (call_tmp != INT32(0));
  /* 185798*/ if (call_tmp2) /* 185738*/ {
    /* 307386*/ strerror_err = INT32(0);
    /* 1052784*/ _ref_tmp_ = &strerror_err;
    /* 417349*/ call_tmp3 = sys_strerror_syserr_str(error, _ref_tmp_);
    /* 1100057*/ c_string_from_string(&call_tmp4, &path, _ln, _fn);
    /* 1100063*/ call_tmp5 = string_length(call_tmp4);
    /* 417366*/ call_tmp6 = quote_string(path, call_tmp5, _ln, _fn);
    /* 1102312*/ call_tmp7 = string_concat(call_tmp3, " ", _ln, _fn);
    /* 1098276*/ c_string_from_string(&call_tmp8, &msg, _ln, _fn);
    /* 1101600*/ call_tmp9 = ((c_string)(call_tmp7));
    /* 1102322*/ call_tmp10 = string_concat(call_tmp9, call_tmp8, _ln, _fn);
    /* 1101610*/ call_tmp11 = ((c_string)(call_tmp10));
    /* 1102332*/ call_tmp12 = string_concat(call_tmp11, " with path ", _ln, _fn);
    /* 1101620*/ call_tmp13 = ((c_string)(call_tmp12));
    /* 1102342*/ call_tmp14 = string_concat(call_tmp13, call_tmp6, _ln, _fn);
    /* 185794*/ chpl_error(call_tmp14, _ln, _fn);
  }
  /* 290216*/ return;
}

/* Error.chpl:67 */
/*  185809 */ static void ioerror2(syserr error, chpl_string msg, chpl_string path, int64_t offset, int64_t _ln, c_string _fn) {
  /* 1113403 */ int32_t call_tmp;
  /* 1113410 */ chpl_bool call_tmp2;
  /*  185838 */ int32_t strerror_err;
  /*  417405 */ c_string call_tmp3;
  /* 1052798 */ _ref_int32_t _ref_tmp_ = NULL;
  /* 1100070 */ c_string call_tmp4;
  /* 1100076 */ int64_t call_tmp5;
  /*  417422 */ c_string call_tmp6;
  /* 1102350 */ c_string_copy call_tmp7;
  /* 1098283 */ c_string call_tmp8;
  /* 1101648 */ c_string call_tmp9;
  /* 1102360 */ c_string_copy call_tmp10;
  /* 1101658 */ c_string call_tmp11;
  /* 1102370 */ c_string_copy call_tmp12;
  /* 1101668 */ c_string call_tmp13;
  /* 1102380 */ c_string_copy call_tmp14;
  /* 1101678 */ c_string call_tmp15;
  /* 1102390 */ c_string_copy call_tmp16;
  /* 1138746 */ c_string_copy call_tmp17;
  /* 1138748 */ uint32_t call_tmp18;
  /* 1101688 */ c_string call_tmp19;
  /* 1101698 */ c_string call_tmp20;
  /* 1102400 */ c_string_copy call_tmp21;
  /* 185810*/ /* 1113405*/ call_tmp = qio_err_iserr(error);
  /* 1113412*/ call_tmp2 = (call_tmp != INT32(0));
  /* 185900*/ if (call_tmp2) /* 185831*/ {
    /* 307416*/ strerror_err = INT32(0);
    /* 1052802*/ _ref_tmp_ = &strerror_err;
    /* 417408*/ call_tmp3 = sys_strerror_syserr_str(error, _ref_tmp_);
    /* 1100072*/ c_string_from_string(&call_tmp4, &path, _ln, _fn);
    /* 1100078*/ call_tmp5 = string_length(call_tmp4);
    /* 417425*/ call_tmp6 = quote_string(path, call_tmp5, _ln, _fn);
    /* 1102352*/ call_tmp7 = string_concat(call_tmp3, " ", _ln, _fn);
    /* 1098285*/ c_string_from_string(&call_tmp8, &msg, _ln, _fn);
    /* 1101650*/ call_tmp9 = ((c_string)(call_tmp7));
    /* 1102362*/ call_tmp10 = string_concat(call_tmp9, call_tmp8, _ln, _fn);
    /* 1101660*/ call_tmp11 = ((c_string)(call_tmp10));
    /* 1102372*/ call_tmp12 = string_concat(call_tmp11, " with path ", _ln, _fn);
    /* 1101670*/ call_tmp13 = ((c_string)(call_tmp12));
    /* 1102382*/ call_tmp14 = string_concat(call_tmp13, call_tmp6, _ln, _fn);
    /* 1101680*/ call_tmp15 = ((c_string)(call_tmp14));
    /* 1102392*/ call_tmp16 = string_concat(call_tmp15, " offset ", _ln, _fn);
    /* 1138750*/ call_tmp18 = ((uint32_t)(INT64(8)));
    /* 1138755*/ call_tmp17 = integral_to_c_string_copy(offset, call_tmp18, true);
    /* 1101690*/ call_tmp19 = ((c_string)(call_tmp16));
    /* 1101700*/ call_tmp20 = ((c_string)(call_tmp17));
    /* 1102402*/ call_tmp21 = string_concat(call_tmp19, call_tmp20, _ln, _fn);
    /* 185896*/ chpl_error(call_tmp21, _ln, _fn);
  }
  /* 290218*/ return;
}

