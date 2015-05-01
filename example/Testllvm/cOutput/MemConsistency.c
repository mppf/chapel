/* MemConsistency.chpl:21 */
/*  235263 */ static void chpl__init_MemConsistency(int64_t _ln, c_string _fn) {
  /* 1273559 */ c_string modFormatStr;
  /* 1273560 */ c_string modStr;
  /* 1273576 */ _ref_int32_t refIndentLevel = NULL;
  /* 235264*/ /* 1273595*/ if (chpl__init_MemConsistency_p) /* 1273596*/ {
    /* 1273592*/ goto _exit_chpl__init_MemConsistency;
  }
  /* 1273568*/ modFormatStr = "%*s\n";
  /* 1273571*/ modStr = "MemConsistency";
  /* 1273574*/ printModuleInit(modFormatStr, modStr, INT64(14), _ln, _fn);
  /* 1273580*/ refIndentLevel = &moduleInitLevel;
  /* 1273583*/ *(refIndentLevel) += INT64(1);
  /* 1273557*/ chpl__init_MemConsistency_p = true;
  /* 1273586*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_MemConsistency:;
  /* 264786*/ return;
}

