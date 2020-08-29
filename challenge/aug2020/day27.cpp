// Day 27, Find Right Interval
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using std::vector;

class SolutionDay27 {
    public:
        vector<int> findRightInterval(vector<vector<int>>& intervals) {
            vector<int> right_intervals(intervals.size(), {-1});
            std::map<int, int> order;
            std::map<int, int>::iterator it;
            int index = 0;
            // Sorting intervals
            for (vector<int> x : intervals) order.insert(std::pair(x[0], index++));
            for (int i = 0; i < intervals.size(); ++i) {
                it = order.lower_bound(intervals[i][1]);
                if (it != order.end()) right_intervals[i] = it->second;                                                                                                          
            }
            return right_intervals;
        }
};

int main() {
    // Compile succesful
    return 0;
}
