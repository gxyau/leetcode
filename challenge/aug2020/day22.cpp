// Day 22, Random Point in Non-overlapping Rectangles
#include <iostream>
#include <vector>

class Solution {
    public:
        Solution(vector<vector<int>>& rects) {
            sums_ = vector<int>(rects_.size());
            for (int i = 0; i < rects_.size(); ++i) {
              sums_[i] = (rects_[i][2] - rects_[i][0] + 1) * (rects_[i][3] - rects_[i][1] + 1);
              if (i > 0) sums_[i] += sums_[i - 1];
            }
        }

        vector<int> pick() {
            const int s = nextInt(sums_.back()) + 1;
            int index = lower_bound(sums_.begin(), sums_.end(), s) - sums_.begin();
            const auto& rect = rects_[index];
            return {rect[0] + nextInt(rect[2] - rect[0] + 1), rect[1] + nextInt(rect[3] - rect[1] + 1)};
        }
};

int main() {
    return 0;
}
