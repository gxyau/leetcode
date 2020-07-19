// Day 17, Top K Frequent Elements
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using std::map;
using std::pair;
using std::vector;

class SolutionDay17 {
private:
    static bool cmp(pair<int, int> &a, pair<int,int> &b) {
        return (a.second > b.second);
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Insert elements
        map<int,int> M;
        int len = 0;
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (M.count(*it)) {
                ++M[*it];
            } else {
                M[*it] = 1;
            }
        }
        // Sort elements
        vector<pair<int,int>> elms;
        for (auto it = M.begin(); it != M.end(); ++it) {
            elms.push_back(std::make_pair(it->first, it->second));
        }
        std::sort(elms.begin(), elms.end(), cmp);
        // Get top k elements
        vector<int> top_k;
        const int K = k;
        while (k--) {
            top_k.push_back(elms[K - k].first);
        }
        return top_k;
    }
};

int main() {
    SolutionDay17 sol;
    vector<int> nums, ans;
    int k;
    // Test case 1
    nums = {1,1,1,2,2,3};
    k    = 2;
    ans  = sol.topKFrequent(nums,k);
    std::cout << "The top K element(s) are: ";
    for (auto x : ans) std::cout << x << "  ";
    std::cout << "\n\n";
    // Test case 2
    nums = {1,1};
    k    = 1;
    ans  = sol.topKFrequent(nums,k);
    std::cout << "The top K element(s) are: ";
    for (auto x : ans) std::cout << x << "  ";
    std::cout << "\n\n";
    // Test case 3
    nums = {1};
    k    = 1;
    ans  = sol.topKFrequent(nums,k);
    std::cout << "The top K element(s) are: ";
    for (auto x : ans) std::cout << x << "  ";
    std::cout << "\n\n";
    // Test case 4
    nums = {100,200,200,100,100,10};
    k    = 2;
    ans  = sol.topKFrequent(nums,k);
    std::cout << "The top K element(s) are: ";
    for (auto x : ans) std::cout << x << "  ";
    std::cout << "\n\n";
    // Test case 5
    nums = {100,200,200,100,100,10,30,200,100,10,200,200,50,50,50,200};
    k    = 4;
    ans  = sol.topKFrequent(nums,k);
    std::cout << "The top K element(s) are: ";
    for (auto x : ans) std::cout << x << "  ";
    std::cout << "\n\n";
    // Compile successful
    return 0;
}
