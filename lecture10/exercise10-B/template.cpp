// Exercise 10-B: Happy Number

#include <iostream>
#include <numeric>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Global variables

unordered_map<int, bool> IsHappy;

// Functions

bool is_happy_r(int n, unordered_set<int> &seen) {
    return false;
}

bool is_happy(int n) {
    return false;
}

// Main execution

int main(int argc, char *argv[]) {
    int n;

    while (cin >> n) {
    	cout << (is_happy(n) ? "Yes" : "No") << endl;
    }

    return 0;
}
