// Day 2, Binary Tree Level Order Traversal II
#include<queue>
#include<vector>
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
        // Two queues, level traversal
        return vector<vector<int>>(1,vector<int>(1));
    }
};

int main() {
    return 0;
}
