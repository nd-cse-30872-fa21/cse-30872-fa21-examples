#!/usr/bin/env python3

# Functions

def is_prime(n):
    ''' Returns whether or not n is prime. '''
    if n <= 1:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False

    return True

# Main Execution

def main():
    for i in range(100):
        if is_prime(i):
            print(i)

if __name__ == '__main__':
    main()
