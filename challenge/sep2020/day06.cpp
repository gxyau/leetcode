// Day 6, Image Overlap
#include <vector>
using std::vector;

class Solution {
    public:
        int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
            // vector of pair<r, c> for 1  
            int M = A.size(); // row count
            int N = A[0].size(); // column count 
            vector<pair<int, int>> oneA, oneB;
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < N; j++) {
                    if (A[i][j])
                        oneA.emplace_back(i, j);
                    if (B[i][j])
                        oneB.emplace_back(i, j);
                }
            }

            vector<vector<int>> C(2*M, vector<int>(2*N, 0));
            // for each pair, compute the diff in offset <row shift ro, column shift co>
            // for convenience, (M, N) is the origin
            for (auto a : oneA) {
                for (auto b : oneB) {
                    C[b.first + M - a.first][b.second + N - a.second]++;
                }
            }

            int maxCnt = 0;
            for (int i = 0; i < 2*M; i++) {
                for (int j = 0; j < 2*N; j++) {
                    if (C[i][j] > maxCnt)
                        maxCnt = C[i][j];
                }
            }
            // return max
            return maxCnt;
        }
};

int main() {
    // Compile successful
    return 0;
}
