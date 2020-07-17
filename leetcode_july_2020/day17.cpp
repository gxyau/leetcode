// Day 17, Top K Frequent Elements
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using std::map;
using std::pair;
using std::vector;

class SolutionDay17 {
private:
    static bool cmp(pair<int, int> &a, pair<int,int> &b) {
        return (a.second < b.second);
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Insert elements
        map<int,int> M;
        int len = 0;
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (M.count(*it)) {
                ++M[*it];
            } else {
                M[*it] = 1;
            }
        }
        // Sort elements
        vector<pair<int,int>> elms;
        for (auto it = M.begin(); it != M.end(); ++it) {
            elms.push_back(std::make_pair(it->first, it->second));
        }
        std::sort(elms.begin(), elms.end(), cmp);
        // Get top k elements
        vector<int> top_k;
        while (k--) {
            top_k.push_back(elms[k-1].first);
        }
        return top_k;
    }
};

int main() {
    // Compile successful
    return 0;
}
