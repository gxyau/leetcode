// Day 4, Reverse string
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;

class SolutionDay4 {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            swap(s[i], s[n-1-i]);
        }
    }
};
