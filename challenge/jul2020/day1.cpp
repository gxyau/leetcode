// Day 1, Arranging Coins
#include<iostream>

class SolutionDay1 {
public:
    int arrangeCoins(int n) {
        long long int l = 0, r = n, m = l+(r-l)/2;
        while (l<=r) {
            if (m*(m+1)/2 <= n) {
                l = m+1;
            } else {
                r = m-1;
            }
            m = l+(r-l)/2;
        }
        return l-1;
    }
};

int main() {
    SolutionDay1 sol;
    int n, ans;
    std::cout << "Please enter a positive integer: ";
    std::cin  >> n;
    ans = sol.arrangeCoins(n);
    std::cout << "Number of full staircase: " << ans << std::endl;
    return 0;
}
