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
        vector<int> perm = gray_code(n);
        while (perm[0] != start) {
            std::rotate(perm.begin(), perm.begin()+1, perm.end());
        }
        return perm;
    }
private:
   vector<int> gray_code(int n) {
       vector<int> gray;
       // Evaluate 1<<n first, then i < (1<<n)
       for(int i =0; i<1<<n; i++){
         gray.push_back(i^(i>>1));
       }
       return gray;
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
