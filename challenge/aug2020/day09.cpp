// Day 9, Rotting Oranges
#include <iostream>
#include <queue>
#include <vector>
using std::pair;
using std::queue;
using std::vector;

class SolutionDay9 {
    public:
        int orangesRotting(vector<vector<int>>& grid) {
            int minutes = 0, fresh = 0, m = grid.size(), n = grid[0].size(), remaining;
            pair<int, int> posn;
            queue<pair<int, int>> q;
            // When fresh hits zero we are done
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (grid[i][j] == 1) {
                        ++fresh;
                    } else if (grid[i][j] == 2) {
                        q.push(pair<int, int> ({i,j}));
                    }
                }
            }
            // Trivial case, no fresh orange
            if (!fresh) return minutes;
            while (!q.empty()) {
                remaining = q.size();
                ++minutes;
                while (remaining--) {
                    posn = q.front();
                    q.pop();
                    if (posn.first > 0 && grid[posn.first-1][posn.second] == 1) {
                        q.push({posn.first-1,posn.second});
                        grid[posn.first-1][posn.second] = 2;
                        --fresh;
                    }
                    if (posn.second > 0 && grid[posn.first][posn.second-1] == 1) {
                        q.push({posn.first,posn.second-1});
                        grid[posn.first][posn.second-1] = 2;
                        --fresh;
                    }
                    if (posn.first < m-1 && grid[posn.first+1][posn.second] == 1) {
                        q.push({posn.first+1,posn.second});
                        grid[posn.first+1][posn.second] = 2;
                        --fresh;
                    }
                    if (posn.second < n-1 && grid[posn.first][posn.second+1] == 1) {
                        q.push({posn.first,posn.second+1});
                        grid[posn.first][posn.second+1] = 2;
                        --fresh;
                    }
                }
                if (!fresh) break;
            }
            return fresh == 0 ? minutes : -1;
        }
};

int main() {
    SolutionDay9 sol;
    vector<vector<int>> grid;
    int minutes;
    // Test case 1
    grid = {{1}};
    std::cout << "The grid is:\n\n";
    for (vector<int> row : grid) {
        for (int x : row) std::cout << x << "  ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    minutes = sol.orangesRotting(grid);
    std::cout << "Number of minutes: " << minutes << "\n\n";
    // Test case 2
    grid = {{1,2}};
    std::cout << "The grid is:\n\n";
    for (vector<int> row : grid) {
        for (int x : row) std::cout << x << "  ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    minutes = sol.orangesRotting(grid);
    std::cout << "Number of minutes: " << minutes << "\n\n";
    // Test case 3
    grid = {{1,0}};
    std::cout << "The grid is:\n\n";
    for (vector<int> row : grid) {
        for (int x : row) std::cout << x << "  ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    minutes = sol.orangesRotting(grid);
    std::cout << "Number of minutes: " << minutes << "\n\n";
    // Test case 4
    grid = {{2,1,1},{0,1,1},{1,0,1}};
    std::cout << "The grid is:\n\n";
    for (vector<int> row : grid) {
        for (int x : row) std::cout << x << "  ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    minutes = sol.orangesRotting(grid);
    std::cout << "Number of minutes: " << minutes << "\n\n";
    // Test case 5
    grid = {{2,0,1},{0,0,1},{1,1,1}};
    std::cout << "The grid is:\n\n";
    for (vector<int> row : grid) {
        for (int x : row) std::cout << x << "  ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    minutes = sol.orangesRotting(grid);
    std::cout << "Number of minutes: " << minutes << "\n\n";
    // Test case 6
    grid = {{2,0,1},{0,1,1},{1,1,1}};
    std::cout << "The grid is:\n\n";
    for (vector<int> row : grid) {
        for (int x : row) std::cout << x << "  ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    minutes = sol.orangesRotting(grid);
    std::cout << "Number of minutes: " << minutes << "\n\n";
    // Test case 7
    grid = {{2,1,1},{1,1,0},{0,1,1}};
    std::cout << "The grid is:\n\n";
    for (vector<int> row : grid) {
        for (int x : row) std::cout << x << "  ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    minutes = sol.orangesRotting(grid);
    std::cout << "Number of minutes: " << minutes << "\n\n";
    // Test case 8
    grid = {{1,1,1},{1,2,1},{1,1,1}};
    std::cout << "The grid is:\n\n";
    for (vector<int> row : grid) {
        for (int x : row) std::cout << x << "  ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    minutes = sol.orangesRotting(grid);
    std::cout << "Number of minutes: " << minutes << "\n\n";
    // Compile successful
    return 0;
}
