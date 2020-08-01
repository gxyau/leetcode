// Dy 18, H-Index II
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay18 {
public:
    int hIndex(vector<int>& citations) {
        // Pointers for binry search
        int n = citations.size(), l = 0, r = n-1, h = 0, m;
        if (n==0) return 0;
        while (l <= r) {
            m = l + (r-l)/2;
            if (citations[m] >= n-m) { 
                h = n-m; // n-m is the number of last h papers
                r = m-1;
            } else {
                l = m+1;
            }
        }
        return h;
    }
};

int main() {
    SolutionDay18 sol;
    vector<int> citations;
    int h_index;
    // Case 1
    citations = {0};
    cout << "Citations: ";
    for (int x : citations) {
        cout << x << " ";
    }
    cout << endl;
    h_index = sol.hIndex(citations);
    cout << "The H-Index for this author is: " << h_index << endl;
    // Case 2
    citations = {1};
    cout << "Citations: ";
    for (int x : citations) {
        cout << x << " ";
    }
    cout << endl;
    h_index = sol.hIndex(citations);
    cout << "The H-Index for this author is: " << h_index << endl;
    // Case 3
    citations = {0,1,3,5,8};
    cout << "Citations: ";
    for (int x : citations) {
        cout << x << " ";
    }
    cout << endl;
    h_index = sol.hIndex(citations);
    cout << "The H-Index for this author is: " << h_index << endl;
    // Case 4
    citations = {0,1,4,5,6};
    cout << "Citations: ";
    for (int x : citations) {
        cout << x << " ";
    }
    cout << endl;
    h_index = sol.hIndex(citations);
    cout << "The H-Index for this author is: " << h_index << endl;
    return 0;
}
