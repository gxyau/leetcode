// Day 12, Combination Sum III
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    private:
        vector<vector<int>> combinations;
        // Backtracking
        void partitions(int k, int n, int start, vector<int> &current, vector<vector<int>> &combinations) {
            // Impossible cases
            if (n < 0 || n > 55  || k < 0|| k > 9) return;
            // Partitions, base case
            if (n == 0 && k == 0) {
                combinations.push_back(current);
                return;
            }
            // Backtracking
            for (int i = start; i <= 9; ++i) {
                current.push_back(i);
                partitions(k-1,n-i,i+1,current,combinations);
                current.pop_back();
            }
        }
    public:
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<int> current = {};
            combinations = {};
            partitions(k,n,1,current,combinations);
            return combinations;
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
