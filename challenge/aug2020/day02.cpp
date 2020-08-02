// Day 2, Design Hash Set
#include <unordered_set>
using std::unordered_set;

class MyHashSet {
    public:
        /** Initialize your data structure here. */
        MyHashSet() {
            unordered_set<int> S;
        }

        void add(int key) {
            S.insert(key);
        }

        void remove(int key) {
            S.erase(key)
        }

        /** Returns true if this set contains the specified element */
        bool contains(int key) {
            unordered_set<int>::iterator it = S.find(key);
            return it != it.end();
        }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

int main() {
    // Compile successful
    return 0;
}
