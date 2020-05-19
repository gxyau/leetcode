// Online stock span
#include<iostream>

class StockSpanner {
public:
    stack<int> prices;
    stack<int> indices;
    StockSpanner() {
        int count = 0;
    }
    
    int next(int price) {
        ++count;
        while (prices.size() != 0 && prices.top() <= price) {
            count += prices.top();
            prices.pop();
            indices.pop();
        }
        prices.push(price);
        indices.push(count);
        return count;
    }
};
