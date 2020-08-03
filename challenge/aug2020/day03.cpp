// Day 3, Valid palindrome
#include <iostream>
#include <string>
using std::string;

class SolutionDay3 {
    public:
        bool isPalindrome(string s) {
            return true;
        }
};

int main() {
    SolutionDay3 sol;
    string s;
    bool ans;
    std::cout << "Please enter a string: ";
    std::cin  >> s;
    ans = sol.isPalindrome(s);
    std::cout << "is the string a palindrome?: " << ans << std::endl;
    // Compile successful
    return 0;
}
