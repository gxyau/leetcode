// Day 22, Binary Tree Zigzag Order Traversal
#include <iostream>
#include <stack>
#include <vector>
using std::stack;
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

class SolutionDay22 {
private:
    stack<TreeNode*> lr, rl;
    // Left to right
    void l_to_r (vector<vector<int>> &order) {
        TreeNode* cur;
        vector<int> level;
        while (!lr.empty()) {
            cur = lr.top();
            lr.pop();
            if (cur != nullptr) {
                level.push_back(cur->val);
                rl.push(cur->left);
                rl.push(cur->right);
            }
        }
        if(!level.empty()) order.push_back(level);
        return;
    }
    // Right to left
    void r_to_l (vector<vector<int>> &order) {
        TreeNode* cur;
        vector<int> level;
        while (!rl.empty()) {
            cur = rl.top();
            rl.pop();
            if (cur != nullptr) {
                level.push_back(cur->val);
                lr.push(cur->right);
                lr.push(cur->left);
            }
        }
        if(!level.empty()) order.push_back(level);
        return;
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // If root is empty return empty vector
        if (!root) return {};
        // If not empty
        vector<vector<int>> order;
        // Starting first level from left to right
        lr.push(root);
        while (true) {
            if (!lr.empty()) {
                l_to_r(order);
            } else if (!rl.empty()) {
                r_to_l(order);
            } else {
                break;
            }
        }
        return order;
    }
};

int main() {
    // Compile successful
    return 0;
}
