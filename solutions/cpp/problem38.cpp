// Problem 38, Count and Say
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Solution38 {
public:
    string countAndSay(int n) {
        string say = "Something";
        return say;
    }
};

int main() {
    Solution38 sol;
    int    k;
    string ans;
    cout << "Please enter a number, k: ";
    cin  >> k;
    ans = countAndSay(k);
    cout << "The kth term of count and say sequence is: " << ans << endl;
    return 0;
}
