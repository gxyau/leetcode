// Day 29, Best Time to Buy and Sell Stock with Cooldown
#include <iostream>
#include <vector>

class SolutionDay29 {
public:
    int maxProfit(vector<int>& prices) {
        return 0;
    }
};

int main() {
    SolutionDay29 sol;
    vector<int> prices;
    int ans;
    // Test case 1
    prices = {1};
    ans = sol.maxProfit(prices);
    std::cout << "The max profit is: " << ans << std::endl;
    // Test case 2
    prices = {1,2};
    ans = sol.maxProfit(prices);
    std::cout << "The max profit is: " << ans << std::endl;
    // Test case 3
    prices = {1,2,3,0,2};
    ans = sol.maxProfit(prices);
    std::cout << "The max profit is: " << ans << std::endl;
    // Compile successful
    return 0;
}
