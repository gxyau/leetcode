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
    /*
     * Reminder: An alternative solution to reassigning vectors without pointers
     * vector<int> v = {1,2,5};
     * v = {3};
     * v = {10};
     * This way we can avoid pointers.
    */
    SolutionDay7 sol;
    // Case 1
    vector<int> *coins = new vector<int>({1,2,5});
    cout << "Current coins: ";
    for (int c : *coins) cout << c << " ";
    cout << endl;
    int comb = sol.change(5,*coins);
    cout << "Number of combinations for this amount: " << comb << endl;
    // Case 2
    coins = new vector<int>({2});
    cout << "Current coins: ";
    for (int c : *coins) cout << c << " ";
    cout << endl;
    comb = sol.change(3,*coins);
    cout << "Number of combinations for this amount: " << comb << endl;
    // Case 3
    coins = new vector<int>({10});
    cout << "Current coins: ";
    for (int c : *coins) cout << c << " ";
    cout << endl;
    comb = sol.change(10,*coins);
    cout << "Number of combinations for this amount: " << comb << endl;
    return 0;
}
