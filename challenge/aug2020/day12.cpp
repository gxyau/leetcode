// Day 12, Pascal Triangle II
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay12 {
    public:
        vector<int> getRow(int rowIndex) {
            vector<int> pascal;
            return pascal;
        }
};

int main() {
    SolutionDay12 sol;
    int row;
    vector<int> pascal;
    std::cout << "Please enter a number between 0 and 33 (inclusive): ";
    std::cin  >> row;
    pascal = sol.getRow(row);
    std::cout << "Row " << row << " looks like: ";
    for (int x : pascal) std::cout << x << " ";
    std::cout << std::endl;
    // Compile successfully
    return 0;
}
