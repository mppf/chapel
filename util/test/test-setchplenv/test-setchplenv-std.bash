#!/bin/bash

cd ../../..
source util/setchplenv.bash
chpl examples/hello.chpl -o util/test/test-setchplenv/hello
util/test/test-setchplenv/hello
