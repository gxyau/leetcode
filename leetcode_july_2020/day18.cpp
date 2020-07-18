// Day 18, Course Schedule II
#include <iostream>
#include <queue>
#include <vector>
using std::vector;

class SolutionDay18{
private:
    bool completed(int n, vector<int> &top_order, vector<vector<int> > &adj) {
        // Degree list
        vector<int> degree(n, 0);
        for (vector<int> vec: adj) {
            for(int node: vec) {
                ++degree[node];
            }
        }
        // Insert courses that doesn't have dependency first
        std::queue<int> q;
        for (int i = 0; i < n; i++) {
            if (degree[i] == 0) q.push(i);
        }
        // Insert the list that has the least dependency
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            --n;
            top_order.push_back(curr);
            for (auto next: adj[curr])
                if (--degree[next] == 0) q.push(next);
        }
        // Only returns true if it can be completed
        return n == 0;
    }
public:
    vector<int> findOrder(int num_courses, vector<vector<int> >& prerequisites) {
        vector<int> top_order;
        // Building adjecency list
        vector<vector<int> > adj(num_courses);
        for(vector<int> v: prerequisites){
            adj[v[1]].push_back(v[0]);
        }
        // If no cycle detected;
        return completed(num_courses, top_order, adj) ? top_order : vector<int>(0);
    }
};

int main() {
    // Compile successful
    return 0;
}
