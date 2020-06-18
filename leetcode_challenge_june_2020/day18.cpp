// Day 18, H-Index II
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay18 {
public:
    int hIndex(vector<int>& citations) {
        return 0;
    }
};

int main() {
    SolutionDay18 sol;
    vector<int> citations;
    // Case 1
    citations = {0,1,3,5,8};
    for (int x : citations) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The H-Index for this author is: " << sol.hIndex(citations) << endl;
    // Case 2
    citations = {0,1,4,5,6};
    for (int x : citations) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The H-Index for this author is: " << sol.hIndex(citations) << endl;
    return 0;
}
