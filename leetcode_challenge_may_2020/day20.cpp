// Kth smallest element in a BST
#include<iostream>
#include<stack>
using std::stack;

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
class SolutionDay20 {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> order;
        while (true) {
            while (root != nullptr) {
                order.push(root);
                root = root->left;
            }
            root = order.top();
            order.pop();
            if (--k == 0) return root->val;
            root = root->right;
        }
    }
};
