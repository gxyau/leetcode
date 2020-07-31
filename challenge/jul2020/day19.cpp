// Day 19, Add Binary
#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>
using std::string;

class SolutionDay19 {
public:
    string addBinary(string a, string b) {
        /*
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
        */
        if (a.size() < b.size()) std::swap(a,b);
        string result="";
        int m = a.length(), n = b.length();
        int carry = 0, sum = 0, bit1, bit2;
        while(m > 0 || n > 0) {
            bit1    = a[--m] - '0';
            bit2    = n > 0 ? b[--n] - '0' : 0; // Only happens if unequal length
            sum     = bit1 + bit2 + carry;
            result += std::to_string(sum & 1);    // integer to string
            carry   = sum >> 1;
        }
        if (carry) result += '1';
        std::reverse(result.begin(), result.end());
        // Return answer
        return result;
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
