// Day 21, Array sort by parity
#include <algorithm>
#include <iostream>
#include <vector>
using std::algorithm;
using std::vector;

class SolutionDay21 {
    public:
        vector<int> sortArrayByParity(vector<int>& A) {
            return A;
        }
};

int main() {
    SolutionDay21 sol;
    vector<int> A, B;
    // Test case 1
    A = {};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 2
    A = {1};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 3
    A = {2};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 4
    A = {1,2};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 5
    A = {2,1};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 6
    A = {1,3};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 7
    A = {3,1};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 8
    A = {3,1,4,2};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 9
    A = {1,3,4,2};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 10
    A = {4,3,1,2};
    std::cout << "The vector is: ";
    for (int x : A) std::cout << x << " ";
    std::cout << std::endl;
    B = sol.sortArrayByParity(A);
    std::cout << "The sorted vector is: ";
    for (int x : B) std::cout << x << " ";
    std::cout << std::endl;
    // Compile successful
    return 0;
}
