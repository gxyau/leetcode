// Day 8, Path Sum III
#include <iostream>
#include <queue>
using std::queue;

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
class SolutionDay8 {
    private:
        void DFS(TreeNode* root, int sum, int &total, int cumulative) {
            if (!root) return;
            cumulative += root->val;
            if (cumulative == sum) ++total;
            DFS(root->left, sum, total, cumulative);
            DFS(root->right, sum, total, cumulative);
            return;
        }
    public:
        int pathSum(TreeNode* root, int sum) {
            if (!root) return 0;
            int total = 0;
            queue<TreeNode*> q;
            TreeNode* cur;
            q.push(root);
            while (!q.empty()) {
                cur = q.front();
                q.pop();
                if (!cur) continue;
                q.push(cur->left);
                q.push(cur->right);
                DFS(cur, sum, total, 0);
            }
            return total;
        }
};

int main() {
    return 0;
}
