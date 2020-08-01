// Day 25, uncrossed line
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay25 {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int m = A.size(), n = B.size();
        vector<vector<int>> DP(m+1, vector<int>(n+1,{0}));
        for (int i = 1; i < m+1; ++i) {
            for (int j = 1; j < n+1; ++j) {
                if (A[i-1] == B[j-1]) {
                    DP[i][j] = 1 + DP[i-1][j-1];
                } else {
                    DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
                }
            }
        }
        return DP[m][n];
    }
};
