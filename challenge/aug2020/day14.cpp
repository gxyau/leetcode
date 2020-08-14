// Day 14, Longest Palindrome
#include <iostream>
#include <string>
using std::string;

class SolutionDay14 {
    public:
        bool palindrome(string s) {
            if (s.size() <= 1) return true;
            int n = s.size();
            return s[0] == s[n-1] ? palindrome(s.substr(1, n-2)) : false;
        }
        
        int longestPalindrome(string s) {
            string substr;
            int len = 0;
            for (char c : s) {
            }
            return len;
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
