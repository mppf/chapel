use SortedMap;



class C {
  var i: int;
}

var m = new sortedMap(string, shared C, false, new defaultComparator());
m.add("one", new shared C(1));
m.add("two", new shared C(2));

var x = m.getAndRemove("one");

writeln(x);
writeln(m);
