// Day 22, Sort characters by Frequency
#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using std::string;
using std::unordered_map;
using std::vector;

class SolutionDay22 {
public:
    string frequencySort(string s) {
        // For storing character frequencies
        unordered_map<char, int> D;
        for(char c : s) ++D[c];

        // For sorting characters via frequencies
        priority_queue<pair<int, char>> Q;
        for (auto p : D)  Q.push({p.second, p.first});
        
        // For building string
        string str = "";
        while (!Q.empty()) {
            auto p = Q.top();
            Q.pop();
            while(p.first--) str += p.second;
        }
        return str;
    }
};
