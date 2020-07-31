#include<iostream>
#include<unordered_map>
using std::unordered_map;
using std::string;

class SolutionDay3 {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> dict;
        for (char m : magazine) dict[m]++;
        for (char r : ransomNote) {
            if (dict[r]) {
                dict[r]--;
            } else {
                return false;
            }
        }
        return true;
    }
};

int main () {
    SolutionDay3 Sol;
    Sol.canConstruct("", "");
    Sol.canConstruct("aa", "a");
    return 0;
}
