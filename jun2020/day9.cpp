// Day 9, Is subsequence
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class SolutionDay9 {
public:
    bool isSubsequence(string s, string t) {
        int matched = 0;
        string::iterator it = s.begin();
        for (int i = 0; i < t.size(); ++i) {
            if (t[i] == *it) {++matched; ++it;}
        }
        return matched == s.size();
    }
};

int main() {
    string       substring, target_string;
    SolutionDay9 sol;
    cout << "Insert substring: ";
    cin  >> substring;
    cout << "Insert target string: ";
    cin  >> target_string;
    cout << substring << " is a substring of " << target_string
         << ": " << sol.isSubsequence(substring, target_string) << endl;
    return 0;
}
