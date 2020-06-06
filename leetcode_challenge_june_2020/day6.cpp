// Day 6, Queue reconstruction by heightQueue Reconstruction by Height
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay6 {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n = people.size();
        vector<vector<int>> reconstructed_queue;
        // Sort according to height, if same height check if order is smaller
        sort(people.begin(), people.end(), [] (vector<int> &a, vector<int> &b) {
            return (a[0] == b[0]) ? a[1] < b[1] : a[0] > b[0];
        });
        // Add them into queue
        for (auto p : people) {
            reconstructed_queue.insert(reconstructed_queue.begin() + p[1], p);
        }
        return reconstructed_queue;
    }
};
