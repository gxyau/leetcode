// Day 23, Interval list intersections
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay23 {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        // Initialising variables
        vector<vector<int>> intersections;
        const int n1 = A.size(); const int n2 = B.size();
        int i  = 0; int j = 0;
        while (i < n1 && j < n2) {
            // Find lowest and highest index
            int l = max(A[i][0], B[j][0]);
            int r = min(A[i][1], B[j][1]);
            // Only add the interval if they intersect
            if (l <= r) intersections.push_back(vector<int> {l,r});
            // Remove interval with smaller endpoint
            if (A[i][1] < B[j][1]) {
                ++i;
            } else {
                ++j;
            }
        }
        return intersections;
    }
};
