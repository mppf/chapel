use OS.POSIX;
writeln(getenv(c'GETENV_TEST_ENV_VAR').c_str():string);
const s = getenv(c'_GETENV_TEST_ENV_VAR'); // note underbar
writeln(if s == nil
        then 'this line is intentionally empty'
        else s:c_string:string);

writeln(string.createBorrowingBuffer(getenv('GETENV_TEST_ENV_VAR'.c_str())));
const sPtr = getenv('_GETENV_TEST_ENV_VAR'.c_str()); // note underbar
writeln(if sPtr == nil
        then 'this line is intentionally empty'
        else string.createBorrowingBuffer(sPtr));
