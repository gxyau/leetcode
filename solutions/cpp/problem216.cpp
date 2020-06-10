// Problem 216, Combination Sum III
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Solution216 {
public:
    void getCombinations(int k, int n, int lowerbound,
            vector<int> &current, vector<vector<int>> &combinations) {
        if (n == 0 & current.size() == k) {
            combinations.push_back(current);
            return;
        } else if (n < 0 || current.size() > k) {
            return;
        }

        for (int i = lowerbound; i <= 9; ++i) {
            current.push_back(i);
            getCombinations(k, n-i, i+1, current, combinations);
            current.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> combinations;
        vector<int>         current;
        if (k > 0) {
            getCombinations(k,n,1,current,combinations);
        }
        return combinations;
    }
};

int main() {
    int n,k;
    Solution216 sol;
    cout << "Please insert a positive integer, k: ";
    cin  >> k;
    cout << "Please insert a positive integer, n: ";
    cin  >> n;
    vector<vector<int>> valid_combinations = sol.combinationSum3(k,n);
    cout << "The valid combinations are: ";
    for (auto &vec : valid_combinations) {
        for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
