#!/usr/bin/env python3

# Exercise 10-C: Contiguous Array

import collections
import sys

# Functions

def find_maximum_contiguous_array(array):
    return 0 
        
# Main execution

def main():
    for line in sys.stdin:
        digits = map(int, line.split())
        print(find_maximum_contiguous_array(digits))

if __name__ == '__main__':
    main()
