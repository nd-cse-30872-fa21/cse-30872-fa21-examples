// Exercise 11-A: Lotto

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// Constants

const int LOTTO_NUMBERS = 6;

// Functions

void display_combinations(vector<int> &s, vector<int> &d, size_t k) {
    // TODO: Recursively display combinations

    // Base: have complete subset
    
    // Recurse: with current

    // Recurse: skip current
}

// Main execution

int main(int argc, char *argv[]) {
    string line;
    for (size_t line_count = 0; getline(cin, line); line_count++) {
    	stringstream ss(line);
    	int k;
    	ss >> k;
    	if (!k) {
    	    break;
	}

	int n;
	vector<int> numbers;
	vector<int> combination;
	while (ss >> n) {
	    numbers.push_back(n);
	}
	
	sort(numbers.begin(), numbers.end());

	if (line_count) {
	    cout << endl;
	}

	display_combinations(combination, numbers, 0);
    }

    return 0;
}
