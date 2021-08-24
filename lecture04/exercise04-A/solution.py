#!/usr/bin/env python3

import collections
import sys

# Functions

def is_anagram_count(s, t):
    sc = [0]*26
    tc = [0]*26

    for c in s: sc[ord(c.lower()) - ord('a')] += 1
    for c in t: tc[ord(c.lower()) - ord('a')] += 1

    return sc == tc

def is_anagram_sorted(s, t):
    return sorted(s.lower()) == sorted(t.lower())

def is_anagram_histogram(s, t):
    sc = collections.Counter(s.lower())
    tc = collections.Counter(t.lower())
    return sc == tc

is_anagram = is_anagram_count #Select one of the solutions

# Main Execution

def main():
    for line in sys.stdin:
        first, second = line.strip().split()
        print('Anagram' if is_anagram(first, second) else 'Not Anagram')

if __name__ == '__main__':
    main()
