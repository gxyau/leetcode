// Day 4, Power of Four
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SolutionDay4 {
    public:
        bool isPowerOfFour(int num) {
            if (num <= 0) return false;
            int count = 0, pos = 0, cur = 0;
            while (num) {
                ++cur;
                count += (num & 1);
                if (count > 1) return false;
                if (num & 1) pos = cur;
                num >>= 1;
            }
            return count == 1 && (pos & 1);
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
