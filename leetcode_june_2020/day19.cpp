// Day 19, Longest Duplicate Substring
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class SolutionDay19 {
public:
    string longestDupSubstring(string S) {
        string longest;
        std::unordered_set<std::string_view> set;
        size_t beg = 1;
        size_t end = S.size() - 1;
        while (beg <= end)
        {
            auto len = beg + (end - beg) / 2;
            bool found = false;
            for (size_t i = 0; i != S.size() - len + 1; ++i)
            {
                const auto [it, inserted] = set.emplace(S.data() + i, len);
                if (!inserted)
                {
                    found = true;
                    longest = std::move(*it);
                    break;   
                }
            }
            
            if (found)
                beg = len + 1;
            else
                end = len - 1;
            
            set.clear();      
        }
            
        return longest;
    }
};

int main() {
    SolutionDay19 sol;
    string        str, substr;
    cout << "Please enter a string: ";
    cin  >> str;
    substr = sol.longestDupSubstring(str);
    cout << "Longest duplicate substring is: " << substr << endl;
    return 0;
}
