// Day 31, Delete Node in a BST
#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    private:
        TreeNode* merge_subtrees(TreeNode* l, TreeNode* r) {
            // If any subtree is empty, we return the other
            if (!l) return r;
            l->right = merge_subtrees(l->right, r);
            return l;
        }
    public:
        TreeNode* deleteNode(TreeNode* root, int key) {
            if (!root) return root;
            // Merging subtrees
            if (root->val == key) {
                return merge_subtrees(root->left, root->right);
            } else if (root->val > key) {
                root->left = deleteNode(root->left, key);
            } else {
                root->right = deleteNode(root->right, key);
            }
            return root;
        }
};

int main() {
    // Compile successful
    return 0;
}
