// Day 10, Bulls and Cows
#include <iostream>
#include <sring>
using std::string;

class Solution {
    public:
        string getHint(string secret, string guess) {
            int cows = 0, bulls = 0;
            vector<int> count_S(10);
            string ans;
            for (char c : secret) {
                count_S[c - '0']++;
            }
            for (char c : guess) {
                count_S[c - '0']--;
                if (count_S[c - '0'] >= 0) cows++;
            }
            for (int i = 0; i < guess.size(); ++i) {
                if (guess[i] == secret[i]) cows--, bulls++;
            }
            ans += to_string(bulls) + 'A' + to_string(cows) + 'B';
            return ans;
        }
};

int main() {
    // Compile successful
    return 0;
}
