// Day 24, Unique Binary Search Tree

class SolutionDay24 {
public:
    int numTrees(int n) {
        // Apparently solution is Catalan number, should have thought so
        int catalan = 1, k = n;
        while(k>1) {
            catalan *= (n+k--);
        }
        return catalan;
    }
};

int main() {
    SolutionDay24 sol;
    int catalan, n;
    std::cout << "Please enter a positive integer" << endl;
    std::cin  >> n;
    catalan = sol.numTrees(n);
    std::cout << "Number of unique BST on " << n << " vertices is: " << catalan << std::endl;
}
