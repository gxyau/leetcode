// Day 1, June 2020, Invert Binary Tree
#include<iostream>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class SolutionDay1 {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return root;
        swap_children(root);
        return root;
    }
private:
    void swap_children(TreeNode* root) {
        swap(root->left, root->right);
        if (root->left != nullptr) swap_children(root->left);
        if (root->right != nullptr) swap_children(root->right);
    }
    void swap(TreeNode* &node1, TreeNode* &node2) {
        TreeNode* temp = node1;
        node1 = node2;
        node2 = temp;
    }
};
