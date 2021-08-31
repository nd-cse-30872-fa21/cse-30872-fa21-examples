#!/usr/bin/env python3

import collections
import functools
import sys

# Structures

Person = collections.namedtuple('People', 'first last')

# Functions

def main():
    people = [Person(*line.split()) for line in sys.stdin]
    
    # 1. Sort using multiple passes
    #people = sorted(people, key=lambda p: p.first)
    #people = sorted(people, key=lambda p: p.last)

    # 2. Sort using multiple factors
    people = sorted(people, key=lambda p: (p.last, p.first))

    for person in people:
        print(f'{person.first} {person.last}')

# Main execution

if __name__ == '__main__':
    main()
