// Day 18, Numbers With Same Consecutive Differences
#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
        void DFS(int N, int K, string& tmp, vector<int>& res)
        {
            if (tmp.size() == N) {
                res.push_back(std::stoi(tmp));
                return;
            }

            if (tmp.back() + K <= '9') {
                tmp.push_back(tmp.back() + K);
                DFS(N, K, tmp, res);
                tmp.pop_back();
            }

            if (K > 0 && tmp.back() - K >= '0') {
                tmp.push_back(tmp.back() - K);
                DFS(N, K, tmp, res);
                tmp.pop_back();
            }
        }

        vector<int> numsSameConsecDiff(int N, int K) {
            vector<int> res;
            if (N == 1) res.push_back(0);
            string s;
            for(int i = 1; i <= 9; i++) {
                s += '0' + i;
                DFS(N, K, s, res);
                s.pop_back();
            }

            return res;
        }
};

int main() {
    return 0;
}
