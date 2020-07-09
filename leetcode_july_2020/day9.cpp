// Day 9, Maximum Width of Binary Tree
#include <iostream>
#include <queue>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SolutionDay9 {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;
        std::queue<std::pair<TreeNode*, unsigned long long int>> q;
        std::pair<TreeNode*, unsigned long long int> tmp;
	    q.push({root, 0});
    	int width = 0;
	    while (q.size() != 0) {
		    unsigned long long int l = q.front().second, r = 0;
		    int size = q.size();
		    while (size-- > 0) {
			    tmp = q.front();
			    q.pop();
			    r = tmp.second;
		    	if (tmp.first->left) {
	    			q.push({tmp.first->left, 2 * tmp.second + 1});
    			}
			    if (tmp.first->right) {
		    		q.push({tmp.first->right, 2 * tmp.second + 2});
	    		}
    		}
		    width = std::max(width, int(r - l + 1));
	    }
	return width;
    }
};
