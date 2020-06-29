// Day 29, Unique paths
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SolutionDay29 {
public:
    int uniquePaths(int m, int n) {
        return 0;
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
