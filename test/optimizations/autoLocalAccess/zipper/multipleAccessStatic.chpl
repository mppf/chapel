use common;

var D = createDom({1..10});

var A: [D] int;

// there must be only one static check, and two accesses optimized
forall (i, loopIdx) in zip(D, 1..) with (ref A) {
  if i>1 && i<10 then
    A[i] = A[i-1] + A[i] * loopIdx + A[i+1];
}
