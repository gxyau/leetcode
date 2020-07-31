// Day 31, Climbing stairs
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay31 {
    public:
        int climbStairs(int n) {
            if (n <= 2) return n;
            int k1 = 1, k2 = 2, k;
            while(n-- > 2) {
                k  = k1 + k2;
                k1 = k2;
                k2 = k;
            }
            return k;
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
