// Exericse 14-A: Cookies

#include <algorithm>
#include <deque>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Functions

bool readline(deque<int> &v) {
    // TODO: Read a line from stdin
    return false;
}

int feed_children(deque<int> &children, deque<int> &cookies) {
    // TODO: Return number of children fed with cookies
    return 0;
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
