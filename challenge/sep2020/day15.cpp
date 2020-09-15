// Length of Last Word
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class Solution {
    public:
        int lengthOfLastWord(string s) {
            if (!s.size()) return 0;
            auto it = s.begin(), jt = s.end()-1;
            // Remove trailing space
            while (*it == ' ') ++it;
            while (*jt == ' ') --jt;
            // Get length of last word
            int length = 0;
            while (it <= jt) {
                if (!std::isalnum(*it)) {
                    length = 0;
                } else {
                    ++length;
                }
                ++it;
            }
            return length;
        }
};

int main() {
    Solution sol;
    string s;
    int length;
    // Mini program
    std::cout << "Please enter a string: ";
    std::getline(std::cin, s);
    length = sol.lengthOfLastWord(s);
    std::cout << "Length of last word is: " << length << std::endl;
    // Compile successful
    return 0;
}
