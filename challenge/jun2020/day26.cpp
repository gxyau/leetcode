// Day 26, Sum Root to Leaf Numbers


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SolutionDay26 {
private:
    int total = 0;
    void tree_sum(TreeNode* root, int prefix) {
        if (root->left == nullptr && root->right == nullptr) total += prefix;
        if (root->left != nullptr) tree_sum(root->left, prefix*10 + root->left->val);
        if (root->right != nullptr) tree_sum(root->right, prefix*10 + root->right->val);
    }
public:
    int sumNumbers(TreeNode* root) {
        if (root == nullptr) return 0;
        tree_sum(root, root->val);
        return total;
    }
};
