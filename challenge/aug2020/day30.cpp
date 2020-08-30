// Day 30, Largest Component Size by Common Factor
#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>
using std::sqrt;
using std::vector;

class Solution {
    private:
        vector<int> parent;
        // Find parent
        int find (int vertex) {
            if(parent[vertex]==-1) return vertex;
            return parent[vertex]=find(parent[vertex]);
        }
        // Union
        bool merge(int u,int v) {
            int parent_u = find(u), parent_v = find(v);
            if(parent_u != parent_v) {
                parent[parent_v] = parent_u;
                return true;
            } else {
                return false;
            }
        }
    public:
        int largestComponentSize(vector<int>& A) {
            std::unordered_map<int, int> memory;
            parent = vector<int>(100001,{-1});
            int maximum = 0;
            // Creating components
            for (int a : A) {
                for (int i = 2; i <= sqrt(a); ++i) {
                    if (a % i == 0) {
                        merge(i, a);
                        merge(a, a/i);
                    }
                }
            }
            // Finding largest component
            for (int a : A) maximum = std::max(maximum, ++memory[find(a)]);
            return maximum;
        }
};

int main() {
    Solution sol;
    vector<int> A;
    int max_comp;
    // Test case 1;
    A = {};
    std::cout << "List of vertices: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    max_comp = sol.largestComponentSize(A);
    std::cout << "The largest component size is: " << max_comp << std::endl << std::endl;
    // Test case 2;
    A = {1};
    std::cout << "List of vertices: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    max_comp = sol.largestComponentSize(A);
    std::cout << "The largest component size is: " << max_comp << std::endl << std::endl;
    // Test case 3;
    A = {1,2};
    std::cout << "List of vertices: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    max_comp = sol.largestComponentSize(A);
    std::cout << "The largest component size is: " << max_comp << std::endl << std::endl;
    // Test case 4;
    A = {1,2,3,6};
    std::cout << "List of vertices: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    max_comp = sol.largestComponentSize(A);
    std::cout << "The largest component size is: " << max_comp << std::endl << std::endl;
    // Test case 5;
    A = {4,6,15,35};
    std::cout << "List of vertices: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    max_comp = sol.largestComponentSize(A);
    std::cout << "The largest component size is: " << max_comp << std::endl << std::endl;
    // Test case 6;
    A = {20,50,9,63};
    std::cout << "List of vertices: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    max_comp = sol.largestComponentSize(A);
    std::cout << "The largest component size is: " << max_comp << std::endl << std::endl;
    // Test case 7;
    A = {2,3,6,7,4,12,21,39};
    std::cout << "List of vertices: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    max_comp = sol.largestComponentSize(A);
    std::cout << "The largest component size is: " << max_comp << std::endl << std::endl;
    // Compile successful
    return 0;
}
