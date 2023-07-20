proc myadd(param a:string, param b:string) param {
  return a + b;
}

proc myadd(a:string, b:string) {
  return a + b;
}
use CTypes;
proc run() {
  param a:c_ptrConst(c_char) = "a";
  param b:c_ptrConst(c_char) = "b";
  var c = myadd(a,b);
  compilerWarning(c.type:string);
  param d:c_ptrConst(c_char) = a + b;
  compilerWarning(d:string);

  var a_cs = a;
  var b_cs = b;
  myadd(a_cs, b_cs); // don't expect this to resolve
}
run();
