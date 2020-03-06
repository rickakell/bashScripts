import sys

print("Hello World")

if(len(sys.argv) > 1):
    print("command line arguments found")
    for argument in sys.argv:
        print(f"Argument: {argument}")
