// Day 5, Add and Search Word, Data Structure design
#include <iostream>
#include <string>
using std::string;

struct TrieNode {
    TrieNode* child[26] = {nullptr};
    bool end            = false; 
};

class WordDictionary {
    private:
        TrieNode* root = nullptr;
        
        bool searchTrie(TrieNode* cur, int i, string word) {
            if (!cur) return false;
            if (i == word.length()) return cur->end;

            if (word[i] != '.') {
                if (!cur->child[word[i]-'a']) return false;
                return searchTrie(cur->child[word[i]-'a'], i+1, word);   
            }

            for (auto x : cur->child) {
                if (searchTrie(x, i+1, word)) return true;               
            }

            return false;
        }
    public:
        /** Initialize your data structure here. */
        WordDictionary() {
            root = new TrieNode();
        }
        
        /** Adds a word into the data structure. */
        void addWord(string word) {
            TrieNode* cur = root;
            for (char c : word) {
                if (cur->child[c-'a'] == nullptr) cur->child[c-'a'] = new TrieNode();
                cur = cur->child[c-'a'];
            }
            cur->end = true;
        }
        
        /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
        bool search(string word) {
            return searchTrie(root, 0, word);
        }
};

int main() {
    // Compile successful
    return 0;
}
