// Day 5, Hamming distance
#include <iostream>

class SolutionDay5 {
public:
    int hammingDistance(int x, int y) {
        int hamming = 0;
        return hamming;
    }
};

int main() {
    SolutionDay5 sol;
    int x,y, hamming;
    std::cout << "Please enter the first number: ";
    std::cin  >> x;
    std::cout << "Please enter the second number: ";
    std::cin  >> y;
    hamming = sol.hammingDistance(x,y);
    std::cout << "The Hamming distance between " << x << " and " << 
        y << " is: " << hamming << std::endl;
    // Compile successful
    return 0;
}
