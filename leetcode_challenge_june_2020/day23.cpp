// Day 23, Count Complete Tree Nodes
#include <iostream>
#include <queue>
using std::cout;
using std::endl;
using std::queue;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SolutionDay23 {
public:
    int countNodes(TreeNode* root) {
        cout << "Something" << endl;
        if (root == nullptr) return 0;
        // Use queue and whenever it is not empty + 1
        queue<TreeNode*> q;
        q.push(root);
        TreeNode *node;
        int counter = 0;
        // While q not empty, add left and right to q whenever possible
        while (!q.empty()) {
            node = q.front();
            ++counter;
            if (node->left  != nullptr) q.push(node->left);
            if (node->right != nullptr) q.push(node->right);
            q.pop();
        }
        return counter;
    }
};

int main() {
    SolutionDay23 sol;
    TreeNode *root = nullptr;
    int count;
    // Case 1, empty root
    count = sol.countNodes(root);
    cout << "Number of nodes in binary tree: " << count << endl;
    // Case 2, single element
    root = new TreeNode(1);
    count = sol.countNodes(root);
    cout << "Number of nodes in binary tree: " << count << endl;
    // Case 3, more element
    root->left  = new TreeNode(2);
    root->right = new TreeNode(3);
    count = sol.countNodes(root);
    cout << "Number of nodes in binary tree: " << count << endl;
    // Case 3, more than two layers
    root->left->left   = new TreeNode(4);
    root->left->right  = new TreeNode(5);
    root->right->left  = new TreeNode(6);
    root->right->right = new TreeNode(7);
    count = sol.countNodes(root);
    cout << "Number of nodes in binary tree: " << count << endl;
    // End of test cases
    return 0;
}
