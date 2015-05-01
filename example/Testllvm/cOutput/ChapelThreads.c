/* ChapelThreads.chpl:30 */
/*  235278 */ static void chpl__init_ChapelThreads(int64_t _ln, c_string _fn) {
  /* 1273743 */ c_string modFormatStr;
  /* 1273744 */ c_string modStr;
  /* 1273760 */ _ref_int32_t refIndentLevel = NULL;
  /*  325446 */ int32_t call_tmp;
  /* 1112653 */ int64_t call_tmp2;
  /* 235279*/ /* 1273779*/ if (chpl__init_ChapelThreads_p) /* 1273780*/ {
    /* 1273776*/ goto _exit_chpl__init_ChapelThreads;
  }
  /* 1273752*/ modFormatStr = "%*s\n";
  /* 1273755*/ modStr = "ChapelThreads";
  /* 1273758*/ printModuleInit(modFormatStr, modStr, INT64(13), _ln, _fn);
  /* 1273764*/ refIndentLevel = &moduleInitLevel;
  /* 1273767*/ *(refIndentLevel) += INT64(1);
  /* 1273741*/ chpl__init_ChapelThreads_p = true;
  /* 325449*/ call_tmp = chpl_task_getenvNumThreadsPerLocale();
  /* 1112655*/ call_tmp2 = ((int64_t)(call_tmp));
  /* 293038*/ numThreadsPerLocale = call_tmp2;
  /* 1273770*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelThreads:;
  /* 270663*/ return;
}

