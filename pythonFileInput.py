#!/bin/python3
import sys

def main():
    if(len(sys.argv) != 2):
        print("Must have 1 file as a command line argument")
    else:
        inputFile = sys.argv[1]
        with open(inputFile, "r") as inFile:
            print(inFile.read() * 2)


if __name__ == "__main__":
    main()
