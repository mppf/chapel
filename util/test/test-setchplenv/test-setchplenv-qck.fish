#!/usr/bin/env fish

cd ../../..
. util/quickstart/setchplenv.fish
chpl examples/hello.chpl -o util/test/test-setchplenv/hello
util/test/test-setchplenv/hello
