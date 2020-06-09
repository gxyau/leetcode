// Problem 46, Permutations
#include<iostream>
#include<problem31>
#include<vector>
using std::vector;

class Solution46 {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        Solution31 sol;
        vector<vector<int>> permutations;
        vector<int> initial = nums;
        while (true) {
            permutations.push_back(nums);
            sol.nextPermutation(nums);
            if (nums == initial) break;
        }
        return permutations;
    }
};
