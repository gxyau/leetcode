#include<iostream>
#include<vector>
#include <limits>
using std::vector;

class Solution121 {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;
        int max_profit = 0;
        int min_price  = std::numeric_limits<int>::max(); 
            
        for (int price : prices) {
            if (price < min_price) min_price = price;
            max_profit = std::max(max_profit, price - min_price);
        }    
    
        return max_profit;
    }
};

int main() {
    int input;
    vector<int> prices;
    Solution121 sol;
    std::cout << "Input prices: " << std::endl;
    while (std::cin >> input) {
        std::cout << "Input any non-numeric key to end input." << std::endl;
        prices.push_back(input);
    }
    std::cout << "Max profit is: " << sol.maxProfit(prices) << std::endl;
    return 0;
}
