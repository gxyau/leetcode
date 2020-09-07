// Day 7, Word Pattern
#include <cctype>
#include <iostream>
#include <string>
using std::string;

class Solution {
    public:
        bool wordPattern(string pattern, string str) {
            return false;
        }
};

int main() {
    Solution sol;
    string pattern, str, flag;
    // Mini program
    std::cout << "Please input pattern: ";
    std::cin  >> pattern;
    std::cout << "Please input words: ";
    std::cin  >> str;
    flag = sol.wordPattern(pattern, str) ? "True" : "False";
    std::cout << "String follow pattern: " << flag << std::endl;
    // Compile successful
    return 0;
}
