// Day 3, Repeated Substring Pattern
#include <iostream>
#include <string>
using std::string;

class Solution {
    public:
        bool repeatedSubstringPattern(string s) {
            bool flag = false;
            return flag;
        }
};

int main() {
    Solution sol;
    string s, ans;
    bool flag;
    // Mini program
    std::cout << "Please enter a string: ";
    std::cin  >> s;
    flag = sol.repeatedSubstringPattern(s);
    ans = flag ? "yes" : "no";
    std::cout << "The string is a repeated substring? " << ans << std::endl;
    // Compile successful
    return 0;
}
