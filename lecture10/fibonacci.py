#!/usr/bin/env python3

import sys

# Globals

Fibonacci = {}

# Functions

def fibonacci(n):
    ''' Compute the nth number in the Fibonacci sequence.

    >>> fibonacci(1)
    1

    >>> fibonacci(5)
    5
    
    >>> fibonacci(10)
    55
    '''

    # Base cases
    if n == 0:
        return 0
    elif n <= 2:
        return 1

    # Recursive step
    '''
    return fibonacci(n - 1) + fibonacci(n - 2)
    '''

    # Memoize recursive step
    if n not in Fibonacci:
        Fibonacci[n] = fibonacci(n - 1) + fibonacci(n - 2)

    return Fibonacci[n]

# Main Execution

def main():
    for i in map(int, sys.stdin):
        print('fibonacci({}) = {}'.format(i, fibonacci(i)))

if __name__ == '__main__':
    main()
