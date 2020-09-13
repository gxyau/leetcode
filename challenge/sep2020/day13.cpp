// Day 13, Insert Intervals
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    private:
        // Merging two intervals
        vector<int> merge_intervals(vector<int> interval1, vector<int> interval2) {
            vector<int> new_interval;
            // First position
            if (interval1[0] < interval2[0]) {
                new_interval.push_back(interval1[0]);
            } else {
                new_interval.push_back(interval2[0]);
            }
            // Second position
            if (interval1[1] < interval2[1]) {
                new_interval.push_back(interval2[1]);
            } else {
                new_interval.push_back(interval1[1]);
            }
            std::cout << "Interval after merging: [" << new_interval[0] << ", " << new_interval[1] << "]\n";
            return new_interval;
        }
    public:
        vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& new_interval) {
            if (intervals.empty()) return {new_interval};
            vector<vector<int>> result;
            // Construct new intervals
            for (auto it = intervals.begin(); it != intervals.end(); ++it) {
                if ((*it)[1] < new_interval[0]) {
                    result.push_back(*it);
                } else if ((*it)[0] > new_interval[1]) {
                    result.push_back(new_interval);
                    new_interval = *it;
                } else {
                    new_interval = merge_intervals(*it, new_interval);
                }
            }
            result.push_back(new_interval);
            return result;
        }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals, result;
    vector<int> newInterval;
    // Test case 1
    std::cout << "================================ Case 1 ================================" << std::endl;
    intervals   = {{1,3},{6,9}};
    newInterval = {2,5};
    result      = sol.insert(intervals, newInterval);
    std::cout << "The resulting intervals are: ";
    for (vector<int> interval : result) 
        std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
    std::cout << std::endl;
    std::cout << "================================== End ==================================" << std::endl;
    // Test case 2
    std::cout << "================================ Case 2 ================================" << std::endl;
    intervals   = {{1,2},{3,5},{6,7},{8,10},{12,16}};
    newInterval = {4,8};
    result      = sol.insert(intervals, newInterval);
    std::cout << "The resulting intervals are: ";
    for (vector<int> interval : result)
        std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
    std::cout << std::endl;
    std::cout << "================================== End ==================================" << std::endl;
    // Compile successful
    return 0;
}
