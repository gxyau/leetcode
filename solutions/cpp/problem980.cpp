// Problem 980, Unique Paths III
#include <iostream>
#include <vector>
using std::vector;

class Solution980 {
private:
    std::pair<int, int> start = {-1,-1}, end = {-1,-1};
    vector<vector<char>> boulder;
    int count_paths(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        std::cout << m << ", " << n << "\n";
        vector<vector<int>> paths(m, vector<int>(n));
        paths[0][0] = 1;
        // First row or first column
        for (int i = 0; i < m; ++i) paths[i][0] = grid[i][0] == '.' ? paths[i-1][0] : 0;
        for (int j = 0; j < n; ++j) paths[0][j] = grid[0][j] == '.' ? paths[0][j-1] : 0;
        // Fill in the rest
        std::cout << "Printing DP:" << "\n";
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                paths[i][j] = grid[i][j] == '*' ? 0 : paths[i-1][j] + paths[i][j-1];
                std::cout << paths[i][j] << "  ";
            }
            std::cout << "\n\n";
        }
        // Return result
        return paths[m][n];
    }
public:
    // Resetting start, end, and boulder
    void reset() {
        start = {-1,-1};
        end   = {-1,-1};
        boulder.clear();
    }
    // Solution
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans;
        if (m * n == 1) return 0;
        boulder = vector<vector<char>> (m, vector<char>(n));
        // Getting start and end positions and building boulder
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] < 0) {
                    boulder[i][j] = '*';
                } else {
                    boulder[i][j] = '.';
                    if (grid[i][j] == 1) start = {i,j};
                    if (grid[i][j] == 2) end   = {i,j};
                }
            }
        }
        if (start.first > end.first || start.second > end.second) return 0;
        vector<vector<char>> subgrid;
        vector<char> row;
        for (int i = 0; i < end.first-start.first+1; ++i) {
            row = boulder[start.first+i];
            subgrid.push_back(vector<char>(row.begin()+start.second, row.begin()+end.second+1));
        }
        std::cout << "Subgrid:" << "\n";
        for (auto vec : subgrid) {
            for (auto x : vec) {
                std::cout << x << "  ";
            }
            std::cout << "\n\n";
        }
        ans = count_paths(subgrid);
        return 0;     
    }
};

int main() {
    Solution980 sol;
    vector<vector<int>> grid;
    int paths;
    // Test Case 1
    grid  = {{0,1},{2,0}};
    std::cout << "Grid: " << "\n";
    for (auto vec : grid) {
        for (auto x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    paths = sol.uniquePathsIII(grid);
    std::cout << "Number of unique paths: " << paths << "\n\n";
    // Test Case 2
    sol.reset();
    grid  = {{1,0,0,0},{0,0,0,0},{0,0,2,-1}};
    // Printing grid
    std::cout << "Grid: " << "\n";
    for (auto vec : grid) {
        for (auto x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    // Find solution
    paths = sol.uniquePathsIII(grid);
    std::cout << "Number of unique paths: " << paths << "\n\n";
    // Test Case 3
    sol.reset();
    grid  = {{1,0,0,0},{0,0,0,0},{0,0,0,2}};
    // Printing grid
    std::cout << "Grid: " << "\n";
    for (auto vec : grid) {
        for (auto x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    // Find solution
    paths = sol.uniquePathsIII(grid);
    std::cout << "Number of unique paths: " << paths << "\n\n";
    // Test Case 4
    sol.reset();
    grid  = {{1,0,0,0},{0,-1,0,0},{0,0,0,2}};
    // Printing grid
    std::cout << "Grid: " << "\n";
    for (auto vec : grid) {
        for (auto x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    // Find solution
    paths = sol.uniquePathsIII(grid);
    std::cout << "Number of unique paths: " << paths << "\n\n";
    // Compile successful
    return 0;
}
