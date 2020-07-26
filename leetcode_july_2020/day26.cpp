// Day 26, Add Digits
#include <iostream>

class SolutionDay26 {
    public:
        int addDigits(int num) {
            while(num / 10) num = (num/10) + (num%10);
            return num;
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
