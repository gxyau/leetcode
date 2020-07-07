// Day 7, Island Perimeter
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay7 {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        return perimeter;
    }
};

int main() {
    SolutionDay7 sol;
    vector<vector<int>> grid;
    int perimeter;
    // Test case 1
    grid      = {{0}};
    std::cout << "The grid is:\n";
    for (auto vec : grid) {
        for (int x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n";
    }
    perimeter = sol.islandPerimeter(grid);
    std::cout << "The perimeter is: " << perimeter << "\n\n";
    // Test case 2
    grid      = {{1}};
    std::cout << "The grid is:\n";
    for (auto vec : grid) {
        for (int x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n";
    }
    perimeter = sol.islandPerimeter(grid);
    std::cout << "The perimeter is: " << perimeter << "\n\n";
    // Test case 3
    grid      = {{1,0}};
    std::cout << "The grid is:\n";
    for (auto vec : grid) {
        for (int x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n";
    }
    perimeter = sol.islandPerimeter(grid);
    std::cout << "The perimeter is: " << perimeter << "\n\n";
    // Test case 4
    grid      = {{1,1}};
    std::cout << "The grid is:\n";
    for (auto vec : grid) {
        for (int x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n";
    }
    perimeter = sol.islandPerimeter(grid);
    std::cout << "The perimeter is: " << perimeter << "\n\n";
    // Test case 5
    grid      = {{0,1,0,0}, {1,1,1,0},{0,1,0,0},{1,1,0,0}};
    std::cout << "The grid is:\n";
    for (auto vec : grid) {
        for (int x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n";
    }
    perimeter = sol.islandPerimeter(grid);
    std::cout << "The perimeter is: " << perimeter << "\n\n";
    // Compile successful
    return 0;
}
