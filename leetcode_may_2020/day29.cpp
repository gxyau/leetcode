// Day 29, Course schedule
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay29 {
public:
    bool complete = true;
    
    bool resolved(int node, vector<vector<int>>& prereqs, vector<int>& visited) {
        visited[node] = 1;
        for(auto it: prereqs[node]) {
            if(visited[it] == 1 || (visited[it] == 0 && !resolved(it, prereqs, visited))) {
                return false;
            }
        }
        visited[node] = 0;
        return true;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size() == 0) return true;
        // Building graph adjacency
        vector<vector<int>> prereqs(numCourses);
        for(auto prereq: prerequisites) {
            prereqs[prereq[1]].push_back(prereq[0]);
        }
        // Checking if it can be completed
        vector<int> visited(numCourses, 0);
        for(int i = 0 ; i < numCourses; ++i) {
            complete &= resolved(i, prereqs, visited);
        }
        return complete;
    }
};
