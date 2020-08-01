// Day 30, Word Break II
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using std::string;
using std::unordered_map;
using std::unordered_set;
using std::vector;

class SolutionDay30 {
    private:
        vector<string> DFS(string s, unordered_set<string> &dict, int index, unordered_map<int, vector<string>> &memory) {
            if(memory.count(index)) return memory[index];
            vector<string> res;
            for(int i = index; i < s.length(); ++i) {
                string cur = s.substr(index, i - index + 1);
                if(dict.count(cur)) {
                    if(i == s.size() - 1) res.push_back(cur);
                    vector<string> tmp = DFS(s, dict, i + 1, memory);
                    for(string e :tmp) res.push_back(cur + " " + e);
                }
            }
            return memory[index]=res;
        }
    public:
        vector<string> wordBreak(string s, vector<string>& wordDict) {
            unordered_set<string> dict(wordDict.begin(), wordDict.end());
            unordered_map<int, vector<string>> memory;
            return DFS(s, dict, 0, memory);
        }
};

int main() {
    SolutionDay30 sol;
    vector<string> wordDict, ans;
    string s;
    // Test case 1
    wordDict = {"cat","cats","and","sand","dog"};
    s = "catsanddog";
    ans = sol.wordBreak(s, wordDict);
    std::cout << "Words in dictionary: ";
    for (string word : wordDict) std::cout << word << " ";
    std::cout << std::endl;
    std::cout << "Output: ";
    for (string t : ans) std::cout << "\"" << t << "\"" << " ";
    std::cout << std::endl;
    // Test case 1
    wordDict = {"apple","pen","applepen","pine","pineapple"};
    s = "pineapplepenapple";
    ans = sol.wordBreak(s, wordDict);
    std::cout << "Words in dictionary: ";
    for (string word : wordDict) std::cout << word << " ";
    std::cout << std::endl;
    std::cout << "Output: ";
    for (string t : ans) std::cout << "\"" << t << "\"" << " ";
    std::cout << std::endl;
    // Test case 1
    wordDict = {"cats","dog","sand","and","cat"};
    s = "catsandog";
    ans = sol.wordBreak(s, wordDict);
    std::cout << "Words in dictionary: ";
    for (string word : wordDict) std::cout << word << " ";
    std::cout << std::endl;
    std::cout << "Output: ";
    for (string t : ans) std::cout << "\"" << t << "\"" << " ";
    std::cout << std::endl;
    // Compile successful
    return 0;
}
