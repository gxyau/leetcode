// Problem 1238, Circular Permutation in Binary Representation
#include<algorithm>
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Solution1238 {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> perm;
        int         index;
        // Get the first index to start
        for(index =0 ; index<1<<n ; index++){
            if((index^(index>>1))== start) break;
        }
        for(int i = index; i<((1<<n)+index); ++i){
            int j = i%(1<<n);
            perm.push_back(j^(j>>1));
        }
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
