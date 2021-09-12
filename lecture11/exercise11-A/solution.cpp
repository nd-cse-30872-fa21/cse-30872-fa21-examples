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
    // Base: have complete subset
    if (k == d.size()) {
    	if (s.size() == LOTTO_NUMBERS) {
	    cout << s[0];
	    for (size_t i = 1; i < s.size(); i++) {
		cout << " " << s[i]; 
	    } 
	    cout << endl;
	}
    	return;
    }
    
    // Recurse: with current
    s.push_back(d[k]);
    display_combinations(s, d, k + 1);
    s.pop_back(); // Reset subset

    // Recurse: skip current
    display_combinations(s, d, k + 1);
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
