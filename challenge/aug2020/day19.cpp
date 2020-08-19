// Day 19, Goat Latin
#include <iostream>
#include <string>
#include <unordered_set>
using std::string;
using std::unordered_set;

class SolutionDay19 {
    private:
        unordered_set<char> Vowels = {'a','e','i','o','u','A','E','I','O','U'};
    public:
        string toGoatLatin(string S) {
            string T;
            return T;
        }
};

int main() {
    SolutionDay19 sol;
    string answer, S;
    std::cout << "Please enter a sentence: ";
    std::cin  >> S;
    answer = sol.toGoatLatin(S);
    std::cout << "Goat Latin: " << answer << std::endl;
    // Compile successful
    return 0;
}
