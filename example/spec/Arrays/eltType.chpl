const D: domain(2) = {1..10, 1..10};
var A: [D] real;
var x: A.eltType;
writeln(typeToString(x.type));
writeln(typeToString(A.eltType));
