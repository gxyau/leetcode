// Day 3, Prison Cell After N Days
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay3 {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        if (!N) return cells;
        // N is positive
        int k = cells.size();
        vector<int> new_cell(k);
        if (k <= 2) return new_cell;
        while (N--) {
            for (int i = 1; i < k-1; ++i) {
                new_cell[i] = cells[i-1] == cells[i+1];
            }
            cells = new_cell;
        }
        return new_cell;
    }
};

int main() {
    SolutionDay3 sol;
    int N;
    vector<int> init, new_cell;
    // Test case 1
    std::cout << "Please enter a non-negative integer: ";
    std::cin  >> N;
    init = {0};
    std::cout << "Initial cell configuration:\n";
    for (auto x : init) {
        std::cout << x << "  ";
    }
    std::cout << "\n";;
    new_cell = sol.prisonAfterNDays(init, N);
    std::cout << "Cell configuration after " << N << " days: " << "\n";
    for (auto x : new_cell) {
        std::cout << x << "  ";
    }
    std::cout << "\n\n";
    // Test case 2
    std::cout << "Please enter a non-negative integer: ";
    std::cin  >> N;
    init = {1};
    std::cout << "Initial cell configuration:\n";
    for (auto x : init) {
        std::cout << x << "  ";
    }
    std::cout << "\n";
    new_cell = sol.prisonAfterNDays(init, N);
    std::cout << "Cell configuration after " << N << " days: " << "\n";
    for (auto x : new_cell) {
        std::cout << x << "  ";
    }
    std::cout << "\n\n";
    // Test case 3
    std::cout << "Please enter a non-negative integer: ";
    std::cin  >> N;
    init = {0,0,1};
    std::cout << "Initial cell configuration:\n";
    for (auto x : init) {
        std::cout << x << "  ";
    }
    std::cout << "\n";
    new_cell = sol.prisonAfterNDays(init, N);
    std::cout << "Cell configuration after " << N << " days: " << "\n";
    for (auto x : new_cell) {
        std::cout << x << "  ";
    }
    std::cout << "\n\n";
    // Test case 4
    std::cout << "Please enter a non-negative integer: ";
    std::cin  >> N;
    init = {0,1,0,1,1,0,0,1};
    std::cout << "Initial cell configuration:\n";
    for (auto x : init) {
        std::cout << x << "  ";
    }
    std::cout << "\n";
    new_cell = sol.prisonAfterNDays(init, N);
    std::cout << "Cell configuration after " << N << " days: " << "\n";
    for (auto x : new_cell) {
        std::cout << x << "  ";
    }
    std::cout << "\n\n";
    // Compiled successfully
    return 0;
}
