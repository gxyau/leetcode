// Problem 477, Total Hamming Distance
#include <iostream>
#include <vector>
using std::vector;

class Solution477 {
public:
    int totalHammingDistance(vector<int>& nums) {
        const int n = nums.size();
        int hamming = 0, k = 32;
        int bitsxor;
        while (k--) {
            bitsxor = 0;
            for (int i = 0; i < n; ++i) {
                bitsxor += ((nums[i] & (1 << k)) != 0);
            }
            hamming += bitsxor * (n-bitsxor);
        }
        return hamming;
    }
};

int main() {
    Solution477 sol;
    vector<int> nums;
    int hamming;
    // Test case 1
    nums    = {4,14,2};
    std::cout << "Numbers in array: ";
    for (int x : nums) std::cout << x << "  ";
    std::cout << std::endl;
    hamming = sol.totalHammingDistance(nums);
    std::cout << "Total Hamming distance: " << hamming << std::endl;
    // Test case 2
    nums    = {4,14,2,10};
    std::cout << "Numbers in array: ";
    for (int x : nums) std::cout << x << "  ";
    std::cout << std::endl;
    hamming = sol.totalHammingDistance(nums);
    std::cout << "Total Hamming distance: " << hamming << std::endl;
    // Test case 3
    nums    = {2147483647,1,2};
    std::cout << "Numbers in array: ";
    for (int x : nums) std::cout << x << "  ";
    std::cout << std::endl;
    hamming = sol.totalHammingDistance(nums);
    std::cout << "Total Hamming distance: " << hamming << std::endl;
    // Compile successful
    return 0;
}
