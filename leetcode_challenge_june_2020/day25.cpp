// Day 25, Find the duplicate number
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay25 {
public:
    int findDuplicate(vector<int>& nums) {
        return 0;
    }
};

int main() {
    SolutionDay25 sol;
    vector<int> nums;
    int answer;
    // Case 1
    nums = {1,2,3,2};
    answer = sol.findDuplicate(nums);
    cout << "The vector is: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The duplicate is: " << answer << endl;
    return 0;
}
