// Maximum XOR of Two Numbers in an Array
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        int findMaximumXOR(vector<int>& nums) {
            int XOR = 0;
            return XOR;
        }
};

int main() {
    Solution sol;
    vector<int> nums;
    int res;
    // Test case 1
    nums = {};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Test case 2
    nums = {1};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Test case 3
    nums = {2};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Test case 4
    nums = {1,1};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Test case 5
    nums = {1,2};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Test case 6
    nums = {3,10,5,25,2,8};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Compile successful
    return 0;
}
