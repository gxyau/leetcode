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
            vector<int> partitions, last(26,{-1});
            int index = 0, anchor = 0, block = 0;
            for (char c : S) last[c-'a'] = index++;
            std::cout << std::endl;
            index = 0;
            for (char c : S) {
                block = std::max(block, last[c-'a']);
                if (index == block) {
                    partitions.push_back(index-anchor+1);
                    anchor = index+1;
                }
                ++index;
            }
            return partitions;
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
