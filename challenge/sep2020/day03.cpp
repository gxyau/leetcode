// Day 3, Repeated Substring Pattern
#include <iostream>
#include <string>
using std::string;

class Solution {
    public:
        bool repeatedSubstringPattern(string s) {
            if (s.size() < 2) return false;
            int n = s.size(), k;
            string t, pattern;
            for (int i = 1; i <= n/2; ++i) {
                if (n % i == 0) {
                    k = n / i;
                    t = "";
                    pattern = s.substr(0, i); 
                    while(k--) {
                        t += pattern;
                    }
                    if (t == s) return true;
                }
            }
            return false;
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
