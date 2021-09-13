#!/usr/bin/env python3

# Exercise 14-B: Max Min

import sys

# Functions

def read_numbers():
    try:
        n = int(sys.stdin.readline())
        k = int(sys.stdin.readline())
        v = [int(sys.stdin.readline()) for _ in range(n)]
    except ValueError:
        return 0, 0, None

    return n, k, v

def compute_unfairness(n, k, v):
    v.sort()                    # Order from smallest to largest
    u = v[n - 1] - v[0]         # Initial unfairness
    for i in range(0, n - k + 1):
        d = v[i + k - 1] - v[i] # Difference between max and min in sequence
        u = min(u, d)           # Take smallest unfairness
    return u

# Main execution

def main():
    n, k, v = read_numbers()
    while n: 
        print(compute_unfairness(n, k, v))
        n, k, v = read_numbers()

if __name__ == '__main__':
    main()
