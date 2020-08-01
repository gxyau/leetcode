// Day 1, Detect Capital
#include <iostream>
#include <string>
using std::string;

class SolutionDay1 {
    public:
        bool detectCapitalUse(string word) {
            if (word.empty()) return true;
            bool flag = true;
            while (isupper(word[0])) word.substr(1);
            for (char x : word) {
                if (isupper(x)) {
                    flag = false;
                    break;
                }
            }
            return flag;
        }
};

int main() {
    SolutionDay1 sol;
    bool ans;
    string word;
    std::cout << "Please enter a string: " << std::endl;
    std::cin  >> word;
    ans = sol.detectCapitalUse(word);
    std::cout << "Proper use of capitals: " << ans << std::endl;
    // Compile successful
    return 0;
}
