// Day 20, Permutation Sequence
#include<algorithm>
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class SolutionDay20 {
public:
    string getPermutation(int n, int k) {
        string perm = "";
        int m = n;
        while (m) perm += (char) (n-(m--)+1) + '0';
        while (--k) std::next_permutation(perm.begin(), perm.end());
        return perm;
    }
};

int main() {
    SolutionDay20 sol;
    int n,k;
    cout << "Please enter a number, n, from 1~9: ";
    cin  >> n;
    cout << "Please enter a number, k, from 1~n!: ";
    cin  >> k;
    string perm = sol.getPermutation(n,k);
    cout << "The permutation is " << perm << endl;
    return 0;
}
