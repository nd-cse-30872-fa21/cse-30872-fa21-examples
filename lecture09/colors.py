#!/usr/bin/env python3

# Sort Colors

import sys

# Functions

def count_colors(colors):
    '''
    >>> count_colors([0, 1, 2])
    [1, 1, 1]
    
    >>> count_colors([0, 1, 2, 0, 1, 1])
    [2, 3, 1]
    '''
    counts = [0, 0, 0]

    for c in colors:
        counts[c] += 1

    return counts

def expand_counts(counts):
    '''
    >>> expand_counts([1, 1, 1])
    [0, 1, 2]

    >>> expand_counts([2, 3, 1])
    [0, 0, 1, 1, 1, 2]
    '''
    colors = []
    for i, v in enumerate(counts):
        colors.extend([i]*v)
    return colors

# Main execution

def main():
    for line in sys.stdin:
        counts = count_colors(map(int, line.split()))
        colors = expand_counts(counts)
        print(' '.join(map(str, colors)))

if __name__ == '__main__':
    main()
