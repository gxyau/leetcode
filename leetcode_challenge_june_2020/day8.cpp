// Day 8, Powers of two
#include<iostream>

class SolutionDay8 {
public:
    bool isPowerOfTwo(int n) {
        /*
        if (n <= 0) return false;
        while (n % 2 == 0) n /= 2;
        return n == 1;
        */
        return n > 0 && ((n & (n-1)) == 0);
    }
};
