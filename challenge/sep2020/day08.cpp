// Day 8, Sum of Root To Leaf Binary Numbers

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
        int sum;
        // BFS helper
        void BFS(TreeNode *root, int binary) {
            /*
            if (!root) {
                sum += binary;
                return;
            }
            (binary <<= 1) |= root->val;
            BFS(root->left, binary);
            BFS(root->right, binary);
            */
            (binary <<= 1) |= root->val;
            if (!root->left && !root->right) {
                sum += binary;
                return;
            }
            if (root->right) BFS(root->right, binary);
            if (root->left)  BFS(root->left, binary);
            return;
        }
    public:
        int sumRootToLeaf(TreeNode* root) {
            if (!root) return 0;
            sum = 0;
            BFS(root, 0);
            /*
            // We added the leaf to the sum twice (calling left, right on leaf)
            // So need to divide by two
            return sum/2;
            */
            return sum;
        }
};

int main() {
    // Compile successful
    return 0;
}
