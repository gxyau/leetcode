// Day 11, H Index
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay11 {
    public:
        int hIndex(vector<int>& citations) {
            if (citations.empty()) return 0;
            int n = citations.size();
            int l = 0, r = n-1, m;
            // Sort them in order, O(n log n)
            std::sort(citations.begin(), citations.end(), std::greater<int>());
            // Binary search first m such that citations[m] >= m
            while (l <= r) {
                m = l + (r-l)/2;
                if (citations[m] > m) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
            return l;
        }
};

int main() {
    SolutionDay11 sol;
    vector<int> citations;
    int h_index;
    // Test case 1
    citations = {};
    std::cout << "The citations are: ";
    for (int x : citations) std::cout << x << " ";
    std::cout << std::endl;
    h_index = sol.hIndex(citations);
    std::cout << "The H Index is: " << h_index << "\n\n";
    // Test case 2
    citations = {0};
    std::cout << "The citations are: ";
    for (int x : citations) std::cout << x << " ";
    std::cout << std::endl;
    h_index = sol.hIndex(citations);
    std::cout << "The H Index is: " << h_index << "\n\n";
    // Test case 3
    citations = {1};
    std::cout << "The citations are: ";
    for (int x : citations) std::cout << x << " ";
    std::cout << std::endl;
    h_index = sol.hIndex(citations);
    std::cout << "The H Index is: " << h_index << "\n\n";
    // Test case 4
    citations = {3,0,6,1,5};
    std::cout << "The citations are: ";
    for (int x : citations) std::cout << x << " ";
    std::cout << std::endl;
    h_index = sol.hIndex(citations);
    std::cout << "The H Index is: " << h_index << "\n\n";
    // Test case 5
    citations = {7,1,1,2,4};
    std::cout << "The citations are: ";
    for (int x : citations) std::cout << x << " ";
    std::cout << std::endl;
    h_index = sol.hIndex(citations);
    std::cout << "The H Index is: " << h_index << "\n\n";
    // Compile successful
    return 0;
}
