use CTypes;

extern proc returns_c_string():c_ptrConst(c_char);
extern proc returns_c_string_in_argument(ref ret:c_ptrConst(c_char));
extern proc print_c_string(arg:c_ptrConst(c_char));
extern proc print_c_string_len(arg:c_ptrConst(c_char), len:c_int);
extern proc return_c_string_in_argument_with_length(ref ret:c_ptrConst(c_char), ref len:c_int);

proc go() {
  var str = "Hello";

  writeln("Should be Hello:");
  print_c_string(c_ptrToConst_helper(str):c_ptrConst(c_char));

  writeln("Should be returned_c_string x3");
  var gotc = returns_c_string();
  print_c_string(gotc);

  writeln(gotc:string);

  var gots = gotc:string;
  writeln(gots);

  writeln("Should be returned_c_string_in_argument x3");
  var argc:c_ptrConst(c_char);
  returns_c_string_in_argument(argc);

  print_c_string(argc);

  writeln(argc:string);

  var args = argc:string;
  writeln(args);

  writeln("Should be returned_c_string_in_argument_with_length x3");
  var arg2c:c_ptrConst(c_char);
  var len:c_int;
  return_c_string_in_argument_with_length(arg2c, len);

  print_c_string_len(arg2c, len);

  writeln((arg2c:string)[0..len-1]);

  var arg2s = (arg2c:string)[0..len-1];
  writeln(arg2s);
}

go();
