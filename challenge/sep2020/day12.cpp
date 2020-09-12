// Day 12, Combination Sum III
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        vector<vector<int>> combinationSum3(int k, int n) {
            return {};
        }
};

int main() {
    Solution sol;
    vector<vector<int>> combinations;
    int k, n;
    // Mini program
    std::cout << "Please enter the number of partition(s), k (A number from 1-9): ";
    std::cin  >> k;
    std::cout << "Please enter the sum, n: ";
    std::cin  >> n;
    combinations = sol.combinationSum3(k,n);
    std::cout << "The combinations are:\n";
    for (vector<int> comb : combinations) {
        for (int x : comb) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    // Compile successful
    return 0;
}
