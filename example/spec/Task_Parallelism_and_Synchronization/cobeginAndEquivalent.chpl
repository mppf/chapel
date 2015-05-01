var s1, s2: sync int;
proc stmt1() { s1; }
proc stmt2() { s2; s1 = 1; }
proc stmt3() { s2 = 1; }
cobegin {
  stmt1();
  stmt2();
  stmt3();
}
var s1$, s2$, s3$: single bool;
begin { stmt1(); s1$ = true; }
begin { stmt2(); s2$ = true; }
begin { stmt3(); s3$ = true; }
s1$; s2$; s3$;
