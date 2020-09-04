// Day 4, Partition Labels
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using std::string;
using std::vector;

class Solution {
    public:
        vector<int> partitionLabels(string S) {
            vector<int> partitions;
            int freq[26];
            for (auto c : S) {
                if (freq[c-'a']++) {
                    partitions = {std::accumulate(partitions.begin(), partitions.end(), 0)};
                }
            }
            return {};// partitions;
        }
};

int main() {
    Solution sol;
    string S;
    vector<int> partitions;
    // Mini program
    std::cout << "Please input a string: ";
    std::cin  >> S;
    partitions = sol.partitionLabels(S);
    std::cout << "Partitions: ";
    for (int x : partitions) std::cout << x << " ";
    std::cout << std::endl;
    // Compile successful
    return 0;
}
