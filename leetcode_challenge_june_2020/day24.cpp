// Day 24, Unique Binary Search Tree
#include <iostream>

class SolutionDay24 {
private:
    double round(double d) {
      return floor(d + 0.5);
    }
public:
    int numTrees(int n) {
        double catalan = 1, m = n, k = n;
        while (k>1) {
            catalan *= (m+k)/k;
            --k;
        }
        return (int) round(catalan);
    }
};

int main() {
    SolutionDay24 sol;
    int catalan, n;
    std::cout << "Please enter a positive integer: ";
    std::cin  >> n;
    catalan = sol.numTrees(n);
    std::cout << "Number of unique BST on " << n << " vertices is: " << catalan << std::endl;
}
