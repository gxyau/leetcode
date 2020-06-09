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
        return true;
    }
};

int main() {
    string substring, target_string;
    cout << "Insert substring: ";
    cin  >> substring;
    cout << "Insert target string: ";
    cin  >> target_string;
    cout << substring << " is a substring of " << target_string
         << ": " << isSubsequence(substring, target_string) << endl;
    return 0;
}
