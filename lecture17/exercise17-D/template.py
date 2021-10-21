#!/usr/bin/env python3

# Exercise 17-D: Invert Binary Tree

import collections
import sys

# Classes

class Node:
    def __init__(self, value=0, left=None, right=None):
        self.value = value
        self.left  = left
        self.right = right

# Functions

def read_tree(values, index=0):
    # TODO: Use divide and conquer to parse tree
    pass

def walk_tree(root):
    # TODO: Use BFS Traversal with Queue to create list of values
    pass

def dump_tree(root):
    print(','.join(map(str, walk_tree(root))))

def invert_tree(root):
    # TODO: Use divide and conquer to invert binary tree
    pass

# Main Execution

def main():
    for line in sys.stdin:
        values = list(map(int, line.split()))
        root   = read_tree(values)

        invert_tree(root)
        dump_tree(root)

if __name__ == '__main__':
    main()
