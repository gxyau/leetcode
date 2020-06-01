// Problem 31, Next permutation
#include<iostream>
#include<vector>
using std::vector;

class Solution31 {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1;
        while(n > 0 && nums[n] <= nums[n-1]) --n;
        if (n == 0) {
            reverse(nums.begin(), nums.end());
        } else {
            int m = n-1;
            while(n < nums.size() - 1 && nums[n+1] > nums[m]) ++n;
            swap(nums[m], nums[n]);
            reverse(nums.begin()+m+1,nums.end());
        }
    }
};
