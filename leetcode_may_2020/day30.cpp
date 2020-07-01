// Day 30, K closest point to origin
#include<iostream>
#include<algorithm>
#include<vector>

class SolutionDay30 {
public:
    struct order{
        bool operator() (vector<int> A, vector<int> B) {
            int sqr_dist_A = A[0] * A[0] + A[1] * A[1];
            int sqr_dist_B = B[0] * B[0] + B[1] * B[1];
            return sqr_dist_A < sqr_dist_B;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        sort(points.begin(), points.end(), order());
        vector<vector<int>> closest(points.begin(), points.begin()+K);
        return closest;
    }
};
