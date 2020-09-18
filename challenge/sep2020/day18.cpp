// Day 18, Best Time to Buy and Sell Stock
#include <limits>
#include <vector>
using std::vector;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int minimum = std::numeric_limits<int>::max(), maximum = 0;
            for (auto it = prices.begin(); it != prices.end(); ++it) {
                if (minimum > *it) minimum = *it;
                if (*it - minimum > maximum) maximum = *it - minimum;
            }
            return maximum;
        }
};

int main() {
    // Compile successful
    return 0;
}
