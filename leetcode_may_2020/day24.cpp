// Day 24, Binary search tree with preorder traversal
#include<iostream>
#include<limits>
#include<vector>
using std::vector;
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
class SolutionDay24 {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root = new TreeNode(0);
        TreeNode *head = nullptr;
        for (int num : preorder) {
            head = root;
            bool inserted = false;
            while (!inserted) {
                if (num < head->val) {
                    if (head->left == nullptr) {
                        head->left = new TreeNode(num);
                        inserted   = true;
                    } else {
                        head = head->left;
                    }
                } else {
                    if (head->right == nullptr) {
                        head->right = new TreeNode(num);
                        inserted    = true;
                    } else {
                        head = head->right;
                    }
                }
            }
        }
        return root->right;
    }
};
