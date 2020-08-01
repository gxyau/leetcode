// Day 8, 3 Sum
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        int n = nums.size();
        for (int i = 0; i < n-2; ++i) {
            int l = i+1, r = n-1;
            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum < 0) {
                    ++l;
                } else if(sum > 0) {
                    --r;
                } else {
                    temp = {nums[i], nums[l], nums[r]};
                    ans.push_back(temp);
                    while(l < r && nums[l] == temp[1]) ++l;
                }
            }
            while (i < n-2 && nums[i]==nums[i+1]) ++i; // We want the first one not the last one
        }
        return ans;
    }
};
