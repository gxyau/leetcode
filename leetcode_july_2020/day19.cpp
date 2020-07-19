// Day 19, Add Binary
#include <iostream>
#include <string>
using std::string;

class SolutionDay19 {
public:
    string addBinary(string a, string b) {
        return "something";
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
