// Day 26, Add Digits
#include <iostream>

class SolutionDay26 {
    public:
        int addDigits(int num) {
            return num ? 1 + (num-1)%9 : 0;
        }
};

int main() {
    SolutionDay26 sol;
    int num, ans;
    std::cout << "Please enter a number: ";
    std::cin  >> num;
    ans = sol.addDigits(num);
    std::cout << "The digits sum is: " << ans << std::endl;
    // Compile successful
    return 0;
}
