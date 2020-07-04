// Day 4, Ugly Number II
#include <iostream>

class SolutionDay4 {
public:
    int nthUglyNumber(int n) {
        int n1, n2, n3, nth_ugliest = 1;
        while (--n) {
            n1          = nth_ugliest * 2;
            n2          = nth_ugliest * 3;
            n3          = nth_ugliest * 5;
            nth_ugliest = n1 < n2 ? std::min(n1, n3) : std::min(n2,n3);
        }
        return nth_ugliest;
    }
};

int main() {
    SolutionDay4 sol;
    int n, ans;
    std::cout << "Please enter a positive integer, n: ";
    std::cin  >> n;
    ans = sol.nthUglyNumber(n);
    std::cout << "The nth ugliest number is: " << ans << std::endl;
    // Compile successful
    return 0;
}
