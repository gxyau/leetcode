// Day 6, Plus One
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay6 {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        while (n >= 0) {
            if (digits[n] == 9) {
                digits[n] = 0;
                n--;
            } else {
                ++digits[n];
                break;
            }
        }
        if (n < 0) {
            digits.push_back(1);
            std::reverse(digits.begin(), digits.end());
        }
        return digits;
    }
};

int main() {
    SolutionDay6 sol;
    vector<int> digits, ans;
    // Test case 1
    digits = {-1,2};
    std::cout << "Current number: ";
    for (int x : digits) std::cout << x;
    std::cout << "\n";
    ans    = sol.plusOne(digits);
    std::cout << "New number: ";
    for (int x : ans) std::cout << x;
    std::cout << "\n\n";
    // Test case 1
    digits = {9};
    std::cout << "Current number: ";
    for (int x : digits) std::cout << x;
    std::cout << "\n";
    ans    = sol.plusOne(digits);
    std::cout << "New number: ";
    for (int x : ans) std::cout << x;
    std::cout << "\n\n";
    // Test case 1
    digits = {-1,9};
    std::cout << "Current number: ";
    for (int x : digits) std::cout << x;
    std::cout << "\n";
    ans    = sol.plusOne(digits);
    std::cout << "New number: ";
    for (int x : ans) std::cout << x;
    std::cout << "\n\n";
    // Compile successful
    return 0;
}
