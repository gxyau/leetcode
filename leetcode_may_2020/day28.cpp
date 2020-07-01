// Day 28, counting bits
#include<iostream>
#include<vector>
using std::vector;
class SolutionDay28 {
public:
    vector<int> countBits(int num) {
        vector<int> result(num+1, {0});
        int current_bit;
        int tmp;
        for (int i = 0; i <= num; ++i) {
            tmp = i;
            while (tmp) {
                current_bit = tmp & 1;
                tmp >>= 1;
                if (current_bit) ++result[i];
            }
            std::cout << result[i] << " ";
        }
        return result;
    }
};

int main() {
    int n;
    SolutionDay28 sol;
    std::cout << "Please enter a positive integer: ";
    std::cin  >> n;
    std::cout << "Bit count from 0 to " << n << " is: " << std::endl;
    sol.countBits(n);
    return 0;
}
