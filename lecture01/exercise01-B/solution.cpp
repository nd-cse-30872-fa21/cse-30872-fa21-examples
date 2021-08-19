// Exercise 01-B: Fixed Totals

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    int n, x;

    while (cin >> n && n) {
    	int total = 0;
    	for (int i = 0; i < n; i++) {
    	    cin >> x;
    	    total += x;
	}

	cout << total << endl;
    }

    return 0;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
