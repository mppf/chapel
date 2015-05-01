class Tree {
  var data: string;
  var left, right: Tree;
  proc ~Tree() {
    if left then delete left;
    if right then delete right;
  }
}

var tree = new Tree("a", new Tree("b"), new Tree("c", new Tree("d"), new Tree("e")));
iter postorder(tree: Tree): string {
  if tree != nil {
    for child in postorder(tree.left) do
      yield child;
    for child in postorder(tree.right) do
      yield child;
    yield tree.data;
  }
}
proc Tree.writeThis(x: Writer)
{
  var first = true;
  for node in postorder(tree) {
    if first then first = false;
      else x.write(" ");
    write(node);
  }
}
writeln("Tree Data");
writeln(tree);
delete tree;
