// Day 12, Reverse Bits
#include <iostream>

class SolutionDay12 {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t bits = 0, tmp, iteration = 32;
        while (iteration--) {
            tmp  = (n & 1);
            bits = (bits << 1) | tmp;
            n  >>= 1;
        }
        return bits;
    }
};

int main() {
    SolutionDay12 sol;
    uint32_t n, rev;
    std::cout << "Please enter a number: ";
    std::cin  >> n;
    rev = sol.reverseBits(n);
    std::cout << rev << std::endl;
    // Compile successful
    return 0;
}
