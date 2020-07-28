// Day 28, Task Scheduler
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay28 {
public:
    int leastInterval(vector<char>& tasks, int n) {
        return 0;
    }
};

int main() {
    SolutionDay28 sol;
    vector<char> tasks;
    int n, ans;
    // Test case 1
    tasks = {'A','A','A','B','B','B'};
    n     = 2;
    ans   = sol.leastInterval(tasks, n);
    std::cout << "The least interval is: " << ans << std::endl;
    // Compile successful
    return 0;
}
