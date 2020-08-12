// Problem 118, Pascal Triangle
#include <iostream>
#include <vector>
using std::vector;

class Solution118 {
    public:
        vector<vector<int>> generate(int k) {
            vector<vector<int>> pascal;
            vector<int> row;
            for (int nrow = 0; nrow < k; ++nrow) {
                row = vector<int>(nrow+1, {0});
                row[0] = 1;
                for (int i = 1; i < nrow+1; ++i) {
                    for (int j = i ; j >= 1; --j) {
                        row[j] += row[j-1];
                    }
                }
                pascal.push_back(row);
            }
            return pascal;
        }
};

int main() {
    Solution118 sol;
    int k;
    vector<vector<int>> pascal;
    std::cout << "Please enter a number between 0 and 33 (inclusive): ";
    std::cin  >> k;
    pascal = sol.generate(k);
    std::cout << "The triangle looks like:\n";
    for (vector<int> row : pascal) {
        for (int x : row) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    // Compile successfully
    return 0;
}
