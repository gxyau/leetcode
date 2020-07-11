// Day 11, Subsets
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay11 {
private:
    vector<int> compute(int k, vector<int>& nums) {
        vector<int> subset;
        int n = nums.size(), num;
        while (n--) {
            if (k & (1 << n)) subset.push_back(nums[n]);
        }
        std::reverse(subset.begin(), subset.end());
        return subset;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerset;
        int k = 1 << nums.size();
        while (k--) {
            powerset.push_back(compute(k, nums));
        }
        std::reverse(powerset.begin(), powerset.end());
        return powerset;
    }
};

int main() {
    // Compile successful
    return 0;
}
