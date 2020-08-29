// Day 29, Pancake Sorting
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        vector<int> pancakeSort(vector<int>& A) {
            // Base case, one pacake
            if (A.size() == 1) return {};
            vector<int> flips;
            return flips;
        }
};

int main() {
    Solution sol;
    vector<int> A, flips;
    // Test case 1;
    A = {1};
    std::cout << "Pancake initial configuration: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    flips = sol.pancakeSort(A);
    std::cout << "Flips: ";
    for (int flip : flips) std::cout << flip << " ";
    std::cout << std::endl;
    // Test case 2;
    A = {1,2,3};
    std::cout << "Pancake initial configuration: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    flips = sol.pancakeSort(A);
    std::cout << "Flips: ";
    for (int flip : flips) std::cout << flip << " ";
    std::cout << std::endl;
    // Test case 3;
    A = {2,1,3};
    std::cout << "Pancake initial configuration: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    flips = sol.pancakeSort(A);
    std::cout << "Flips: ";
    for (int flip : flips) std::cout << flip << " ";
    std::cout << std::endl;
    // Test case 4;
    A = {2,3,1};
    std::cout << "Pancake initial configuration: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    flips = sol.pancakeSort(A);
    std::cout << "Flips: ";
    for (int flip : flips) std::cout << flip << " ";
    std::cout << std::endl;
    // Test case 5;
    A = {3,2,4,1};
    std::cout << "Pancake initial configuration: ";
    for (int a : A) std::cout << a << " ";
    std::cout << std::endl;
    flips = sol.pancakeSort(A);
    std::cout << "Flips: ";
    for (int flip : flips) std::cout << flip << " ";
    std::cout << std::endl;
    // Compiles successful
    return 0;
}
