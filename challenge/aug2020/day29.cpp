// Day 29, Pancake Sorting
#include <algorithm>
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    private:
        bool is_sorted(vector<int> &A) {
            vector<int>::iterator it = A.begin()+1;
            while (it != A.end()) {
                if (*it < *(it-1)) return false;
                ++it;
            }
            return true;
        }
    public:
        vector<int> pancakeSort(vector<int>& A) {
            // Base case, one pacake
            if (A.size() == 1) return {};
            // Flip history
            vector<int> flips;
            // Finding max element and its position
            int max_elm = A.size();
            vector<int>::iterator it, jt = A.end();
            while (!is_sorted(A)) {
                if (max_elm != *(jt-1)) {
                    it = A.begin();
                    while (*it != max_elm) ++it;
                    flips.push_back(it - A.begin() +1);
                    std::reverse(A.begin(), it+1);
                    flips.push_back(jt - A.begin());
                    std::reverse(A.begin(), jt);
                }
                --max_elm;
                --jt;
            }
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
