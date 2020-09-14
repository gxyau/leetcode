// Day 14, House Robber
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        int rob(vector<int>& nums) {
            if (nums.empty()) return 0;
            int sum = 0;
            return sum;
        }
};

int main() {
    Solution sol;
    vector<int> nums;
    int sum;
    // Test case 1
    nums = {};
    std::cout << "The values in the houses are:\n";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    sum = sol.rob(nums);
    std::cout << "The maximum is: " << sum << std::endl;
    std::cout << std::endl;
    // Test case 2
    nums = {1,2,3,1};
    std::cout << "The values in the houses are:\n";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    sum = sol.rob(nums);
    std::cout << "The maximum is: " << sum << std::endl;
    std::cout << std::endl;
    // Test case 3
    nums = {2,7,9,3,1};
    std::cout << "The values in the houses are:\n";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    sum = sol.rob(nums);
    std::cout << "The maximum is: " << sum << std::endl;
    std::cout << std::endl;
    // Test case 4
    nums = {1,2,1,1,3,4,5};
    std::cout << "The values in the houses are:\n";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    sum = sol.rob(nums);
    std::cout << "The maximum is: " << sum << std::endl;
    std::cout << std::endl;
    // Test case 1
    nums = {2,1,2,4,3,7,3,5,6,8};
    std::cout << "The values in the houses are:\n";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    sum = sol.rob(nums);
    std::cout << "The maximum is: " << sum << std::endl;
    std::cout << std::endl;
    // Compile successful
    return 0;
}
