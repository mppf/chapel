class Node {
  type eltType;
  var data: eltType;
  var next: Node(eltType);
}
var n: Node(real) = new Node(real, 3.14);
writeln(n.data);
writeln(n.next);
writeln(typeToString(n.next.type));
delete n;
