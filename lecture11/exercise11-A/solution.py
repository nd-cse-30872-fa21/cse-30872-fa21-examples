#!/usr/bin/env python3

# Exercise 11-A: Lotto

import itertools
import sys

# Constants

LOTTO_NUMBERS = 6

# Functions

def display_combinations(s):
    for combination in sorted(itertools.combinations(s, LOTTO_NUMBERS)):
        print(' '.join(map(str, combination)))

def display_combinations(s, d, k):
    '''
    s:  Current combination
    d:  Numbers to choose from
    k:  Current element index
    '''
    if k == len(d):
        if len(s) == LOTTO_NUMBERS:
            print(' '.join(map(str, s)))
        return

    display_combinations(s + [d[k]], d, k + 1)
    display_combinations(s         , d, k + 1)

# Main execution

def main():
    for line, numbers in enumerate(map(str.split, sys.stdin)):
        if len(numbers) <= 1:
            break
        
        if line:
            print('')

        display_combinations([], list(map(int, numbers[1:])), 0)

if __name__ == '__main__':
    main()
