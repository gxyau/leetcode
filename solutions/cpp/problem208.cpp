// Problem 208, Trie (Prefix Tree)

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
               temp->children[word[i] - 'a'] = new TrieNode();
           }
           temp = temp->children[word[i] - 'a'];                                                                 }
       temp->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* temp = root;
        for (int i = 0; i < word.size(); ++i) {
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
