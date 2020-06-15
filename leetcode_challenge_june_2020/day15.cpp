// Day 15, Search in a Binary Tree
#include<iostream>
using std::cout;
using std::endl;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SolutionDay15 {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return root;
    }
};

int main() {
    SolutionDay15 sol;
    // Case 1
    TreeNode *root    = new TreeNode(4);
    root->left        = new TreeNode(2);
    root->right       = new TreeNode(7);
    root->left->left  = new TreeNode(1);
    root->left->right = new TreeNode(3);
    TreeNode *answer  = sol.searchBST(root, 2);
    bool same_subtree = (root->left == answer);
    cout << "They are the same subtree: " << same_subtree << endl;
    // Case 2
    answer       = sol.searchBST(root, 5);
    bool is_null = (answer == nullptr);
    cout << "Cannot find subtree: " << is_null << endl;
    return 0;
}
