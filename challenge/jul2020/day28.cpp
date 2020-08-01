// Day 28, Task Scheduler
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay28 {
    public:
        int leastInterval(vector<char>& tasks, int n) {
            if (!n) return tasks.size();
            int freq[26] = {0}, max_freq = 0, num_max = 0;
            // Saving frequency table, and maximum frequency
            for (char x : tasks) max_freq = std::max(max_freq, ++freq[x-'A']);
            // Finding number of elements with maximum frequency
            for (int i = 0; i < 26; ++i) if (freq[i] == max_freq) ++num_max;
            // Idle time not processing one of the maximum frequency elements
            int idle = n + 1 - num_max;
            // More max freq elms than waiting time
            if (idle <= 0) return tasks.size();
            // Otherwise
            return std::max((int) tasks.size(), max_freq * num_max + idle * (max_freq - 1));
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
