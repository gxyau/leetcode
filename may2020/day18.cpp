// Day 18, Permutation in string
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

class SolutionDay18 {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int d1[26] = {0}, d2[26] = {0};
        int count  = 0;
        for  (int i = 0; i < s1.size(); ++i) {
            ++d1[s1[i] - 'a'];
            ++d2[s2[i] - 'a'];
        }
        for (int i = 0; i < 26; ++i) {
            if (d1[i] == d2[i]) ++count;
        }
        for (int i = 0; i < s2.size() - s1.size(); ++i) {
            if (count == 26) return true;
            int l = s2[i] - 'a';
            int r = s2[i+s1.size()] - 'a';
            ++d2[r];
            if (d2[r] == d1[r]) {
                ++count;
            } else if (d2[r] == d1[r]+1) {
                --count;
            }
            --d2[l];
            if (d2[l] == d1[l]) {
                ++count;
            } else if (d2[l] == d1[l]-1) {
                --count;
            }
        }
        return count == 26;
    }
};

int main() {
    string perm, str;
    cout << "Enter original string: ";
    std::cin  >> perm;
    cout << "Enter new string: ";
    std::cin  >> str;
    SolutionDay18 sol;
    bool ans = sol.checkInclusion(perm, str);
    cout << "There is a permutation in string? " << ans << endl;
    return 0;
}
