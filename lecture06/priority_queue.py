#!/usr/bin/env python3

import sys

# Class

class PriorityQueue(object):

    def __init__(self):
        self.data = []

    def push(self, value):
        for index, current in enumerate(self.data):
            if value >= current:
                self.data.insert(index, value)
                return

        self.data.append(value)

    def pop(self):
        return self.data.pop(0)

    def empty(self):
        return not self.data

# Main Execution

def main():
    for line in sys.stdin:
        queue = PriorityQueue()

        for value in line.split():
        #for value in map(int, line.split()): # FIX
            queue.push(value)

        while not queue.empty():
            print(queue.pop())

if __name__ == '__main__':
    main()
