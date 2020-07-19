// Day 19, Add Binary
#include <bitset>
#include <iostream>
#include <string>
using std::string;

class SolutionDay19 {
public:
    string addBinary(string a, string b) {
        unsigned long int sum = 0, num1 = std::stoi(a, nullptr, 2), num2 = std::stoi(b, nullptr, 2);
        int bit1, bit2, carry = 0, pos = 0, n = std::max(a.size(), b.size());
        while (n--) {
            bit1   = num1 & 1; bit2  = num2 & 1;
            num1 >>= 1; num2 >>= 1;
            sum   += ((bit1 + bit2 + carry) & 1) << pos++;
            carry  = (bit1 + bit2 + carry) >> 1;
        }
        if (carry) sum += 1 << pos++;
        string ans = std::bitset<64>(sum).to_string();
        // Return answer
        return ans.substr(ans.size()-pos);
    }
};

int main() {
    SolutionDay19 sol;
    string a,b, ans;
    std::cout << "Input a binary number: ";
    std::cin  >> a;
    std::cout << "Input another binary number: ";
    std::cin  >> b;
    ans = sol.addBinary(a,b);
    std::cout << "The answer is: " << ans << std::endl;
    // Compile successful
    return 0;
}
