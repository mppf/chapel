module M1 {
  private const foo = 10;
}

module M2 {
  use M1 only;
  proc main() {
    writeln(M1.foo);
    // Ensures that the private module level constant foo is not visible
    // via explicit naming.
  }
}
