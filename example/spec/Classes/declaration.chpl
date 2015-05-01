class C { }
var c : C;      // c has the class type C, initialized with the value nil.
c = new C();    // Now c refers to an object of type C.
var c2 = c;     // The type of c2 is also C.
                // c2 refers to the same object as c.
class D : C {}  // Class D is derived from C.
c = new D();    // Now c refers to an object of type D.
delete c;   // This deletes the new D.
delete c2;  // This deletes the new C.
