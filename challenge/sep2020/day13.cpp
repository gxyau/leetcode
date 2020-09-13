// Day 13, Insert Intervals
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
            vector<vector<int>> result;
            return result;
        }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals;
    vector<int> newInterval, result;
    // Test case 1
    intervals   = {};
    newInterval = {};
    result      = sol.insert(intervals, newInterval);
    // Compile successful
    return 0;
}
