// Day 21, Word Search
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class SolutionDay21 {
private:
    bool search(int i, int j, vector<vector<char>>& board, string remaining) {
        if (remaining.size() == 1) return remaining[0] == board[i][j];
        int m = board.size(), n = board[0].size();
        bool match = false;
        if (board[i][j] == '0') {
            return false;
        } else if (board[i][j] == remaining[0]) {
            char tmp    = remaining[0];
            board[i][j] = '0'; // Setting to 0 indicating this cell has been visited
            remaining   = string(remaining.begin()+1, remaining.end());
            if (i > 0)   match = match || search(i-1,j,board, remaining);
            if (j > 0)   match = match || search(i,j-1,board, remaining);
            if (i < m-1) match = match || search(i+1,j,board, remaining);
            if (j < n-1) match = match || search(i,j+1,board, remaining);
            board[i][j] = tmp; // Returning to original cell for next DFS
        }
        return match;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++ j) {
                if (search(i,j,board, word)) return true;
            }
        }
        return false;
    }
};

in main() {
    // Compile successful
    return 0;
}
