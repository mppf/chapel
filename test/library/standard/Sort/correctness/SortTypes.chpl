config const size = 100000;
config const verbose = false;

use Sort, Math;

record UselessKeyComparator: keyComparator {
  proc key(x) {
    return x;
  }
}

record UselessKeyPartComparator: keyPartComparator {
  proc keyPart(x, i:int) {
    if isTuple(x) {
      type tt = x(0).type;
      if i < x.size then
        return (keyPartStatus.returned, x(i));
      else
        return (keyPartStatus.pre, 0:tt);

    } else if x.type == string {
      return (new defaultComparator()).keyPart(x, i);
    } else if isNumericType(x.type) {
      if i == 0 then
        return (keyPartStatus.returned, x);
      else
        return (keyPartStatus.pre, x);
    } else {
      compilerError("not handled");
    }
  }
}

proc isTupleOfString(type t) param {
  if isHomogeneousTupleType(t) {
    var tmp:t;
    return tmp(0).type == string;
  }
  
  return false;
}

proc isRealOrTupleOfReal(type t) param {
  if isHomogeneousTupleType(t) {
    var tmp:t;
    return isRealOrTupleOfReal(tmp(0).type);
  }
  
  return isRealType(t);
}

proc checkSorts(arr, comparator) {
  if verbose then
    writeln("checking with comparator ", comparator.type:string);
  // check default sorter
  if verbose then
    writeln("default sort");
  var a = arr;
  sort(a, comparator);
  assert(isSorted(a, comparator));
  // check the various algorithms that can be used by the default sort
  if !isTupleOfString(arr[1].type) {
    // OK to check radix sorts

    // check msbRadixSort
    if verbose then
      writeln("msbRadixSort");
    var b = arr;
    MSBRadixSort.msbRadixSort(b, comparator);
    assert(isSorted(b, comparator));
    assert(a.equals(b));

    // check twoArrayRadixSort
    if verbose then
      writeln("twoArrayRadixSort");
    var c = arr;
    TwoArrayRadixSort.twoArrayRadixSort(c, comparator);
    assert(isSorted(b, comparator));
    assert(a.equals(b));
  }

  // check quickSort since it is a fallback
  if verbose then
    writeln("quickSort");
  var d = arr;
  QuickSort.quickSort(d, comparator=comparator);
  assert(isSorted(d, comparator));
  assert(a.equals(d));

  // check two-array sample sort since in the future
  // 'proc sort' should use it in some cases
  // TODO: get this working
  //if verbose then
  //  writeln("twoArraySampleSort");
  //var e = arr;
  //TwoArraySampleSort.twoArraySampleSort(e, comparator=comparator);
  //assert(isSorted(e, comparator));
  //assert(a.equals(e));
}

proc checkSorts(arr) {
  checkSorts(arr, new defaultComparator());
  checkSorts(arr, new reverseComparator());
  checkSorts(arr, new UselessKeyComparator());
  checkSorts(arr, new reverseComparator(new UselessKeyComparator()));
  if !isRealOrTupleOfReal(arr[1].type) && !isTupleOfString(arr[1].type) {
    checkSorts(arr, new UselessKeyPartComparator());
    checkSorts(arr, new reverseComparator(new UselessKeyPartComparator()));
  }
}

proc generate(type t, i:int) {
  if isTupleType(t) {
    var ret:t;
    type t1 = ret(0).type;
    type t2 = ret(1).type;
    ret(0) = ((if i < 100 then 100 else 0) + (i % 17)): t1;
    ret(1) = (i % 777):t2;
    if t1 != string { 
      if i == 0 then
        ret(0) = max(ret(0).type);
      if i == 1 then
        ret(1) = max(ret(0).type);
    }
    return ret;
  } else if isIntType(t) || isUintType(t) {
    return (i * i + (i % 7717421)):t;
  } else if t == string {
    var rep1 = (i%31):string;
    var rep2 = (i%41):string;
    var rep3 = (i%57):string;
    if i%171 == 0 then
      rep1 = "";
    if i%111 == 0 then
      rep2 = "";
    if i%13 == 0 then
      rep3 = "";
    var n1 = i%7;
    var n2 = i%11;
    var n3 = i%13;
    return rep1*n1 + rep2*n2 + rep3*n3;
  } else if isRealType(t) {
    var ii:t = i:t;
    return (sqrt(i) + ii*ii + sin(ii)):t;
  }
}

proc checkem(type t) {
  writeln("testing sorts of ", t:string);
  var arr:[1..size] t;
  for (i,a) in zip(arr.domain, arr) {
    a = generate(t, i);
  }
  checkSorts(arr);
}
