#include<iostream>
#include<string>
using std::string;
using std::stoi;
using std::cout;
using std::cin;
using std::endl;
class SolutionDay13 {
public:
    string removeKdigits(string num, int k) {
        if (num.size() <= k) return "0";
        while (k--) {
            int n      = num.size();
            bool found = false;
            for (int i = 0; i < n-1; ++i) {
                if (num[i] > num[i+1]) {
                    num.erase(i,1);
                    found = true;
                    break;
                }
                continue;
            }
            if (!found) num = num.substr(0,n-1);
        }
        while (!num.empty() && num[0] == '0') {
            num = num.substr(1);
        }
        return num.empty() ? "0" : num;
    }
};

int main() {
    string num;
    int k;
    SolutionDay13 sol;
    cout << "Please enter a non-negative integer: ";
    cin  >> num;
    cout << "Please enter number of digit(s) to remove: ";
    cin  >> k;
    string answer = sol.removeKdigits(num, k);
    cout << "The answer is: " << answer << endl;
    return 0;
}
