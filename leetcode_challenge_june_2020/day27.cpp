// Day 27, Perfect Squares
#include <cmath>
#include <limits>
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class SolutionDay27 {
private:
    bool perfect_square(int number) {
          long double sr = sqrt((long double) number);
          return (sr - floor(sr) == 0);
    }
public:
    int numSquares(int n) {
        if (perfect_square(n)) return 1;
        vector<int> DP(n+1,{0}), perfect;
        int current_min;
        for (int i = 1; i <= n; ++i) {
            if (perfect_square(i)) {
                perfect.push_back(i);
                DP[i] = 1;
            } else {
                current_min = std::numeric_limits<int>::max();
                for (int sqr : perfect) {
                    current_min = std::min(current_min, DP[i-sqr]+1);
                }
                DP[i] = current_min;
            }
        }
        return DP[n];
    }
};

int main() {
    SolutionDay27 sol;
    int number, answer;
    cout << "Please enter a positive integer: ";
    cin  >> number;
    answer = sol.numSquares(number);
    cout << "Number of perfect squares required: " << answer << endl;
    return 0;
}
