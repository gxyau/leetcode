// Day 31, Climbing stairs
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay31 {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        vector<int> DP = {1,2};
        for (int i = 2; i < n; ++i) {
            DP.push_back(DP[i-1] + DP[i-2]);
        }
        return DP[DP.size()-1];
    }
};

int main() {
    SolutionDay31 sol;
    int n, ans;
    std::cout << "Please enter a positive integer between 1 and 45 (inclusive): ";
    std::cin  >> n;
    ans = sol.climbStairs(n);
    std::cout << "Total number of ways of climbing the stairs: " << ans << std::endl;
    // Compile successful
    return 0;
}
