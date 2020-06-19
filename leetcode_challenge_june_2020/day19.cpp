// Day 19, Longest Duplicate Substring
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class SolutionDay19 {
public:
    string longestDupSubstring(string S) {
        string substring = "";
        return substring;
    }
};

int main() {
    SolutionDay19 sol;
    string        str, substr;
    cout << "Please enter a string: ";
    cin  >> str;
    substr = sol.longestDupSubstring(str);
    cout << "Longest duplicate substring is: " << substr << endl;
    return 0;
}
