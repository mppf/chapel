#!/bin/bash

if [ ! -d util/test/test-setchplenv ]
then
  echo "Must launch from Chapel home directory"
  exit -1
fi

chpl_home=`pwd`

cd util/test/test-setchplenv

RESULTS=()

testit () {
  mode=$1
  shell=$2

  # Clear out any files from previous run
  rm -f ./hello ./hello_real

  path=`which $shell`
  if [ $? -eq 0 ]
  then
    if [ -z "$path" ]
    then
      echo "Missing $shell"
      exit -1
    fi
    cmd="./test-setchplenv-$mode.$shell"
    if [ -f $cmd ]
    then
      echo "Running $cmd"
      got=`$cmd`
      if [ $? -eq 0 ]
      then
        echo "return code OK"
        if [[ "$got" =~ "Hello, world!" ]]
        then
          echo "hello output OK"
          echo "$got"
          echo "PASS $mode $shell"
          RESULTS+=("PASS-$mode-$shell")
        else
          echo "FAIL $cmd: bad program output"
          echo "$got"
          RESULTS+=("FAIL-$mode-$shell")
        fi
      else
        echo "FAIL $cmd: bad return code"
        echo "$got"
        RESULTS+=("FAIL-$mode-$shell")
      fi
    else
      echo "Missing test helper $cmd"
    fi
  else
    echo "Missing $shell"
  fi
  
  # Clear out any files from previous run
  rm -f ./hello ./hello_real
}

for x in $chpl_home/util/setchplenv.*
do
  echo
  echo
  loc=${x#$chpl_home/}
  echo $loc
  shell=${loc#util/setchplenv.}
  echo $shell
  testit std "$shell"
done

for x in $chpl_home/util/quickstart/setchplenv.*
do
  echo
  echo
  loc=${x#$chpl_home/}
  echo $loc
  shell=${loc#util/quickstart/setchplenv.}
  echo $shell
  testit qck "$shell"
done

echo
echo

for r in ${RESULTS[@]}
do
  echo $r
done
