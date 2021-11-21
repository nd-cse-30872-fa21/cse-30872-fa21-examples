#!/usr/bin/env python3

# Functions

def make_primes(n):
    ''' Generate set of primes from 2 to n (inclusive) using Sieve of
    Eratosthenes '''

    primes = set(range(2, n + 1))

    for number in range(2, n + 1):
        for multiple in range(2*number, n + 1, number):
            if multiple in primes:
                primes.remove(multiple)

    return primes

# Main Execution

def main():
    primes = make_primes(100)
    for i in range(100):
        if i in primes:
            print(i)

if __name__ == '__main__':
    main()
