// Exercise 01-A: Line Totals

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    string line;

    while (getline(cin, line)) {
    	stringstream ss(line);

    	int total = 0;
    	int n;
    	while (ss >> n) {
    	    total += n;
	}

	cout << total << endl;
    }

    return 0;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
