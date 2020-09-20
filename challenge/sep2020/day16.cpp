// Maximum XOR of Two Numbers in an Array
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    private:
        typedef vector<int>::iterator Iter;
        int divide(vector<int>& nums, Iter lstart, Iter lend, Iter rstart, Iter rend, int val, int mask) {
            if(lstart == lend || rstart == rend || mask == 0) return val;
            auto cond = [mask](int num){return num & mask;};
            auto lmid = std::partition(lstart, lend, cond), rmid = std::partition(rstart, rend, cond);
            if(lmid == lend && rmid == rend || lmid == lstart && rmid == rstart)
                return divide(nums, lstart, lend, rstart, rend, val, mask >> 1);
            else return std::max(
                divide(nums, lstart, lmid, rmid, rend, val | mask, mask >> 1),
                rstart < lend ? 0 : divide(nums, lmid, lend, rstart, rmid, val | mask, mask >> 1));
        }
    public:
        int findMaximumXOR(vector<int>& nums) {
            return divide(nums, nums.begin(), nums.end(), nums.begin(), nums.end(), 0, 1 << 30);
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
    nums = {2,1};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Test case 7
    nums = {3,10,5,25,2,8};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Test case 8
    nums = {0,3,10,5,25,2,8, 2147483647};
    std::cout << "The vector consist of: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    res  = sol.findMaximumXOR(nums);
    std::cout << "Maximum XOR is: " << res << std::endl;
    // Compile successful
    return 0;
}
