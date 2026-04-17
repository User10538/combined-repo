#!/usr/bin/python3
import sys

def factorial(n):
    result = 1
    while n > 1:
        result *= n
        n -= 1  # Decrement n to eventually terminate the loop
    return result

# Make sure to check if the correct argument is passed
if len(sys.argv) != 2:
    print("Usage: python3 factorial.py <number>")
    sys.exit(1)

f = factorial(int(sys.argv[1]))
print(f)
