// Day 30, Word Search II
#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

class SolutionDay30 {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> found;
        return found;
    }
};

int main() {
    SolutionDay30 sol;
    vector<vector<char>> board;
    vector<string> words, found;
    // Test case 1
    board = {{'o','a','a','n'},{'e','t','a','e'},{'i','h','k','r'},{'i','f','l','v'}};
    words = {"oath","pea","eat","rain"};
    // Print board
    cout << "The board looks like:" << endl;
    for (auto vec : board) {
        for (auto x : vec) {
            cout << x << "  ";
        }
        cout << endl << endl;
    }
    // Print words
    cout << "Words to search for: ";
    for (string word : words) cout << word << " ";
    cout << endl << endl;
    found = sol.findWords(board, words);
    cout << "Found: ";
    for (string word : found) cout << word << " ";
    cout << endl << endl;
    // Compile successful
    return 0;
}
