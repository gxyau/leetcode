// Problem 63, Unique Paths II
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

class Solution63 {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        return 0;
    }
};

int main() {
    vector<vector<int>> grid;
    Solution63 sol;
    int paths;
    // Test case 1
    grid = {{0}};
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl;
    // Test case 2
    grid = {{1}};
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl;
    // Test case 3
    grid = {{1,0},{0,0}};
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl;
    // Test case 4
    grid = {{0,0},{0,1}};
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl;
    // Test case 5
    grid = {{0,0,0},{0,1,0},{0,0,0}};
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl;
    // Test case 6
    grid = {{0,1,0},{1,1,0},{0,0,0}};
    paths = sol.uniquePathsWithObstacles(grid);
    cout << "Number of paths in this grid: " << paths << endl;
    // Successfully compiled
    return 0;
}
