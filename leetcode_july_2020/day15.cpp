// Day 15, Reverse Words in a String
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class SolutionDay15 {
private:
    vector<string> split(string s, char delim) {
        vector<string> vec;
        string word;
        for(auto it = s.begin(); it != s.end(); ++it) {
            if (*it != delim) {
                word += *it;
            } else if (!word.empty()) {
                vec.push_back(word);
                word = "";
            }
        }
        if (!word.empty()) vec.push_back(word);
        return vec;
    }
public:
    string reverseWords(string s) {
        if (s.empty()) return s;
        vector<string> vec = split(s, ' ');
        if(vec.empty()) return "";
        std::reverse(vec.begin(), vec.end());
        string ans = vec[0];
        for (int i = 1; i < vec.size(); ++i) {
            ans += " " + vec[i];
        }
        return ans;
    }
};

int main() {
    SolutionDay15 sol;
    string s, t;
    std::cout << "Please enter a string: ";
    getline(std::cin, s);
    t = sol.reverseWords(s);
    std::cout << t << "\n";
    // Compile successful
    return 0;
}
