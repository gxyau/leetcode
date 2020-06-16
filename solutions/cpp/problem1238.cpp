// Problem 1238, Circular Permutation in Binary Representation
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Solution1238 {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> perm = {1,2,3};
        return perm;
    }
};

int main() {
    Solution1238 sol;
    int n, start;
    cout << "Please enter an integer, n: ";
    cin  >> n;
    cout << "Please insert a starting position (integer), start: ";
    cin  >> start;
    // Printing result
    cout << "Output: " << endl;
    for (auto x : sol.circularPermutation(n,start)) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
