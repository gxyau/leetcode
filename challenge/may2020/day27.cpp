// Day 27, Possible bipartition
#include<iostream>
#include<vector>
using std::map;
using std::vector;

class SolutionDay27 {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<int> colour(N,-1);
        vector<vector<int>> adjacency(N);
        queue<int> q;
        for(const auto& pair : dislikes) {
            adjacency[pair[0]-1].push_back(pair[1]-1);
            adjacency[pair[1]-1].push_back(pair[0]-1);
        }
        for (int i = 0; i < N; ++i) {
            if(colour[i] < 0) {
                q.push(i);
                colour[i] = 0;
                while(!q.empty()) {
                    int v = q.front();
                    q.pop();
                    for (int u : adjacency[v]) {
                        if (colour[u]<0) {
                            colour[u] = colour[v]^1;
                            q.push(u);
                        } else {
                            if (colour[u] == colour[v]) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
