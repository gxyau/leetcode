// Day 1, Detect Capital
#include <iostream>
#include <string>
using std::string;

class SolutionDay1 {
    public:
        bool detectCapitalUse(string word) {
            if (word.empty()) return true;
            bool flag = true;
            int count_upper = 0, count_lower = 0;
            while (isupper(word[0])) {
                word = word.substr(1);
                ++count_upper;
            }
            for (char x : word) {
                if (isupper(x)) {
                    flag = false;
                    break;
                }
                ++count_lower;
            }
            return (count_upper <= 1 ) ? flag : (count_lower == 0);
        }
};

int main() {
    SolutionDay1 sol;
    bool ans;
    string word;
    std::cout << "Please enter a string: ";
    std::cin  >> word;
    ans = sol.detectCapitalUse(word);
    std::cout << "Proper use of capitals: " << ans << std::endl;
    // Compile successful
    return 0;
}
