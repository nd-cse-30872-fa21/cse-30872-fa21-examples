// stack_sorting.cpp

#include <iostream>
#include <stack>

using namespace std;

stack<int> sort_stack(stack<int> &os) {
    stack<int> ns;

    while (!os.empty()) {
    	auto t = os.top(); os.pop();
    	while (!ns.empty() && os.top() > t) {
    	// while (!ns.empty() && ns.top() > t) { // FIX
    	    os.push(ns.top());
    	    ns.pop();
	}

	ns.push(t);
    }

    return ns;
}

int main(int argc, char *argv[]) {
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(7);
    s.push(0);
    s.push(1);

    s = sort_stack(s);
    while (!s.empty()) {
    	cout << s.top() << endl;
    	s.pop();
    }

    return EXIT_SUCCESS;
}
