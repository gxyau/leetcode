// Day 10, Excel Sheet Column Number
#include <algorithm>
#include <iostream>
#include <string>
using std::string;

class SolutionDay10 {
    public:
        int titleToNumber(string s) {
            int column = 0;
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
