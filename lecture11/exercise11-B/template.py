#!/usr/bin/env python3

# Exercise 11-B: Phone Combinations

import sys

# Functions

def phone_combinations(numbers, letters):
    # TODO: Recursively generate combinations
    pass

# Main Execution

def main():
    for numbers in sys.stdin:
        for combination in phone_combinations(numbers.strip(), ''):
            print(combination)

if __name__ == '__main__':
    main()
