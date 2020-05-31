// Day 31, Edit distance
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;

class Solution {
public:
    int minDistance(string word1, string word2) {
        const int m = word1.size(), n = word2.size();
        vector<vector<int>> DP(m+1,vector<int>(n+1,{0}));
        // Second string empty, delete every character
        for (int j = 1; j < n+1; ++j) DP[0][j] = j;
        // DP solution
        for (int i = 1; i < m+1; ++i) {
            DP[i][0] = i; // If first string is empty, enter every character
            for (int j = 1; j < n+1; ++j) {
                // If equal don't need extra action
                DP[i][j] = std::min({DP[i-1][j] + 1, // Remove
                        DP[i][j-1] + 1, // Insert
                        DP[i-1][j-1] + 1 - (word1[i-1] == word2[j-1])}); // Replace
            }
        }
        // Return answer
        return DP[m][n];
    }
};
