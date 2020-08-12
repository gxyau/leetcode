// Day 12, Pascal Triangle II
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay12 {
    private:
        int choose(int n, int k, int num, int denom) {
            if (k == 0) return (int) num/denom;
            return choose(n-1,k-1,num*n, denom*k);
        }
    public:
        vector<int> getRow(int k) {
            vector<int> pascal;
            for (int i = 0; i < k+1; ++i) {
                pascal.push_back(choose(k,i,1,1));
            }
            return pascal;
        }
};

int main() {
    SolutionDay12 sol;
    int k;
    vector<int> pascal;
    std::cout << "Please enter a number between 0 and 33 (inclusive): ";
    std::cin  >> k;
    pascal = sol.getRow(k);
    std::cout << "Row " << k << " looks like: ";
    for (int x : pascal) std::cout << x << " ";
    std::cout << std::endl;
    // Compile successfully
    return 0;
}
