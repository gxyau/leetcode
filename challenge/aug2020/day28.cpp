// Day 28, Implement rand10 Using rand7
#include <iostream>
#include <random>

// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
    public:
        int rand10() {
            int num1, num2, res;
            do {
                num1 = rand7();
                num2 = rand7();
                res  = num1 + (num2 - 1) * 7;
            } while (res > 40);
            return 1 + res % 10;
        }
};

int main() {
    // Compile successful
    return 0;
}
