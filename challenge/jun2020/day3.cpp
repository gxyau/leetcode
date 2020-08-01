// Day 3, Two city scheduling
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay3 {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), [](auto a, auto b) {return a[0] - a[1] < b[0] - b[1];});
        int n        = costs.size()/2;
        int min_cost = 0;
        for (int i = 0; i < costs.size(); ++i) {
            min_cost += i < costs.size()/2 ? costs[i][0] : costs[i][1];
        }
        return min_cost;
    }
};

int main() {
    // TODO: Implement the body
    return 0;
}
