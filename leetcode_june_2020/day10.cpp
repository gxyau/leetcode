// Day 10, Search insert position
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay10 {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 1) {return target > nums[0];}
        int l = 0, r = n-1, m;
        while (l <= r) {
            m = l + (r-l)/2;
            if (nums[m] == target) {
                return m;
            } else if (nums[m] < target) {
                l = m+1;
            } else if (nums[m] > target) {
                r = m-1;
            }
        }
        return l;
    }
};
