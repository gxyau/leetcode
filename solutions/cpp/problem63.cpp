// Problem 63, Unique Paths II
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

class Solution63 {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        // Top left of bottom right blocked, then there is no path
        if (grid[0][0] == 1 || grid[m-1][n-1] == 1) return 0;
        
        // In place dynamic programming prep
        grid[0][0] = 1;
        // Left most column
        for (int i = 1; i < m; ++i) {
            grid[i][0] = (grid[i-1][0] == 0 || grid[i][0] == 1) ? 0 : 1;
        }
        // Top row
        for (int j = 1; j < n; ++j) {
            grid[0][j] = (grid[0][j-1] == 0 || grid[0][j] == 1) ? 0 : 1;
        }
        
        // Fill in the rest of the grid
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                grid[i][j] = (grid[i][j] == 1) ? 0 : grid[i-1][j] + grid[i][j-1];
            }
        }
        return grid[m-1][n-1];
    }
};

int main() {
    vector<vector<int>> grid;
    Solution63 sol;
    int paths;
    // Test case 1
    grid = {{0}};
    cout << "Current grid:" << endl;
    for (auto vec : grid) {
        for (auto x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl << endl;
    // Test case 2
    grid = {{1}};
    cout << "Current grid:" << endl;
    for (auto vec : grid) {
        for (auto x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl << endl;
    // Test case 3
    grid = {{1,0},{0,0}};
    cout << "Current grid:" << endl;
    for (auto vec : grid) {
        for (auto x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl << endl;
    // Test case 4
    grid = {{0,0},{0,1}};
    cout << "Current grid:" << endl;
    for (auto vec : grid) {
        for (auto x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl << endl;
    // Test case 5
    grid = {{0,0,0},{0,1,0},{0,0,0}};
    cout << "Current grid:" << endl;
    for (auto vec : grid) {
        for (auto x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl << endl;
    // Test case 6
    grid = {{0,1,0},{1,1,0},{0,0,0}};
    cout << "Current grid:" << endl;
    for (auto vec : grid) {
        for (auto x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl << endl;
    // Successfully compiled
    return 0;
}
