class Node {
  var data;
  var next: Node(data.type) = nil;
}
var list = new Node(1);
list.next = new Node(2);
writeln(list.data);
writeln(list.next.data);
