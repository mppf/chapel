config const n = 10000000;

proc kernel() {
  var s: string;
  for i in 1..10 {
    s += "a";
  }
  var t = s[2..6];
  var u: string;
  for ch in s {
    u += ch + " ";
  }
  var z = s + t + u;
  var count = 0;
  for ch in z {
    if ch == "a" then
      count += 1;
  }
  return count;
}

proc test() {
  var sum = 0;
  for i in 1..n {
    sum += kernel();
  }
  writeln(sum);
}
test();

