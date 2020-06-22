// Day 22, Single Number II
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay22 {
public:
    int singleNumber(vector<int>& nums) {
        // 3 * unique sum is 2 * target more than total sum
        int sum = 0, unique_sum = 0;
        for (int x : nums) {
            unique_sum ^= x;
            sum        += x;
        }
        return (int) (3*unique_sum - sum)/2;
    }
};

int main() {
    SolutionDay22 sol;
    vector<int> nums;
    int answer;
    // Case 1
    nums   = {0,0,0,1};
    cout << "The vector is: ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    answer = sol.singleNumber(nums);
    cout << "The answer is: " << answer << endl;
    // Case 2
    nums   = {1,2,0,1,0,0,1};
    cout << "The vector is: ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    answer = sol.singleNumber(nums);
    cout << "The answer is: " << answer << endl;
    // Case 3
    nums   = {1};
    cout << "The vector is: ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    answer = sol.singleNumber(nums);
    cout << "The answer is: " << answer << endl;
    return 0;
}
