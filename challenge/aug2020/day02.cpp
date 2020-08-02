// Day 2, Design Hash Set
#include <unordered_set>
using std::unordered_set;

class MyHashSet {
    private:
        unordered_set<int> S;
    public:
        /** Initialize your data structure here. */
        MyHashSet() {}

        void add(int key) {
            S.insert(key);
        }

        void remove(int key) {
            S.erase(key);
        }

        /** Returns true if this set contains the specified element */
        bool contains(int key) {
            auto it = S.find(key);
            return it != S.end();
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
