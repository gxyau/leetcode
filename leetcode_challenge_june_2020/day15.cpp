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
    return 0;
}
