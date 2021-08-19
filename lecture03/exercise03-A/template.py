#!/usr/bin/env python3

import sys

MATRIX = []
is_matrix = False

for line in sys.stdin:
    if not is_matrix:
        n = int(line)
        is_matrix = True
    else:
        numbers = []
        for number in line.split():
            numbers.append(int(number))
        MATRIX.append(numbers)

    if n and len(MATRIX) == n:
        CurRow = 1
        MaxRow = 0
        MaxSum = 0
        for cur_numbers in MATRIX:
            CurSum = sum(cur_numbers)
            if CurSum > MaxSum:
                MaxRow = CurRow
                MaxSum = CurSum

            CurRow += 1

        print(MaxRow)

        MATRIX = []
        is_matrix = False

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
