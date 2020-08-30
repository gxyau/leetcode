// Day 30, Largest Component Size by Common Factor
#include <iostring>
#include <numeric>
#include <vector>
using std::gcd;
using std::vector;

class Solution {
    public:
        int largestComponentSize(vector<int>& A) {
            return 0;
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
