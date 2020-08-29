// Day 24, Sum of left leaves;
#include <iostream>

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
    private:
        int left_sum = 0;
        
        void find_left_leaf(TreeNode* node, bool is_left) {
            if (!node) return;
            if (!(node->left) && !(node->right)) {
                left_sum += is_left ? node->val : 0;
            }
            find_left_leaf(node->left, true);
            find_left_leaf(node->right, false);
        }
    public:
        int sumOfLeftLeaves(TreeNode* root) {
            find_left_leaf(root, false);
            return left_sum;
        }
};

int main() {
    // Compile successful
    return 0;
}
