// Day 23, Single Number III
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay23 {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        return ans;
    }
};

int main() {
    SolutionDay23 sol;
    vector<int> nums, ans;
    // Test case 1
    nums = {1,2};
    ans  = sol.singleNumber(nums);
    std::cout << "The single numbers are: " << std::endl;
    for (int x : ans) std::cout << x;
    std::cout << std::endl;
    // Compile successful
    return 0;
}
