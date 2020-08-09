// Day 9, Rotting Oranges
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay9 {
    public:
        int orangesRotting(vector<vector<int>>& grid) {
            int minutes = 0;
            return minutes;
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
    // Compile successful
    return 0;
}
