config const c = 55;
proc foo(X: [1..5] int) { X = c; }
var A: [1..10 by 2] int;
foo(A);
writeln(A);
