// Day 25, Find Minimum in a Rotated Sorted Array II
#include <iostream>
#include <limits>
#include <vector>
using std::vector;

class SolutionDay25 {
    public:
        int findMin(vector<int>& nums) {
            int l = 0, r = nums.size()-1, m = l + (r-l)/2;
            return nums[l]
        }
};

int main() {
    SolutionDay25 sol;
    vector<int> nums;
    int minimum;
    // Test case 1;
    nums    = {1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Test case 2;
    nums    = {1,3,5};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Test case 3;
    nums    = {2,2,2,0,1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Test case 4;
    nums    = {4,5,5,6,7,8,9,10,11,1,2,3};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Compile successful
    return 0;
}
