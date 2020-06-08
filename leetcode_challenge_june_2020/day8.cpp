// Day 8, Powers of two
#include<iostream>

class SolutionDay8 {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && ((n & (n-1)) == 0);
    }
};
