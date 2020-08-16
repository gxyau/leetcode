// Day 16, Best Time to Buy and Sell Stock III
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int max1 = 0, max2 = 0;
            int price1 = std::numeric_limits<int>::max();
            int price2 = std::numeric_limits<int>::max();
            
            for (int p : prices) {
                price1 = std::min(price1, p);
                max1   = std::max(max1, p - price1);
                price2 = std::min(price2, p - max1);
                max2   = std::max(max2, p - price2);
            }
            
            return max2;

int main() {
    // Compile successful
    return 0;
}
