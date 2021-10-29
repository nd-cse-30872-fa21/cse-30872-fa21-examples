#!/usr/bin/env python3

import collections
import heapq
import sys

# Build Graph

def read_graph():
    g = collections.defaultdict(dict)
    for line in sys.stdin:
        source, target, weight = line.split()
        g[source][target] = int(weight)
        g[target][source] = int(weight)
    return g

# Compute SSSP

def compute_sssp(g):
    frontier = []
    visited  = {}
    start    = list(g.keys())[0]

    heapq.heappush(frontier, (0, start, start))

    while frontier:
        weight, source, target = heapq.heappop(frontier)

        if target in visited:
            continue

        visited[target] = source

        for neighbor, cost in g[target].items():
            heapq.heappush(frontier, (weight + cost, target, neighbor))

    return visited

# Compute MST

def compute_mst(g):
    frontier = []
    visited  = {}
    start    = list(g.keys())[0]

    heapq.heappush(frontier, (0, start, start))

    while frontier:
        weight, source, target = heapq.heappop(frontier)

        if target in visited:
            continue

        visited[target] = source

        for neighbor, cost in g[target].items():
            heapq.heappush(frontier, (cost, target, neighbor))

    return visited

def reconstruct_path(visited, source, target):
    path = []
    curr = target

    while curr != source:
        path.append(curr)
        curr = visited[curr]

    path.append(source)
    return reversed(path)

# Main Execution

def main():
    g = read_graph()

    # SSSP
    v = compute_sssp(g)
    s = list(g.keys())[0]
    print('SSSP')
    for t in list(g.keys())[1:]:
        print('{} -> {} = {}'.format(s, t, ' '.join(reconstruct_path(v, s, t))))

    # MST
    m = compute_mst(g)
    e = sorted((min(s, t), max(s, t)) for s, t in m.items() if s != t)
    print('MST')
    print(sum(g[s][t] for s, t in e))
    for s, t in e:
        print(s, t)

if __name__ == '__main__':
    main()
