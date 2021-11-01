// Exercise 18-B: Bicolorable

#include <iostream>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <vector>

using namespace std;

// Constants

enum {
    BLUE,
    RED
};

// Type Definitions

typedef unordered_map<int, vector<int>>	Graph;
typedef tuple<int, int>			FTuple;
typedef stack<FTuple>		        Frontier;
typedef unordered_map<int, int>		Visited;

// Functions

Graph read_graph(int n, int m) {
    Graph g;
    int s, t;

    for (int i = 0; i < m; i++) {
    	cin >> s >> t;
    	g[s].push_back(t);
    	g[t].push_back(s);
    }

    return g;
}

bool is_bicolorable(Graph &g) {
    Frontier frontier;
    Visited  visited;

    frontier.push(make_tuple(0, BLUE));

    while (!frontier.empty()) {
    	auto curr  = frontier.top(); frontier.pop();
    	auto node  = get<0>(curr);
    	auto color = get<1>(curr);

    	if (visited.count(node)) {
    	    if (color != visited[node]) {
    	    	return false;
	    }

	    continue;
	}

	visited[node] = color;

	for (auto &u : g[node]) {
	    frontier.push(make_tuple(u, (color + 1) % 2));
	}
    }

    return true;
}

// Main Execution

int main(int argc, char *argv[]) {
    int n, m;

    while (cin >> n >> m && n && m) {
	Graph g = read_graph(n, m);

	if (is_bicolorable(g)) {
	    cout << "BICOLORABLE" << endl;
	} else {
	    cout << "NOT BICOLORABLE" << endl;
	}
    }
    return 0;
}
