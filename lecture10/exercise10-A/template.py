#!/usr/bin/env python3

# Exercise 10-A: Palindromic Permutations

import collections
import sys

# Functions

def is_palindromic(s):
    # TODO
    return False

# Main Execution

def main():
    for word in sys.stdin:
        print('Yes' if is_palindromic(word.rstrip()) else 'No')

if __name__ == '__main__':
    main()
