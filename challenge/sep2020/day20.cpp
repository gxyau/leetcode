// Day 20, Unique Path III
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        int uniquePathsIII(vector<vector<int>>& grid) {
            if (grid.empty() or grid[0].empty()) return 0;
            int n = grid.size();
            vector<int> DP(n+1,{0});
            return DP[n];
        }
};

int main() {
    // Compile successful
    return 0;
}
