// Day 17, Surrounded Regions
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay17 {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) return;
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 'X') continue;
                if (i == 0 || i == m-1 || j == 0 || j == n-1) {
                    DFS(board, i, j);
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                board[i][j] = (board[i][j] == '*') ? 'O' : 'X';
            }
        }
    }
    
private:
    void DFS(std::vector<std::vector<char>>& board, int i, int j) {
        if (0 <= i && i < board.size() && 0 <= j && j < board[0].size() && board[i][j] == 'O') {
            board[i][j] = '*';
            DFS(board, i+1, j);
            DFS(board, i-1, j);
            DFS(board, i, j+1);
            DFS(board, i, j-1);
        }
    }
};
