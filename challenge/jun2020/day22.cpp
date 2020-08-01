// Day 22, Single Number II
#include <iostream>
#include <unordered_set>
#include <vector>
using std::cout;
using std::endl;
using std::unordered_set;
using std::vector;

class SolutionDay22 {
public:
    int singleNumber(vector<int>& nums) {
        /*
        // 3 * unique sum is 2 * target more than total sum
        long long int sum = 0, unique_sum = 0;
        unordered_set<int> set;
        for (int x : nums) {
            if (!set.count(x)) {
                set.insert(x);
                unique_sum += x;
            }
            sum += x;
        }
        return (long long int) (3*unique_sum - sum)/2;
        */
        
        int ones = 0;
        int twos = 0;
        
        for(auto i:nums)
        {
            ones = (ones^i) & (~twos);
            twos = (twos^i) & (~ones);
        }
        
        return ones;
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
    // Case 4
    nums   = {43,16,45,89,45,-2147483648,45,2147483646,-2147483647,-2147483648,43,2147483647,-2147483646,-2147483648,89,-2147483646,89,-2147483646,-2147483647,2147483646,-2147483647,16,16,2147483646,43};
    cout << "The vector is: ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    answer = sol.singleNumber(nums);
    cout << "The answer is: " << answer << endl;
    return 0;
}
