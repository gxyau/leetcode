// Problem 191, Number of 1 Bits 
#include <iostream>    
    
class Solution191 {    
    public:    
        int hammingWeight(uint32_t n) {    
            int bit = 32, nbits = 0;    
            while (bit--) {
                if (n & (1 << bit)) ++nbits;
            }
            return nbits;    
        }    
};    
    
int main() {    
    Solution191 sol;    
    uint32_t n, nbits;    
    std::cout << "Please input a 32-bit binary number: ";    
    std::cin  >> n;    
    nbits = sol.hammingWeight(n);    
    std::cout << "Number of 1 bits: " << nbits << std::endl;    
    // Compile successful    
    return 0;    
}
