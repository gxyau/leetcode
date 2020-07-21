// Day 21, Word Search
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class SolutionDay21 {
private:
    bool search(int i, int j, vector<vector<char>>& board, string remaining) {
        if (remaining == '') return true;
        int m = board.size(), n = board[0].size();
        bool match = false;
        if (board[i][j] == '0') {
            return false;
        } else if (board[i][j] == string[0]) {
            char tmp = string[0];
            board[i][j] = '0';
            if (i > 0)   match || search(i-1,j,board, string.substr(1));
            if (j > 0)   match || search(i,j-1,board, string.substr(1));
            if (i < n-1) match || search(i+1,j,board, string.substr(1));
            if (j < n-1) match || search(i,j+1,board, string.substr(1));
            board[i][j] = tmp;
        }
        return false;
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
