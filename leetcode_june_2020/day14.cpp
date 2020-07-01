// Day 14, Cheapest Flights with K Stops
#include<iostream>
#include<limits>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

class SolutionDay14 {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        constexpr int maximum = std::numeric_limits<int>::max();
        vector<int> costs(n, maximum);
        costs[src] = 0;
        
        /* We only need to keep track of the costs. If there is no way to go
         * from src to dst in K rounds the cost remains max.
         */
        for (int i = 0; i <= K; ++i) {
            // Needs dummy vector to be able to update prices simultaneously
            vector<int> temp = costs;
            for (auto f : flights) {
                int temp_price = costs[f[0]] == maximum ? maximum : costs[f[0]] + f[2];
                temp[f[1]]     = std::min(temp[f[1]], temp_price);
            }
            swap(costs,temp);
        }
        
        return costs[dst] < maximum ? costs[dst] : -1;
    }
};

int main() {
    SolutionDay14 sol;
    int n = 3, src = 0, dst = 2 , K = 1;
    vector<vector<int>> flights = {{0,1,100}, {1,2,100}, {0,2,500}};
    /*
    for (auto x : flights) {
        for (auto num : x) {
            cout << num << " ";
        }
        cout << endl;
    }
    */
    cout << sol.findCheapestPrice(n,flights,src,dst,K) << endl;
    return 0;
}
