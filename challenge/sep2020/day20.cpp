// Day 20, Unique Path III
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        int uniquePathsIII(vector<vector<int>>& grid) {
            if (grid.empty() or grid[0].empty()) return 0;
            int m = grid.size(), n = grid[0].size();
            vector<vector<int>> DP(m+1,vector<int>(n+1,{0}));
            return DP[m][n];
        }
};

int main() {
    Solution sol;
    vector<vector<int>> grid;
    int total;
    // Test case 1;
    grid  = {};
    std::cout << "The grid is:\n";
    for (auto row : grid) {
        for (int x : row) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    total = sol.uniquePathsIII(grid);
    std::cout << "Total unique paths: " << total << std::endl << std::endl;
    // Test case 2;
    grid  = {{}, {}, {}};
    std::cout << "The grid is:\n";
    for (auto row : grid) {
        for (int x : row) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    total = sol.uniquePathsIII(grid);
    std::cout << "Total unique paths: " << total << std::endl << std::endl;
    // Test case 3;
    grid  = {{1,0,0,0},{0,0,0,0},{0,0,2,-1}};
    std::cout << "The grid is:\n";
    for (auto row : grid) {
        for (int x : row) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    total = sol.uniquePathsIII(grid);
    std::cout << "Total unique paths: " << total << std::endl << std::endl;
    // Test case 4;
    grid  = {{1,0,0,0},{0,0,0,0},{0,0,0,2}};
    std::cout << "The grid is:\n";
    for (auto row : grid) {
        for (int x : row) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    total = sol.uniquePathsIII(grid);
    std::cout << "Total unique paths: " << total << std::endl << std::endl;
    // Test case 5;
    grid  = {{0,1},{2,0}};
    std::cout << "The grid is:\n";
    for (auto row : grid) {
        for (int x : row) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    total = sol.uniquePathsIII(grid);
    std::cout << "Total unique paths: " << total << std::endl << std::endl;
    // Compile successful
    return 0;
}
