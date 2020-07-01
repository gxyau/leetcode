#include<iostream>
#include<vector>
using std::vector;

class SolutionDay10 {
public:
    int findJudge(int N, vector<vector<int>>& trust) {    
        vector<int> degrees(N+1, 0);    
        for (auto it = trust.begin(); it != trust.end(); ++it) { 
            ++degrees[(*it)[1]];    
            --degrees[(*it)[0]];    
        }    
        for (int i = 1; i < N+1; ++i) {    
            if (degrees[i] == N-1) return i;                                                                                                                                                                        
        }    
        return -1;    
    }
};

int main() {
    // TODO: Implement the interface
    return 0;
}
