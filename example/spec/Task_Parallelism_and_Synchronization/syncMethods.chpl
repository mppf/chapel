{ // }
var x$: sync int;
var y$: single int;
var z: int;
x$ = 5;
y$ = 6;
z = x$ + y$;
writeln((x$.readXX(), y$, z));
// {
}
{ // }
var x$: sync int;
var y$: single int;
var z: int;
x$.writeEF(5);
y$.writeEF(6);
z = x$.readFE() + y$.readFF();
writeln((x$.readXX(), y$, z));
// {
}
