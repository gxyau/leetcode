// Length of Last Word
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class Solution {
        private:
        vector<string> tokenizer(string s) {
            vector<string> tokens;
            string word = "";
            for (auto it = s.begin(); it != s.end(); ++it) {
                if (std::isalnum(*it)) {
                    word += *it;
                } else {
                    if (!word.empty()) tokens.push_back(word);
                    word = "";
                }
            }
            if (!word.empty()) tokens.push_back(word);
            return tokens;
        }
    public:
        int lengthOfLastWord(string s) {
            if (!s.size()) return 0;
            vector<string> tokens = tokenizer(s);
            int n = tokens.size();
            return n > 0 ? tokens[n-1].size() : 0;
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
