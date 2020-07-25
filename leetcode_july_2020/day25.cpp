// Day 25, Find Minimum in a Rotated Sorted Array II
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay25 {
    public:
        int findMin(vector<int>& nums) {
            if (nums.size() == 1) return nums[0];
            int n = nums.size();
            int l = 0, r = n-1, m;
            while (l < r) {
                m = l + (r-l)/2;
                if (nums[m] > nums[r]) {
                    l = m+1;
                } else if (nums[m] < nums[r]) {
                    r = m;
                } else {
                    --r;
                }
            }
            return nums[l];
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
    // Test case 4;
    nums    = {2,3,4,5,5,6,7,8,9,10,11,1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Test case 5;
    nums    = {3,1,3};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Test case 6;
    nums    = {3,1,1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Compile successful
    return 0;
}
