// Day 12, Insert, Delete, GetRandom O(1)
#include<iostream>
#include<random>
#include<vector>
#include<unordered_set>
using std::vector;
using std::random;

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {}
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (set.count(val)) return false;
        set.insert(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (!set.count(val)) return false;
        set.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        auto itr = set.begin();
        advance(itr, rand()%set.size());
        return *itr;
    }
private:
    // Keep track of content, allows for O(1) operation to check membership
    unordered_set<int> set;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
