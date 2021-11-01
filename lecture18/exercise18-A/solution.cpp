// Exercise 18-A: Graph Traversal

#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

// WalkType Constants

typedef enum {
    DFS_REC,
    DFS_ITER,
    BFS_ITER,
} WalkType;

// Graph structure

typedef unordered_map<int, set<int>> Graph;

// Load graph from standard input

void load_graph(Graph &g) {
    // Read edges
    int source, target;
    while (cin >> source >> target) {
        g[source].insert(target);
    }
}

// Depth-First-Search (recursive)

void walk_graph_dfs_rec(Graph &g, int v, set<int> &visited) {
    // TODO
    if (visited.count(v))
    	return;

    cout << v << endl;

    visited.insert(v);
    for (auto &u : g[v])
    	walk_graph_dfs_rec(g, u, visited);
}

// Depth-First-Search (iterative)

void walk_graph_dfs_iter(Graph &g, int v) {
    // TODO
    stack<int> frontier;
    set<int>   visited;

    frontier.push(v);

    while (!frontier.empty()) {
    	auto n = frontier.top(); frontier.pop();

    	if (visited.count(n))
    	    continue;

    	cout << n << endl;

    	visited.insert(n);

    	for (auto it = g[n].rbegin(); it != g[n].rend(); it++)
    	    frontier.push(*it);
    }
}

// Breadth-First-Search (iterative)

void walk_graph_bfs_iter(Graph &g, int v) {
    // TODO
    queue<int> frontier;
    set<int>   visited;

    frontier.push(v);

    while (!frontier.empty()) {
    	auto n = frontier.front(); frontier.pop();

    	if (visited.count(n))
    	    continue;

    	cout << n << endl;

    	visited.insert(n);

    	for (auto &u : g[n])
    	    frontier.push(u);
    }
}

// Walk graph dispatch function

void walk_graph(Graph &g, int root, WalkType w) {
    set<int> visited;

    switch (w) {
        case DFS_REC:
            walk_graph_dfs_rec(g, root, visited);
            break;
        case DFS_ITER:
            walk_graph_dfs_iter(g, root);
            break;
        case BFS_ITER:
            walk_graph_bfs_iter(g, root);
            break;
        default:
            cerr << "Unknown WalkType: " << w << endl;
            break;
    }
}

// Main execution

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " root [0 = DFS_REC | 1 = DFS_ITER | 2 = BFS_ITER]" << endl;
        return EXIT_FAILURE;
    }

    int root = atoi(argv[1]);
    int walk = atoi(argv[2]);

    Graph g;

    load_graph(g);
    walk_graph(g, root, static_cast<WalkType>(walk));

    return EXIT_SUCCESS;
}
