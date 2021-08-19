#!/usr/bin/env python3

import sys

# Functions

def count_naive(numbers):
    total = 0
    for index, number in enumerate(numbers):
        if number in numbers[index + 1:]:
            total += 1
    return total

def count_table(numbers):
    total = 0
    seen  = set()
    for number in numbers:
        if number in seen:
            total += 1
        else:
            seen.add(number)
    return total

def count_sorted(numbers):
    total = 0
    numbers.sort()
    for index, number in enumerate(numbers):
        if number == numbers[index - 1]:
            total += 1
    return total

# Main Execution

def main():
    numbers = [int(line) for line in sys.stdin]
    #print(count_naive(numbers))
    print(count_table(numbers))
    #print(count_sorted(numbers))

if __name__ == '__main__':
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
