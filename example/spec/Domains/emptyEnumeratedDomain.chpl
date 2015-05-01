enum Counter { one, two, three };
var D : domain ( Counter );
writeln("D has ", D.numIndices, " indices.");
D.clear();
writeln("D has ", D.numIndices, " indices.");
