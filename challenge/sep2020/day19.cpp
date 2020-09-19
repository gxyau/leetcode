// Day 19, Sequential Digits
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        vector<int> sequentialDigits(int low, int high) {
            return {};
        }
};

int main() {
    Solution sol;
    vector<int> sequence;
    int low, high;
    // Mini program
    std::cout << "Please enter a lower bound: ";
    std::cin  >> low;
    std::cout << "Please enter a upper bound: ";
    std::cin  >> high;
    sequence = sol.sequentialDigits(low, high);
    std::cout << "The sequential digits between " << low << " and " << high << " (inclusive) are:\n";
    for (int x : sequence) std::cout << x << " ";
    std::cout << std::endl;
    // Compile successful
    return 0;
}
