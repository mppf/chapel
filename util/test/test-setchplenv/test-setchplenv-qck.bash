#!/bin/bash

cd ../../..
source util/quickstart/setchplenv.bash
chpl examples/hello.chpl -o util/test/test-setchplenv/hello
util/test/test-setchplenv/hello
