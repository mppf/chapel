#!/bin/csh

cd ../../..
source util/quickstart/setchplenv.csh
chpl examples/hello.chpl -o util/test/test-setchplenv/hello
util/test/test-setchplenv/hello
