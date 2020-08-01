// Day 30, Word Search II
#include<iostream>
#include<stack>
#include<string>
#include<unordered_set>
#include<vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

struct TrieNode {
    TrieNode* children[26] = {nullptr};
    bool end               = false;
    string word;
};

class SolutionDay30 {
private:
    TrieNode* root = nullptr;
    
    void search_grid(int i, int j, TrieNode* ptr, std::unordered_set<string>& found, vector<vector<int>> visited, vector<vector<char>>& grid) {
        cout << "Position: " << i << ", " << j << endl;
        // Index out of bound
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || visited[i][j] == 1) return;
        // Move pointer to current character
        cout << "Character: " << grid[i][j] << endl;
        visited[i][j] = 1;
        ptr = ptr->children[grid[i][j]-'a'];
        // No such word in our word list
        if (ptr == nullptr) return;
        // If this is the end of a word in our word list
        cout << "Is a word? " << ptr->end << endl;
        if (ptr->end) {
            cout << "Found word: " << ptr->word << endl;
            found.insert(ptr->word);
        }
        // Recursive call
        search_grid(i-1, j, ptr, found, visited, grid);
        search_grid(i+1, j, ptr, found, visited, grid);
        search_grid(i, j-1, ptr, found, visited, grid);
        search_grid(i, j+1, ptr, found, visited, grid);
    }
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int m = board.size(), n = board[0].size();
        vector<vector<int>> visited;
        std::unordered_set<string> found;
        vector<string> answer;
        
        // Inserting words into prefix tree
        TrieNode* ptr;
        root = new TrieNode();
        for (string word : words) {
            cout << "Inserting " << word << " into prefix tree." << endl;
            ptr = root;
            for (char c : word) {
                cout << "Character: " << c << endl;
                if (ptr->children[c-'a'] == nullptr) ptr->children[c-'a'] = new TrieNode();
                ptr = ptr->children[c-'a'];
            }
            ptr->end  = true;
            ptr->word = word;
        }
        cout << endl;
        
        // Searching the grid
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << "Starting at position: " << i << ", " << j << endl;
                cout << "Starting character: " << board[i][j] << endl;
                visited = vector<vector<int>>(m, vector<int>(n));
                ptr     = root;
                search_grid(i, j, ptr, found, visited, board);
                cout << endl;
            }
        }
        
        // Return final result
        answer.assign(found.begin(), found.end());
        return answer;
    }
};

int main() {
    SolutionDay30 sol;
    vector<vector<char>> board;
    vector<string> words, answer;
    
    // Test case 1
    board = {{'o','a','a','n'},{'e','t','a','e'},{'i','h','k','r'},{'i','f','l','v'}};
    words = {"oath","pea","eat","rain"};
    answer.clear();
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
    answer = sol.findWords(board, words);
    cout << "Found: ";
    for (string word : answer) cout << word << " ";
    cout << endl << endl;
    
    // Test case 2
    board = {{'a','b'},{'c','d'}};
    words = {"cdba"};
    answer.clear();
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
    answer = sol.findWords(board, words);
    cout << "Found: ";
    for (string word : answer) cout << word << " ";
    cout << endl << endl;
    
    // Test case 3
    board = {{'a','b'},{'c','d'}};
    words = {"ab","cb","ad","bd","ac","ca","da","bc","db","adcb","dabc","abb","acb"};
    answer.clear();
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
    answer = sol.findWords(board, words);
    cout << "Found: ";
    for (string word : answer) cout << word << " ";
    cout << endl << endl;
    // Compile successful
    return 0;
}
