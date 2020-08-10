// Day 10, Excel Sheet Column Number
#include <algorithm>
#include <iostream>
#include <string>
using std::string;

class SolutionDay10 {
    private:
        unsigned long int exp(unsigned long int base, unsigned int exponent) {
            unsigned long int answer = 1;
            while (exponent) {
                if (exponent & 1) answer *= base;
                exponent >>= 1;
                base *= base;
            }
            return answer;
        }
    public:
        int titleToNumber(string s) {
            int column = 0, n = s.size();
            while (n--) column += exp(26,n); // All columns before this
            n = s.size(); // Need the size again to go through the string
            for (char c : s) {
                column += (c-'A') * exp(26,--n);
            }
            return column;
        }
};

int main() {
    SolutionDay10 sol;
    int column;
    string s;
    std::cout << "Please enter a column between \"A\" and \"FXSHRXW\": ";
    std::cin  >> s;
    // Make sure it is upper case
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return std::toupper(c);});
    column = sol.titleToNumber(s);
    std::cout << "It is column number of " << s << " is: " << column << std::endl;
    // Compile successfully
    return 0;
}
