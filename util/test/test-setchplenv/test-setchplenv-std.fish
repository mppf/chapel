#!/usr/bin/env fish

cd ../../..
. util/setchplenv.fish
chpl examples/hello.chpl -o util/test/test-setchplenv/hello
util/test/test-setchplenv/hello
