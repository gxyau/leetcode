// Day 6, Plus One
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay6 {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1, n = digits.size();
        // Add 1 then build new array
        for (int i = 0; i < n; ++i) {
            if (carry) ++digits[n-1-i];
            carry = (digits[n-1-i] / 10) > 0;
            digits[n-1-i] %= 10;
            ans.push_back(digits[n-1-i]);
        }
        if (carry) ans.push_back(1);
        std::reverse(ans.begin(), ans.end());
        return ans;
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
