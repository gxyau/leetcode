// Day 15, Non-overlapping Intervals
#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>
using std::vector;

class Solution {
    public:
        int eraseOverlapIntervals(vector<vector<int>>& intervals) {
            if (intervals.size() < 2) return 0;
            int count = 0, right = std::numeric_limits<int>::min();
            std::sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b)->bool{return a[1] < b[1];});
            for (auto x : intervals) x[0] >= right ? right = x[1] : ++count;
            return count;
        }
};

int main() {
    // Compile successful
    return 0;
}
