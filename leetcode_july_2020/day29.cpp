// Day 29, Best Time to Buy and Sell Stock with Cooldown
#include <iostream>
#include <limits>
#include <vector>
using std::vector;

class SolutionDay29 {
    public:
        int maxProfit(vector<int>& prices) {    
            int b = std::numeric_limits<int>::min(),s = 0,p_sell = 0,p_buy;
            for(int stock : prices){
                p_buy  = b;
                b      = max(b, p_sell - stock);
                p_sell = s;
                s      = max(s, p_buy + stock);
            }
            return s;
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
