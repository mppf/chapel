#!/bin/sh

cd ../../..
. util/setchplenv.sh
chpl examples/hello.chpl -o util/test/test-setchplenv/hello
util/test/test-setchplenv/hello
