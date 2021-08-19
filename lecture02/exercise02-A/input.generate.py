#!/usr/bin/env python3

import random

MIN   = 0
MAX   = 1<<20
ITEMS = MAX

def main():
    for i in range(MAX):
        print(random.randint(MIN, MAX))

if __name__ == '__main__':
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
