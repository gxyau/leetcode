// Day 22, Random Point in Non-overlapping Rectangles
#include <iostream>
#include <vector>

class Solution {
    private:
        vector<int> sums;
        vector<vector<int>> rectangles;
        // Returns a random int in [0, n - 1]
        int nextInt(int n) {
          return rand() / static_cast<double>(RAND_MAX) * n;
        }
    public:
        Solution(vector<vector<int>>& rects) {
            sums       = vector<int>(rects.size());
            rectangles = rects;
            for (int i = 0; i < rectangles.size(); ++i) {
              sums[i] = (rects[i][2] - rectangles[i][0] + 1) * (rectangles[i][3] - rectangles[i][1] + 1);
              if (i > 0) sums[i] += sums[i - 1];
            }
        }

        vector<int> pick() {
            const int s = nextInt(sums.back()) + 1;
            int index = lower_bound(sums.begin(), sums.end(), s) - sums.begin();
            const auto& rect = rectangles[index];
            return {rect[0] + nextInt(rect[2] - rect[0] + 1), rect[1] + nextInt(rect[3] - rect[1] + 1)};
        }
};

int main() {
    // Compile successful
    return 0;
}
