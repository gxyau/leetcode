// Problem 47, Permutations II
#include<problem31>
#include<vector>
using std::vector;

class Solution47 {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
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
