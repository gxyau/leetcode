// Day 23, Stream of Characters
#include <string>
#include <vector>
using std::string;
using std::vector;

struct TrieNode {
    TrieNode *child[26] = {nullptr};
    bool end = false;
};

class StreamChecker {
    private:
        TrieNode* root = nullptr;
        
        void add_word(string &word) {
            if (word == "") return;
            TrieNode *cur = root;
            for (char c : word) {
                if (!(cur->child[c-'a'])) cur->child[c-'a'] = new TrieNode();
                cur = cur->child[c-'a'];
            }
            cur->end = true;
        }
    public:
        StreamChecker(vector<string>& words) {
            root = new TrieNode();
            for (string word : words) {
                add_word(word);
            }
        }

        bool query(char letter) {
            TrieNode* cur = root;
            for (char c : letter) {
                if (!cur->child[c-'a']) return false;
                cur = cur->child[c-'a'];
            };
            return true;
        }
};

\int main() {
    // Compile successful
    return 0;
}
