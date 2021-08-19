// Exercise 01-C: Count Duplicates

#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int count_with_find(vector<int> &numbers) {
    int total = 0;

    for (size_t i = 0; i < numbers.size(); i++) {
    	if (find(numbers.begin() + i + 1, numbers.end(), numbers[i]) != numbers.end()) {
    	    total++;
	}
    }

    return total;
}

int count_with_set(vector<int> &numbers) {
    int total = 0;
    unordered_set<int> seen;

    for (auto number : numbers) {
    	if (seen.count(number)) {
    	    total++;
	} else {
	    seen.insert(number);
	}
    }

    return total;
}

int count_with_sort(vector<int> &numbers) {
    int total = 0;

    sort(numbers.begin(), numbers.end());

    for (size_t i = 1; i < numbers.size(); i++) {
    	if (numbers[i] == numbers[i - 1]) {
    	    total++;
	}
    }

    return total;
}

int main(int argc, char *argv[]) {
    // TODO: Read numbers
    vector<int> numbers;
    int         number;

    while (cin >> number) {
    	numbers.push_back(number);
    }

    // TODO: Count duplicates
    //cout << count_with_find(numbers) << endl;
    cout << count_with_set(numbers) << endl;
    //cout << count_with_sort(numbers) << endl;

    return 0;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
