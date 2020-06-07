// Day 7, Coin change 2
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay7 {
public:
    int change(int amount, vector<int>& coins) {
        int count = 0;
        return count;
    }
};

int main() {
    SolutionDay7 sol;
    vector<int> coins1({1,2,5});
    int comb1 = sol.change(5,coins1);
    cout << "Number of combinations for this amount: " << comb1 << endl;
    return 0;
}
