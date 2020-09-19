// Day 19, Sequential Digits
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        vector<int> sequentialDigits(int low, int high) {
            vector<int> sequence;
            int difference = 1, current = 1, probe;
            for (int i = 2; i <= 9; ++i) {
                difference = difference * 10 + 1;
                current   += difference;
                probe      = current;
                for (int j = i; j < 10; ++j, probe += difference) {
                    if ((probe >= low) && (probe <= high))
                        sequence.push_back(probe);
                }
            }
            return sequence;
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
