// Day 3, Valid palindrome
#include <iostream>
#include <string>
using std::isalnum;
using std::string;
using std::tolower;

class SolutionDay3 {
    public:
        bool isPalindrome(string s) {
            string::iterator it1 = s.begin(), it2 = s.end()-1;
            while (it1 < it2) {
                while (!isalnum(*it1)) ++it1;
                while (!isalnum(*it2)) --it2;
                if (tolower(*it1) != tolower(*it2)) return false;
                ++it1;
                --it2;
            }
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
