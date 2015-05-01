#!/bin/bash
# this is a script to enable the multi-locale execution

echo "Now Chapel runs on multi-locale !"
export CHPL_COMM=gasnet
export GASNET_SPAWNFN=L
#export SSH_CMD=ssh
#export SSH_OPTIONS=-x
export GASNET_ROUTE_OUTPUT=0
