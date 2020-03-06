#!/bin/bash

numberArguments=${#@}

if [[ $numberArguments < 3 ]]
then
echo -e "Usage:\n./runTests.sh <inputFileFolder> <outputFileFolder> [command] <executable> [flags] [arguments]"
echo "example: ./runTests.sh inputFolder outputFolder python3 pythonTest.py 1 2 3"
else
	inputFolder=$1
	outputFolder=$2
	for input in $(ls $inputFolder)
	do
		echo Running $input...
		./${@:3} $inputFolder/$input > $outputFolder/output$input
		echo $input Complete
	done
fi

