// Day 21, Dungeon Game
#include<iostream>
#include<limits>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class SolutionDay21 {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m  = dungeon.size(), n = dungeon[0].size();
        vector<vector<int>> DP(m+1, vector<int>(n+1, numeric_limits<int>::max()));
        DP[m][n-1] = DP[m-1][n] = 1;
        for(int i = m-1; i >= 0; i--) {
            for(int j = n-1; j >= 0; j--) {
                int required = min(DP[i+1][j], DP[i][j+1]) - dungeon[i][j];
                DP[i][j] = required > 0 ? required : 1;
            }
        }
        return DP[0][0];
    }
}
