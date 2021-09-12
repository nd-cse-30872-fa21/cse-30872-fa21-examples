// Exercise 11-B: Phone Combinations

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// Globals

map<char, string> LETTERS = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"},
};

// Functions

void phone_combinations(string numbers, string letters) {
    if (numbers.empty()) {
    	cout << letters << endl;
    }

    for (auto letter : LETTERS[numbers[0]]) {
    	phone_combinations(numbers.substr(1), letters + letter);
    }
}

// Main execution

int main(int argc, char *argv[]) {
    string numbers;

    while (getline(cin, numbers)) {
    	phone_combinations(numbers, "");
    }

    return 0;
}
