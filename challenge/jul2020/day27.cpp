// Day 27, Construct Binary Tree from Inorder and Postorder Traversal
#include <iostream>
#include <unordered_map>
#include <vector>
using std::vector;

class SolutionDay27 {
    public:
        unordered_map<int,int> M;

        TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
            for(int i=0;i<inorder.size();i++) M[inorder[i]]=i;
            int index = postorder.size()-1;
            return buildUtil(inorder,postorder,0,inorder.size()-1,index);
        }

        TreeNode* buildUtil(vector<int>& inorder, vector<int>& postorder, int l, int r, int &index) {
            if (l > r) return NULL;
            
            int val = postorder[index--];
            TreeNode *node = new TreeNode(val);
             
            if (l == r) return node;
            int pivot = M[val];
            
            node->right = buildUtil(inorder, postorder, pivot + 1, r, index);
            node->left  = buildUtil(inorder, postorder, l, pivot - 1, index);
            
            return node; 
        }
};
