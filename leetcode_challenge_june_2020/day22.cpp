// Day 22, Single Number II
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay22 {
public:
    int singleNumber(vector<int>& nums) {
        return 0;
    }
};

int main() {
    SolutionDay22 sol;
    vector<int> nums;
    int answer;
    // Case 1
    nums   = new vector<int>({0,0,0,1});
    answer = sol.singleNumber(nums);
    cout << "The answer is: " << answer << endl;
    return 0;
}
