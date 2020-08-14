// Day 14, Longest Palindrome
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class SolutionDay14 {
    public:
        int longestPalindrome(string s) {
            vector<int> count(64,{0});
            int length = 0;
            for (char c : s) {
                if (++count[c-'A'] % 2 == 0) length += 2;
            }
            return s.size() > length ? length + 1 : length;
        }
};

int main() {
    SolutionDay14 sol;
    string s;
    int len;
    std::cout << "Please enter a string: ";
    std::cin  >> s;
    len = sol.longestPalindrome(s);
    std::cout << "The longest palindrome has length: " << len << std::endl;
    // Compile successful
    return 0;
}
