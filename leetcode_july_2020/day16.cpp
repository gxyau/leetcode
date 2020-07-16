// Day 16, Pow(x,n)
#include <iostream>

class SolutionDay16 {
public:
    double myPow(double x, int n) {
        double ans = 1, abs_n = std::abs(n);
        while(abs_n--) {
            ans *= x;
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
