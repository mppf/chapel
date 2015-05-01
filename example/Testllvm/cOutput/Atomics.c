/* Atomics.chpl:52 */
/*  235266 */ static void chpl__init_Atomics(int64_t _ln, c_string _fn) {
  /* 1273605 */ c_string modFormatStr;
  /* 1273606 */ c_string modStr;
  /* 1273622 */ _ref_int32_t refIndentLevel = NULL;
  /* 235267*/ /* 1273641*/ if (chpl__init_Atomics_p) /* 1273642*/ {
    /* 1273638*/ goto _exit_chpl__init_Atomics;
  }
  /* 1273614*/ modFormatStr = "%*s\n";
  /* 1273617*/ modStr = "Atomics";
  /* 1273620*/ printModuleInit(modFormatStr, modStr, INT64(7), _ln, _fn);
  /* 1273626*/ refIndentLevel = &moduleInitLevel;
  /* 1273629*/ *(refIndentLevel) += INT64(1);
  /* 1273603*/ chpl__init_Atomics_p = true;
  /* 1273219*/ {
    /* 1273220*/ chpl__init_MemConsistency(_ln, _fn);
  }
  /* 1273632*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Atomics:;
  /* 269151*/ return;
}

/* Atomics.chpl:247 */
/*   21939 */ static void atomic_fence(memory_order order, int64_t _ln, c_string _fn) {
  /* 21940*/ /* 21944*/ atomic_thread_fence(order);
  /* 21950*/ chpl_rmem_consist_fence(order, _ln, _fn);
  /* 266217*/ return;
}

/* Atomics.chpl:280 */
/*  191463 */ static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme, int64_t _ln, c_string _fn) {
  /*  191465 */ atomicflag this7;
  /* 191464*/ /* 191471*/ this7 = *(meme);
  /* 191481*/ (&this7)->_v = _v;
  /* 191486*/ return this7;
}

/* Atomics.chpl:1066 */
/*  191759 */ static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme, int64_t _ln, c_string _fn) {
  /*  191761 */ atomic_int64 this7;
  /* 191760*/ /* 191767*/ this7 = *(meme);
  /* 191777*/ (&this7)->_v = _v;
  /* 191782*/ return this7;
}

