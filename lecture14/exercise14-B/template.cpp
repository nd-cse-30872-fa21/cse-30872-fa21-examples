// Exercise 14-B: Max Min

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Functions

bool read_numbers(int &n, int &k, vector<int> &v) {
    int t;

    if (!(cin >> n >> k)) {
    	return false;
    }

    v.clear();
    for (int i = 0; i < n; i++) {
    	cin >> t;
    	v.push_back(t);
    }

    return true;
}

int compute_unfairness(int n, int k, vector<int> &v) {
    // TODO: Compute minimum unfairness
    return 0;
}

// Main execution

int main(int argc, char *argv[]) {
    int n, k;
    vector<int> v;

    while (read_numbers(n, k, v)) {
	cout << compute_unfairness(n, k, v) << endl;
    }

    return 0;
}
