// Day 16, Pow(x,n)
#include <iostream>

class SolutionDay16 {
public:
    double myPow(double x, int n) {
        if (x == 0) return 0;
        // x is not zero
        double ans = 1;
        int abs_n = std::abs(n);
        while(abs_n) {
            if (abs_n & 1) {ans *= x;}
            x *= x;
            abs_n /= 2;
        }
        return n >= 0 ? ans : 1/ans;
    }
};

int main() {
    SolutionDay16 sol;
    double ans, x, n;
    std::cout << "Please enter a base number, x: ";
    std::cin  >> x;
    std::cout << "Please enter an integer, n: ";
    std::cin  >> n;
    ans = sol.myPow(x,n);
    std::cout << "The answer is: " << ans << std::endl;
    // Compile successful
    return 0;
}
