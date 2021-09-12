#!/usr/bin/env python3

# Functions

def permutations(p, c):
    '''
    p:  Current permutation
    c:  Set of candidates
    '''
    # Base case: no more candidates, so yield permutation
    if not c:
        yield p

    # Recursive case
    else:
        # For each candidate, add it to permutation and remove it from
        # candidates
        for e in sorted(c):
            yield from permutations(p + e, c.difference({e}))

# Main Execution

def main():
    for permutation in permutations('', set('ABC')):
        print(permutation)

if __name__ == '__main__':
    main()
