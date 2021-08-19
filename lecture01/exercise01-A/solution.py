#!/usr/bin/env python3

'''
Exercise 01-A: Line Totals
'''

import sys

def main():
    for line in sys.stdin:
        total = sum(map(int, line.split()))
        print(total)

if __name__ == '__main__':
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
