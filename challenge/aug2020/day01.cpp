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
    // Compile successful
    return 0;
}
