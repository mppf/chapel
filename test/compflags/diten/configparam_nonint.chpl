use CTypes;
config param areal: real = 3.14;
config param ac_string: c_ptrConst(c_char) = "hello";

proc main() {
  writeln(areal);
  writeln(ac_string:string);
}
