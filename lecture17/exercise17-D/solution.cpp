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
    if (index >= values.size()) {
    	return nullptr;
    }

    return new Node<int> {
    	values[index],
    	read_tree(values, 2*index + 1),
    	read_tree(values, 2*index + 2)
    };
}

void	dump_tree(IntNode *root) {
    queue<IntNode *> nodes;
    bool first = true;

    nodes.push(root);

    while (!nodes.empty()) {
    	auto node = nodes.front(); nodes.pop();

    	if (!first) {
    	    cout << ",";
	} else {
    	    first = false;
	}
    	cout << node->value;

    	if (node->left)  nodes.push(node->left);
    	if (node->right) nodes.push(node->right);
    }

    cout << endl;
}

void	invert_tree(IntNode *root) {
    if (!root) {
    	return;
    }

    swap(root->left, root->right);
    invert_tree(root->left);
    invert_tree(root->right);
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
