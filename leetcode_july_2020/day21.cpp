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
        if (board[i][j] == '0') {
            return false;
        } else if (board[i][j] == string[0]) {
            char tmp = string[0];
            board[i][j] = '0';
            if (i > 0)   return search(i-1,j,board, string.substr(1));
            if (j > 0)   return search(i,j-1,board, string.substr(1));
            if (i < n-1) return search(i+1,j,board, string.substr(1));
            if (j < n-1) return search(i,j+1,board, string.substr(1));
            board[i][j] = tmp;
        }
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        return false;
    }
};

in main() {
    // Compile successful
    return 0;
}
