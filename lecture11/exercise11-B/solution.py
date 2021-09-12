#!/usr/bin/env python3

# Exercise 11-B: Phone Combinations
# https://leetcode.com/problems/letter-combinations-of-a-phone-number/

import sys

# https://docs.python.org/3/library/typing.html

from typing import List, Iterator

# Functions

LETTERS = {
    '2': 'abc',
    '3': 'def',
    '4': 'ghi',
    '5': 'jkl',
    '6': 'mno',
    '7': 'pqrs',
    '8': 'tuv',
    '9': 'wxyz',
}


'''
def phone_combinations(numbers: List[str], letters: str) -> List[str]:
    if not numbers:
        return [letters]

    results = []
    for letter in LETTERS[numbers[0]]:
        results.extend(
            phone_combinations(numbers[1:], letters + letter)
        )

    return results
'''

def phone_combinations(numbers: List[str], letters: str) -> Iterator[str]:
    if not numbers:
        yield letters
    else:
        for letter in LETTERS[numbers[0]]:
            yield from phone_combinations(numbers[1:], letters + letter)

# Main Execution

def main():
    for numbers in sys.stdin:
        for combination in phone_combinations(numbers.strip(), ''):
            print(combination)

if __name__ == '__main__':
    main()
