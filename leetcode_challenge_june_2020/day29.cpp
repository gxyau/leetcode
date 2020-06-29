// Day 29, Unique paths
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class SolutionDay29 {
public:
    int uniquePaths(int m, int n) {
        // Special case where there's only one path
        if (m == 1 || n == 1) return 1;
        
        // When there are more paths
        vector<vector<int>> DP(m, vector<int>(n));
        // Only one path to get to bottom left and every square along the path
        for (int i = 0; i < m; ++i) DP[i][0] = 1;
        // Only one path to get to top right and every square along the path
        for (int j = 0; j < n; ++j) DP[0][j] = 1;
        
        // DP computing unique paths
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                DP[i][j] = DP[i-1][j] + DP[i][j-1];
            }
        }
        return DP[m-1][n-1];
    }
};

int main() {
    SolutionDay29 sol;
    int m, n, paths;
    cout << "Please enter m: ";
    cin  >> m;
    cout << "Please enter n: ";
    cin  >> n;
    paths = sol.uniquePaths(m,n);
    cout << "Number of unique paths: " << paths << endl;
    // Compile successfully
    return 0;
}
