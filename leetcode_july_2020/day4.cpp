// Day 4, Ugly Number II'
#include <algorithm>
#include <iostream>
#include <vector>

class SolutionDay4 {
public:
    int nthUglyNumber(int n) {
        int n1 = 0, n2 = 0, n3 = 0;
        std::vector<int> DP;
        DP.push_back(1);
        int i=1;
        while(i<n){
            DP.push_back(std::min({2*DP[n1],3*DP[n2],5*DP[n3]}));
            if(DP[i]==DP[n1]*2) n1++;
            if(DP[i]==DP[n2]*3) n2++;
            if(DP[i]==DP[n3]*5) n3++;
            i++;
        }
        return DP[n-1];
    }
};

int main() {
    SolutionDay4 sol;
    int n, ans;
    std::cout << "Please enter a positive integer, n: ";
    std::cin  >> n;
    ans = sol.nthUglyNumber(n);
    std::cout << "The nth ugliest number is: " << ans << std::endl;
    // Compile successful
    return 0;
}
