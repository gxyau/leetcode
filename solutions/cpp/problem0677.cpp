// Problem 677, Map Sum Pairs
#include<string>
using std::string;

struct Node {
    int value = 0, total = 0;
    bool end = false;
    Node *children[26] = {nullptr};
    Node(): value(), total(), end(), children() {};
    Node(int v): value(v), total(v), end(false), children() {};
};

class MapSum {
private:
    Node *root = nullptr;
public:
    /** Initialize your data structure here. */
    MapSum() {
        root = new Node();
    }
    
    void insert(string key, int val) {
        bool is_new = false;
        Node* ptr   = root;
        ptr->total += val;
        // Adding the new value to the prefixes, while moving pointer
        for (char c : key) {
            if (ptr->children[c - 'a'] == nullptr) {
                ptr->children[c - 'a'] = new Node(val);
            } else {
                ptr->children[c - 'a']->total += val;
            }
            // Move pointer
            ptr = ptr->children[c - 'a'];
        }
        // Indicates this is end of word
        if (!ptr->end) {
            ptr->end = true;
            is_new   = true;
        }
        // If it is not a new node, need to subtract things
        if (!is_new) {
            // Keep track of old value
            const int old = ptr->value;
            // Set new value of current node
            ptr->value = val;
            // Return pointer to root
            ptr = root;
            // Subtract old value
            root->value  -= old;
            for (char c : key) {
                // Move the pointer
                ptr = ptr->children[c - 'a'];
                // Subtract the value
                ptr->total -= old;
            }
        }
    }
    
    int sum(string prefix) {
        Node *ptr  = root;
        for (char c : prefix) {
            // Move pointer
            ptr = ptr->children[c - 'a'];
            // If we get nullptr then no object with such prefix
            if (ptr == nullptr) return 0;
        }
        return ptr->total;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
