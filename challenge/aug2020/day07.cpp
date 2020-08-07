// Day 7, Vertical Order Traversal of a Binary Tree
#include <algorithm>
#include <iostream>
#include <vector>
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

class Solution {
    private:
        // Point structure with custom inequality defined
        struct Point {
            int x, y, value;
            // Define smaller operator
            bool operator<(const Point p) const {
                bool flag = false;
                // First : When x coordinate is smaller (left to right)
                // Second: Same x coordinate but y coordinate larger (top to bottom)
                // Third : Same x,y coordinate but value is smaller
                return x < p.x ||  (x == p.x && y > p.y) || (x == p.x && y == p.y && value < p.value);
            }
        };
        // Keeping track of order of points
        vector<Point> points;
        // Depth first search
        void DFS(TreeNode* node, int x, int y) {
            if (!node) return;
            points.push_back({x,y,node->val});
            DFS(node->left, x-1, y-1);
            DFS(node->right, x+1,y-1);
        }
    public:
        vector<vector<int>> verticalTraversal(TreeNode* root) {
            if (!root) return {};
            DFS(root, 0, 0);
            std::sort(points.begin(), points.end());
            size_t width = points[points.size()-1].x - points[0].x + 1;
            vector<vector<int>> order(width);
            auto xToI{[&](const int x){ return x - points[0].x; }};
            for(const auto& p : points) order[xToI(p.x)].push_back(p.value);
            return order;
        }
};

int main() {
    // Compile successful
    return 0;
}
