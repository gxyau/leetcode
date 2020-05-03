#include<iostream>

class Solution29 {
public:
    int signum (int val) {
        return (int(0) < val) - (int(0) > val);
    }
    
    int divide(int dividend, int divisor) {
        int ans          = 0;
        int sign         = signum(dividend) * signum(divisor);
        long int new_dividend = abs(dividend);
        long int new_divisor  = abs(divisor);
        
        while (true) {
            if (new_dividend < new_divisor) break;
            ++ans;
            new_dividend -= new_divisor;
        }
        
        return sign * ans;
    }
};

int main() {
    int dividend, divisor;
    std::cout << "Enter dividend: " << std::endl;
    std::cin >> dividend;
    std::cout << "Enter divisor: " << std::endl;
    std::cin >> divisor;
    Solution29 sol;
    int ans = sol.divide(dividend, divisor);
    std::cout << "Answer is " << ans << std::endl;
}
