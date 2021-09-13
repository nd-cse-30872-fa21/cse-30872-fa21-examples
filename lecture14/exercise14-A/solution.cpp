// Exercise 14-A: Cookies

#include <algorithm>
#include <deque>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Functions

bool readline(deque<int> &v) {
    string line;
    if (!getline(cin, line)) {
    	return false;
    }

    stringstream ss(line);
    int value;

    v.clear();
    while (ss >> value) {
    	v.push_back(value);
    }

    sort(v.rbegin(), v.rend());
    return true;
}

int feed_children(deque<int> &children, deque<int> &cookies) {
    int count = 0;

    while (!children.empty() && !cookies.empty()) {
    	auto child  = children.front();
    	auto cookie = cookies.front();

	children.pop_front();
    	if (child <= cookie) {
    	    cookies.pop_front();
    	    count++;
	}
    }

    return count;
}

// Main execution

int main(int argc, char *argv[]) {
    deque<int> children;
    deque<int> cookies;

    while (readline(children) && readline(cookies)) {
	cout << feed_children(children, cookies) << endl;
    }

    return 0;
}
