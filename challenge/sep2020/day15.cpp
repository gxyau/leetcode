// Length of Last Word
#include <iostream>
#include <string>
using std::string;

class Solution {
    public:
        int lengthOfLastWord(string s) {
            int length = 0;
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
