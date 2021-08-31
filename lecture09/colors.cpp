// Sort Colors

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// Functions

vector<int> count_colors(string &s) {
    vector<int>  counts = {0, 0, 0};
    stringstream ss(s);
    int          color;

    while (ss >> color) {
    	counts[color]++;
    }

    return counts;
}

// Main execution

int main(int argc, char *argv[]) {
    string line;

    while (getline(cin, line)) {
    	auto counts = count_colors(line);
    	bool first  = true;
    	for (size_t i = 0; i < counts.size(); i++) {
    	    for (int c = 0; c < counts[i]; c++) {
    	    	cout << (first ? "" : " ") << i;
    	    	first = false;
	    }
	}
	cout << endl;
    }

    return 0;
}
