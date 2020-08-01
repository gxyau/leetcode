// Day 25, Find the duplicate number
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay25 {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) break;
        }
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
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
    // Case 2
    nums = {1,2,3,4,2};
    answer = sol.findDuplicate(nums);
    cout << "The vector is: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The duplicate is: " << answer << endl;
    // Case 3
    nums = {1,3,4,2,2};
    answer = sol.findDuplicate(nums);
    cout << "The vector is: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The duplicate is: " << answer << endl;
    // Case 4
    nums = {1,3,4,2,2};
    answer = sol.findDuplicate(nums);
    cout << "The vector is: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The duplicate is: " << answer << endl;
    // Case 5
    nums = {1,3,4,2,5,2};
    answer = sol.findDuplicate(nums);
    cout << "The vector is: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The duplicate is: " << answer << endl;
    return 0;
}
