// Day 13, Largest Divisible Set
#include<algorithm>
#include<iostream>
#include<utility>
#include<vector>
using std::cout;
using std::endl;
using std::pair;
using std::vector;

class SolutionDay13 {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        // Sorting the vector
        int n = nums.size();
        if(n<=1) return nums;
        std::sort(nums.begin(), nums.end());
        
        /* pair.first contains length longest subsequence,
         * pair.second contains its parent index
         */
        vector<pair<int, int>> DP(n, pair<int, int> (1,-1));
        
        /* We check the number before nums[i] that is divisible by it
         * When a number is found, we check whether or not the length
         * is longer. Check everything for j < i otherwise some cases
         * stops before finding the longest subset.
         */
        int max_length = 0, index= 0;
        for (int i = 0; i < n; ++i) {
            int j = i;
            while (--j >= 0) {
                if (nums[i] % nums[j] == 0
                        && DP[i].first <= DP[j].first) {
                    DP[i].first = DP[j].first + 1;
                    DP[i].second = j;
                }
                if (DP[i].first > max_length) {
                    max_length = DP[i].first;
                    index      = i;
                }
            }
        }
        
        // Return answer
        vector<int> answer;
        while (true) {
            answer.push_back(nums[index]);
            index = DP[index].second;
            if (index < 0) break;
        }
        std::reverse(answer.begin(), answer.end());
        return answer;
    }
};

int main() {
    SolutionDay13 sol;
    // Case 1
    vector<int> numbers = {1,2,3};
    vector<int> largest = sol.largestDivisibleSubset(numbers);
    cout << "Case1, the largest subset is: " << endl;
    for (int x : largest) {
        cout << x << " ";
    }
    cout << endl;
    // Case 2
    numbers = {2,3,4};
    largest = sol.largestDivisibleSubset(numbers);
    cout << "Case 2, the largest subset is: " << endl;
    for (int x : largest) {
        cout << x << " ";
    }
    cout << endl;
    // Case 3
    numbers = {1,2,3,4,5,6,8};
    largest = sol.largestDivisibleSubset(numbers);
    cout << "Case 3, the largest subset is: " << endl;
    for (int x : largest) {
        cout << x << " ";
    }
    cout << endl;
    // Case 4
    numbers = {1,2,4,8};
    largest = sol.largestDivisibleSubset(numbers);
    cout << "Case 4, the largest subset is: " << endl;
    for (int x : largest) {
        cout << x << " ";
    }
    // Case 5
    cout << endl;
    numbers = {2,4,1,8};
    largest = sol.largestDivisibleSubset(numbers);
    cout << "Case 4, the largest subset is: " << endl;
    for (int x : largest) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
