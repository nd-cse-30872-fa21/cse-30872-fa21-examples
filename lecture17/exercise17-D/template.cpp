// Exercise 17-D: Invert Binary Tree

#include <iostream>
#include <memory>
#include <queue>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Node structures

template <typename T>
struct Node {
    T value;
    struct Node *left;
    struct Node *right;
};

typedef Node<int> IntNode;

// Functions

bool read_values(vector<int> &values) {
    values.clear();

    string line;
    if (getline(cin, line)) {
    	stringstream ss(line);
    	int i;

    	while (ss >> i) {
    	    values.push_back(i);
	}
    }

    return !values.empty();
}

IntNode*  read_tree(vector<int> &values, size_t index=0) {
    // TODO: Use divide and conquer to parse tree
    return NULL
}

void	dump_tree(IntNode *root) {
    // TODO: Use BFS traversal with queue to dump values in tree
}

void	invert_tree(IntNode *root) {
    // TODO: Use divide and conquer to invert binary tree
}

// Main execution

int main(int argc, char *argv[]) {
    vector<int> values;

    while (read_values(values)) {
    	auto root = read_tree(values);
    	invert_tree(root);
    	dump_tree(root);
    }

    return 0;
}
