// Problem 38, Count and Say
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Solution38 {
public:
    string nextString(string s) {
        string next          = "";
        char previous_symbol = s[0];
        int counter = 0;
        for (int i = 0; i < s.size(); ++i) {
            char current_symbol = s[i];
            if (current_symbol == previous_symbol) {
                ++counter;
            } else {
                next += std::to_string(counter) + previous_symbol;
                counter = 1;
                previous_symbol = current_symbol;
            }
        }
        // Need to append last symbol to string
        next += std::to_string(counter) + previous_symbol;
        return next;
    }
    string countAndSay(int n) {
        string say = "1";
        int index  = 1;
        while (index < n) {
            say = nextString(say);
            ++index;
        }
        return say;
    }
};

int main() {
    Solution38 sol;
    int    k;
    cout << "Please enter a number, k: ";
    cin  >> k;
    cout << "The kth term of count and say sequence is: " << sol.countAndSay(k) << endl;
    return 0;
}
