#include<iostream>

class Trie {
public:

    struct TrieNode {
        bool isEnd = false;
        TrieNode* children[26] = {nullptr};
    };

    TrieNode* root = nullptr;

    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
       TrieNode* temp = root;
       for (int i = 0; i < word.size(); ++i) {
           if (temp->children[word[i] - 'a'] == nullptr) {
               // If no previous word has this prefix, we insert it
               temp->children[word[i] - 'a'] = new TrieNode();
           }
           // Need to move on to next node
           temp = temp->children[word[i] - 'a'];
       }
       temp->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* temp = root;
        for(int i = 0; i < word.size(); ++i) {
            if (temp->children[word[i] - 'a'] == nullptr) {
                return false;
            } else {
                temp = temp->children[word[i] - 'a'];
            }
        }
        return temp->isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* temp = root;
        for(int i = 0; i < prefix.size(); ++i) {
            if (temp->children[prefix[i] - 'a'] == nullptr) {
                return false;
            } else {
                temp = temp->children[prefix[i] - 'a'];
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
