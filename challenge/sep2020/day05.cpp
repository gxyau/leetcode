// Day 5, All Elements in Two Binary Search Trees
#include <iostream>
#include <vector>
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

class Solution {
    private:
        void preorder(TreeNode* root, vector<int> &ans) {
            if(root == nullptr) return;
            ans.push_back(root->val);
            preorder(root->left, ans);
            preorder(root->right, ans);
        }
    public:
        vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
            vector<int> ans = {};
            preorder(root1, ans);
            preorder(root2, ans);
            sort(ans.begin(), ans.end());
            return ans;
        }
};

int main() {
    // Compile successful
    return 0;
}
