// Day 7, Word Pattern
#include <cctype>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using std::string;
using std::unordered_map;
using std::vector;

class Solution {
    private:
        unordered_map<string, int> M;
        // Break str into individual words
        vector<string> break_string(string s) {
            vector<string> words;
            string word = "";
            string::iterator it = s.begin();
            while (it != s.end()) {
                if (std::islower(*it)) {
                    word += *it;
                } else if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
                ++it;
            }
            if (!word.empty()) words.push_back(word);
            return words;
        }
    public:
        bool wordPattern(string pattern, string str) {
            vector<string> words = break_string(str);
            // If different size the the pattern does not match already
            if (pattern.size() != words.size()) return false;
            int n = pattern.size();
            // Otherwise, we check for each pair
            for (int i = 0; i < n; ++i) {
                if (!M.count("p_" + pattern.substr(i,1))) M["p_" + pattern.substr(i,1)] = i;
                if (!M.count(words[i])) M[words[i]] = i;
                if (M["p_" + pattern.substr(i,1)] != M[words[i]]) return false;
            }
            return true;
        }
};

int main() {
    Solution sol;
    string pattern, str, flag;
    // Mini program
    std::cout << "Please input pattern: ";
    std::getline(std::cin, pattern);
    std::cout << "Please input words: ";
    std::getline(std::cin, str);
    flag = sol.wordPattern(pattern, str) ? "True" : "False";
    std::cout << "String follow pattern: " << flag << std::endl;
    // Compile successful
    return 0;
}
