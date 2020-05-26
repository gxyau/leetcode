// Day 26, Contiguous array
#include<iostream>
#include<limits>
#include<vector>
using std::vector;
using std::map;

class SolutionDay26 {
public:
    int findMaxLength(vector<int>& nums) {
        int freq    = 0, maximum = 0;
        map<int, int> D;
        D[0] = -1; // The first occurance of zero is at position -1
        for (int i = 0; i < nums.size(); ++i) {
            freq += nums[i] ? 1 : -1;
            if (D.count(freq)) {
                maximum = max(maximum, i - D[freq]);
            } else {
                D[freq] = i;
            }
        }
        return maximum;
    }
};
