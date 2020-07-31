// Day 2, Binary Tree Level Order Traversal II
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using std::queue;
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

class SolutionDay2 {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (root == nullptr) return vector<vector<int>> (0);
        vector<vector<int>> reversed;
        vector<int> level;
        queue<TreeNode*> q1, q2;
        q1.push(root);
        TreeNode* ptr;
        while (!q1.empty() || !q2.empty()) {
            if (!q1.empty()) {
                ptr = q1.front();
                q1.pop();
                level.push_back(ptr->val);
                if (ptr->left) q2.push(ptr->left);
                if (ptr->right) q2.push(ptr->right);
            } else { // q2 not empty
                q1 = q2;
                q2 = queue<TreeNode*>();
                reversed.push_back(level);
                level.resize(0);
            }
        }
        reversed.push_back(level);
        // Two queues, level traversal
        std::reverse(reversed.begin(), reversed.end());
        return reversed;
    }
};

int main() {
    SolutionDay2 sol;
    TreeNode* root;
    // Test case 1
    root = new TreeNode(3);
    root->left  = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left  = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> reversed = sol.levelOrderBottom(root);
    // Printing levels
    std::cout << "The levels are: \n";
    for (auto vec : reversed) {
        for (auto x : vec) {
            std::cout << x << "  ";
        }
        std::cout << "\n\n";
    }
    // Compile successful
    return 0;
}
