// Day 20, Unique Path III
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    private:
        int total;
        // DFS + Backtracking
        void DFS(vector<vector<int>> &grid, int posx, int posy, int non_obs) {
            // Constants
            const int m = grid.size(), n = grid[0].size(), original = grid[posx][posy];
            // DFS
            grid[posx][posy] = -1; // Indicates this cell has been visited or blocked
            if (original == 2 && non_obs == 0) {
                ++total;
            } else if (original == 0) {
                if (posx > 0) DFS(grid, posx-1, posy, non_obs-1);
                if (posx < m-1) DFS(grid, posx+1, posy, non_obs-1);
                if (posy > 0) DFS(grid, posx, posy-1, non_obs-1);
                if (posy < n-1) DFS(grid, posx, posy+1, non_obs-1);
            } else if (original == 1) {
                if (posx > 0) DFS(grid, posx-1, posy, non_obs);
                if (posx < m-1) DFS(grid, posx+1, posy, non_obs);
                if (posy > 0) DFS(grid, posx, posy-1, non_obs);
                if (posy < n-1) DFS(grid, posx, posy+1, non_obs);
            }
            // Return to original value
            grid[posx][posy] = original;
            return;
        }
    public:
        int uniquePathsIII(vector<vector<int>>& grid) {
            if (grid.empty() or grid[0].empty()) return 0;
            const int m = grid.size(), n = grid[0].size();
            int startx, starty, non_obs = 0;
            // Find starting point
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (grid[i][j] == 1) {
                        startx = i;
                        starty = j;
                    } else if (grid[i][j] == 0) {
                        ++non_obs;
                    }
                }
            }
            total = 0;
            DFS(grid, startx, starty, non_obs);
            return total;
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
