// Day 13, Same Tree

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

 class SolutionDay13 {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p) {
            return q == p;
        } else if (!q) {
            return false;
        }
        return true;
    }
};

int main() {
    // Compile successful
    return true;
}
