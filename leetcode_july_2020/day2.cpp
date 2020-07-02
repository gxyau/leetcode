// Day 2, Binary Tree Level Order Traversal II
#include <iostream>
#include <queue>
#include <vector>
using std::queue;
using std::vector;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SolutionDay2 {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        // Two queues, level traversal
        return vector<vector<int>>(1,vector<int>(1));
    }
};

int main() {
    SolutionDay2 sol;
    TreeNode* root;
    // Test case 1
    root = new TreeNode(3);
    root->left  = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left  = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> reversed = sol.levelOrderBottom(root);
    // Printing levels
    std::cout << "The levels are: ";
    for (auto vec : reversed) {
        for (auto x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    // Compile successful
    return 0;
}
