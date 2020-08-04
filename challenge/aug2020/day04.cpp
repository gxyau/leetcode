// Day 4, Power of Four
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SolutionDay4 {
    public:
        bool isPowerOfFour(int num) {
            return num > 0 and (num & (num - 1)) == 0 and (num & 0x55555555);
       }
};

int main() {
    SolutionDay4 sol;
    int num;
    bool ans;
    cout << "Please enter a positive integer: ";
    cin  >> num;
    ans  = sol.isPowerOfFour(num);
    cout << "The number is a power of four? " << ans << endl;
    // Compile successful
    return 0;
}
