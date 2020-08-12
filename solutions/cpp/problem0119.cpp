// Problem 119, Pascal Triangle II
#include <iostream>
#include <vector>
using std::vector;

class Solution119 {
    public:
        vector<int> getRow(int k) {
            vector<int> pascal(k+1, 0);
            pascal[0] = 1;
            for (int i = 1; i < k+1; ++i) {
                for (int j = i ; j >= 1; --j) {
                    pascal[j] += pascal[j-1];
                }
            }
            return pascal;
        }
};

int main() {
    Solution119 sol;
    int k;
    vector<int> pascal;
    std::cout << "Please enter a number between 0 and 33 (inclusive): ";
    std::cin  >> k;
    pascal = sol.getRow(k);
    std::cout << "Row " << k << " looks like: ";
    for (int x : pascal) std::cout << x << " ";
    std::cout << std::endl;
    // Compile successfully
    return 0;
}
