// Day 11, Maximum Product Subarray
#include <iostream>
#include <limits>
#include <vector>
using std::vector;

class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            if (nums.size() == 0) return 0;
            // Using DP to calculate maximum product so far
            int maximum = nums[0], minimum = nums[0], ans = nums[0];
            for (auto it = nums.begin()+1; it != nums.end(); ++it) {
                if (*it < 0) std::swap(maximum, minimum);
                maximum = std::max(maximum * (*it), *it);
                minimum = std::min(minimum * (*it), *it);
                ans     = std::max(maximum, ans);
            }
            return ans;
        }
};

int main() {
    Solution sol;
    vector<int> nums;
    int max;
    // Test case 1
    nums = {};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 2
    nums = {1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 3
    nums = {-1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 4
    nums = {1,-1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 5
    nums = {-1, -1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 6
    nums = {2,-1,3};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 7
    nums = {2,-1,-1,3};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 8
    nums = {2,3,-2,4};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 9
    nums = {-2,0,-1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 10
    nums = {1,-2,-3,0,-1,2,3,3,-2,4,-1,3,-2};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Test case 11
    nums = {2,-5,-2,-4,3};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    max  = sol.maxProduct(nums);
    std::cout << "The maximum product is: " << max << std::endl << std::endl;
    // Compile successful
    return 0;
}
