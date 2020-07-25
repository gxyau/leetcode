// Day 25, Find Minimum in a Rotated Sorted Array II
#include <iostream>
#include <limits>
#include <vector>
using std::vector;

class SolutionDay25 {
    public:
        int findMin(vector<int>& nums) {
            vector<int>::iterator it = nums.begin();
            while (it+1 != nums.end()) {
                if (*it > *(it+1)) break;
                ++it;
            }
            if (it+1 == nums.end()) return nums[0];
            return *(it+1);
        }
};

int main() {
    SolutionDay25 sol;
    vector<int> nums;
    int minimum;
    // Test case 1;
    nums    = {1,3,5};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Test case 2;
    nums    = {2,2,2,0,1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Test case 3;
    nums    = {4,5,5,6,7,8,9,10,11,1,2,3};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    minimum = sol.findMin(nums);
    std::cout << "The minimum is: " << minimum << std::endl;
    // Compile successful
    return 0;
}
