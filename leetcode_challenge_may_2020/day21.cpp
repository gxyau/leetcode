// Day 21, Count square submatrices with all ones
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay21 {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m     = matrix.size();
        int n     = matrix[0].size();
        int total = 0;
        vector<vector<int>> DP(m, vector<int>(n));
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (i == 0) {
                    DP[0][j] = matrix[0][j];
                } else if (j == 0) {
                    DP[i][0] = matrix[i][0];
                } else {
                    DP[i][j] = matrix[i][j] == 1 ? 
                        std::min({DP[i-1][j], DP[i-1][j-1], DP[i][j-1]}) + 1 : 0;
                }
                total += DP[i][j];
            }
        }
        return total;
    }
};
