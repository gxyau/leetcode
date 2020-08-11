// Day 11, H Index
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay11 {
    public:
        int hIndex(vector<int>& citations) {
            if (citations.empty()) return 0;
            int index, n = citations.size();
            // Sort them in order, O(n log n)
            std::sort(citations.begin(), citations.end());
            
            return index;
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
