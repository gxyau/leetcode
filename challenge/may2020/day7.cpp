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
class SolutionDay7 {
public:
    int level = 0;
    map<int, int> depth, parent;
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> gen0, gen1;
        gen0.push(root);
        depth[root->val]  = level;
        parent[root->val] = 0;
        ++level;
        while (true) {
            TreeNode* current = gen0.front();
            gen0.pop();
            
            if (current->left != nullptr) {
                gen1.push(current->left);
                depth[current->left->val]  = level;
                parent[current->left->val] = current->val;
            }                                                                                                                                                                                                       
            
            if(current->right != nullptr) {
                gen1.push(current->right);
                depth[current->right->val]  = level;
                parent[current->right->val] = current->val;
            }

            if (gen0.empty() && gen1.empty()) {
                break;
            } else if (gen0.empty()) {
                ++level;
                swap(gen0,gen1);
            }
        }
        return depth[x] == depth[y] && parent[x] != parent[y];
    }
};
