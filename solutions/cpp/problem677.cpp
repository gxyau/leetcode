// Problem 677, Map Sum Pairs
#include<string>
using std::string;

class MapSum {
private:
    struct Node {
        int value          = 0;
        int total          = 0;
        Node *children[26] = {nullptr};
    };
public:
    /** Initialize your data structure here. */
    MapSum() {
        Node* root = new Node();
    }
       
    void insert(string key, int val) {
        Node* ptr = root;
        ptr.sum  += val;
        // Adding the new value to the prefixes, while moving pointer
        for (char c : key) {
            ptr         = ptr->children[c - 'a'];
            ptr->total += val;
        }
        // Keep track of old value
        const int old = ptr->value;
        // Set new value of current node
        ptr->value    = val;
        // Return pointer to root
        ptr           = root;
        // Subtract old value
        root->value  -= old;
        for (char c : key) {
            ptr         = ptr->children[c - 'a'];
            ptr->total -= old;
        }
        return ptr->total;
    }
    
    int sum(string prefix) {
        Node *ptr  = root;
        for (char c : prefix) {
            ptr = ptr->children[c - 'a'];
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
