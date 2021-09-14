#!/usr/bin/env python3

# Exercise 16-B: Squirrel Hunting

# Notes:
#
#   1. Each S(r, c) contains the optimal solution for that square.
#
#   2. Final solution is in the bottom right corner: S(n, n).
#
#   3. Building the table does not reveal what the path is, just what the
#   maximum squirrel population is.

import sys

def read_grid(n):
    grid = [[0 for _ in range(n + 1)]]  # Pad grid
    for _ in range(n):
        grid.append([0] + list(map(int, sys.stdin.readline().split())))
    return grid

def hunt_squirrels(grid, n):
    # 1. Initialize table
    table = [[0 for _ in range(n + 1)] for _ in range(n + 1)]

    # 2. Table[row][col] = Grid[row][col] + max(from_left, from_above)
    #
    #   S(r, c) = Max(S(r, c - 1), S(r - 1, c)) + G(r, c)
    #
    for row in range(1, n + 1):
        for col in range(1, n + 1):
            table[row][col] = grid[row][col] + max(
                table[row][col - 1],
                table[row - 1][col]
            )

    # 3. Use table result
    return table

def find_path(grid, n, table):
    # Reconstruct the path by going from the end to the beginning.
    path = []
    r, c = n, n

    while r > 0 and c > 0:
        # Add current position to path
        path.append(grid[r][c])

        # Consider which path we took based on the values in the table
        if table[r][c] - grid[r][c] == table[r][c - 1]:
            c -= 1
        else:
            r -= 1
    
    # Reverse path since we want to go from start to end
    path.reverse()
    return path

def main():
    while True:
        try:
            n = int(sys.stdin.readline())
        except ValueError:
            break

        grid  = read_grid(n)
        table = hunt_squirrels(grid, n)
        print(table[n][n])

        #path  = find_path(grid, n, table)
        #print(path)

# Main execution

if __name__ == '__main__':
    main()
