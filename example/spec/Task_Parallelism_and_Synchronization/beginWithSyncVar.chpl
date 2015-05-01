class Tree {
  var isLeaf: bool;
  var left, right: Tree;
  var value: int;

  proc sum():int {
    if (isLeaf) then 
       return value;

    var x$: sync int;
    begin x$ = left.sum();
    var y = right.sum();
    return x$ + y;
  }
}
var tree: Tree = new Tree(false, new Tree(false, new Tree(true, nil, nil, 1),
                                                 new Tree(true, nil, nil, 1), 1),
                                 new Tree(false, new Tree(true, nil, nil, 1),
                                                 new Tree(true, nil, nil, 1), 1), 1);
writeln(tree.sum());
proc Tree.~Tree() {
  if isLeaf then return;
  delete left;
  delete right;
}
delete tree;
