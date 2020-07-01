#include<iostream>

class SolutionDay9 {
public:
    bool isPerfectSquare(int num) {
        if (num <= 1) return num;
        unsigned long int lower = 0, upper = num;
        while (lower < upper) {
            unsigned long int mid = lower + (upper - lower)/2; // To avoid overflow
            unsigned long int square = mid * mid;
            if (square == num) {
                return true;
            } else if (square < num) {
                lower = mid+1;                                                                            
            } else {
                upper = mid;
            }
        }
        return false;
    }
};

int main() {
    SolutionDay9 sol;
    int guess;
    std::cout << "Please enter a number: ";
    std::cin >> guess;
    bool perfect = sol.isPerfectSquare(guess);
    std::cout << std::endl;
    std::cout << guess << " is perfect square? " << perfect << std::endl;
    return 0;
}
