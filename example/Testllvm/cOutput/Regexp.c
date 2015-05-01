/* Regexp.chpl:1 */
/*  235398 */ static void chpl__init_Regexp(int64_t _ln, c_string _fn) {
  /* 1275075 */ c_string modFormatStr;
  /* 1275076 */ c_string modStr;
  /* 1275092 */ _ref_int32_t refIndentLevel = NULL;
  /* 235399*/ /* 1275111*/ if (chpl__init_Regexp_p) /* 1275112*/ {
    /* 1275108*/ goto _exit_chpl__init_Regexp;
  }
  /* 1275084*/ modFormatStr = "%*s\n";
  /* 1275087*/ modStr = "Regexp";
  /* 1275090*/ printModuleInit(modFormatStr, modStr, INT64(6), _ln, _fn);
  /* 1275096*/ refIndentLevel = &moduleInitLevel;
  /* 1275099*/ *(refIndentLevel) += INT64(1);
  /* 1275073*/ chpl__init_Regexp_p = true;
  /* 1275102*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Regexp:;
  /* 290689*/ return;
}

