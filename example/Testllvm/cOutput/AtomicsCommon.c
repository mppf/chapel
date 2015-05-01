/* AtomicsCommon.chpl:21 */
/*  235275 */ static void chpl__init_AtomicsCommon(int64_t _ln, c_string _fn) {
  /* 1273697 */ c_string modFormatStr;
  /* 1273698 */ c_string modStr;
  /* 1273714 */ _ref_int32_t refIndentLevel = NULL;
  /* 235276*/ /* 1273733*/ if (chpl__init_AtomicsCommon_p) /* 1273734*/ {
    /* 1273730*/ goto _exit_chpl__init_AtomicsCommon;
  }
  /* 1273706*/ modFormatStr = "%*s\n";
  /* 1273709*/ modStr = "AtomicsCommon";
  /* 1273712*/ printModuleInit(modFormatStr, modStr, INT64(13), _ln, _fn);
  /* 1273718*/ refIndentLevel = &moduleInitLevel;
  /* 1273721*/ *(refIndentLevel) += INT64(1);
  /* 1273695*/ chpl__init_AtomicsCommon_p = true;
  /* 1273724*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_AtomicsCommon:;
  /* 270648*/ return;
}

/* AtomicsCommon.chpl:22 */
/*  192146 */ static atomic_refcnt _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, int64_t _ln, c_string _fn) {
  /*  192148 */ atomic_refcnt this7;
  /* 192147*/ /* 192154*/ this7 = *(meme);
  /* 192167*/ (&this7)->_cnt = *(_cnt);
  /* 192172*/ return this7;
}

