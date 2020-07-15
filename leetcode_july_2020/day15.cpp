// Day 15, Reverse Words in a string
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class SolutionDay15 {
private:
    vector<string> split(string s, string delim) {
        vector<string> vec;
        string word;
        for(auto it = s.begin(); s != s.end(); ++it) {
            std::cout << it << std::endl;
        }
        return vec;
    }
public:
    string reverseWords(string s) {
        split(s, " ");
        std::reverse(s.begin(), s.end());
        return s;
    }
};

int main() {
    SolutionDay15 sol;
    string s, t;
    std::cout << "Please enter a string: ";
    std::cin  >> s;
    t = sol.reverseWords(s);
    std::cout << t << std::endl;
    // Compile successful
    return 0;
}
