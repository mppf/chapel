proc test(n:int) {
  var s:string;
  for i in 1..n do
    s += "a";
  writeln(s);
  writeln(s.locale_id);
}

for i in 1..40 do
  test(i);
