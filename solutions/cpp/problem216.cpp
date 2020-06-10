// Combination Sum III
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Solution216 {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> combinations;
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
