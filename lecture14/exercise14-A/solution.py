#!/usr/bin/env python3

# Exercise 14-A: Cookies

import sys

# Functions

def readline():
    return sorted(map(int, sys.stdin.readline().split()), reverse=True)

def feed_children(children, cookies):
    count = 0

    while cookies and children:
        child  = children.pop(0)
        cookie = cookies[0]

        if child <= cookie:
            cookies.pop(0)
            count += 1

    return count

# Main execution

def main():
    while (children := readline()) and (cookies := readline()):
        print(feed_children(children, cookies))

if __name__ == '__main__':
    main()
