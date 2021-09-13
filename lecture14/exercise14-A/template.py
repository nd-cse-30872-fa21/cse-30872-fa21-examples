#!/usr/bin/env python3

# Exercise 14-A: Cookies

import sys

# Functions

def readline():
    # TODO: Read a line from stdin
    return []

def feed_children(children, cookies):
    # TODO: Return number of children fed with cookies
    return 0

# Main execution

def main():
    while (children := readline()) and (cookies := readline()):
        print(feed_children(children, cookies))

if __name__ == '__main__':
    main()
