// Day 9, Maximum Width of Binary Tree
#include <iostream>
#include <queue>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SolutionDay9 {
private:
    int level_width(std::queue<TreeNode*> q) {
        int width = 0, buffer = 0;
        TreeNode *ptr;
        while(!q.empty()) {
            ptr = q.front();
            q.pop();
            if (ptr) {
                width += buffer + 1;
            } else {
                if (width > 0) ++buffer;
            }
        }
        return width;
    }
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;
        // Define width
        int width = 0, max_width = 0, buffer = 0;
        std::queue<TreeNode*> q1, q2;
        TreeNode ptr;
        q1.push(root);
        do {
            ptr = q1.front();
            q1.pop();
            if (ptr) {
                width += buffer+1;
            } else if (width > 0) {
                ++buffer;
            }
        } while (width > 0);
        return width;
    }
};
