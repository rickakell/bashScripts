#!/bin/bash

numberArguments=${#@}
if [[ $numberArguments < 3 ]]
then
    echo -e "Usage:\n./runMultipleTimes.sh <timesToRun> [command] <executable> [flags] [executableArguments]"
    echo "example: ./runMultipleTimes.sh 5 python3 pythonTest.py 20"
else
    timesToRun=$1
    for (( i = 1; i <= $timesToRun; i++ ))
    do
        echo Run number ${i}:
        # slice the command line input to remove file name and timesToRun
        ${@:2}
    done
fi
