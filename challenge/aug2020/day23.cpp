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
        int max_length = 0;
        std::deque<char> dq;
        
        void insert(string &word) {
            if (word == "") return;
            TrieNode* cur = root;
            for (char c : word) {
                if (!(cur->child[c-'a'])) cur->child[c-'a'] = new TrieNode();
                cur = cur->child[c-'a'];
            }
            cur->end = true;
        }
        
        void DFS(deque<char> dq, TrieNode* ptr) {
            
        }
    public:
        StreamChecker(vector<string>& words) {
            root = new TrieNode();
            for (string word : words) {
                max_length = std::max(max_length, (int) word.size());
                insert(word);
            }
        }

        bool query(char letter) {
            dq.push_back(letter);
            if (dq.size() > max_length) dq.pop_front();
            TrieNode* cur = root;
            auto ptr = dq.rbegin();
            while(ptr != dq.rend()){
                if(cur->child[*ptr - 'a'] == nullptr)
                    return false;
                cur = cur->child[*ptr - 'a'];
                if(cur->end)
                    return true;
                ++ptr;
            }
            return false;
        }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */

int main() {
    // Compile successful
    return 0;
}
