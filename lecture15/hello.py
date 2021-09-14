#!/usr/bin/env python3

''' hello

A simple module greeting module.
'''

import os

# Functions

def hello(user, n=1):
    ''' Display Hello, user! n times. '''
    for _ in range(n):
        print('Hello, {}!'.format(user))

