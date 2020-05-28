#include<iostream>
#include<limits>
#include<vector>
using std::vector;
using std::max;

class SolutionDay15 {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int total = 0; // Sum of arrays
        int psum  = 0; // positive sum    
        int nsum  = 0; // negative sum    
        int current_max = std::numeric_limits<int>::min();    
        int current_min = std::numeric_limits<int>::min();     
        for(auto it = A.begin(); it != A.end(); ++it){
            total += *it;
            psum  += *it;
            nsum  -= *it;
            current_max = max(current_max, psum);
            current_min = max(current_min, nsum);
            if (psum < 0) psum = 0;
            if (nsum < 0) nsum = 0;
        }    
        return total + current_min != 0 ? max(current_max, total + current_min) : current_max; 
    }
};

int main() {
    SolutionDay15 s;
    vector<int> vec1 = {1,-2,3,-2};
    vector<int> vec2 = {-2,-3,-1};
    vector<int> vec3 = {9,-4,-7,9};
    vector<int> vec4 = {-9,4,7,-9};
    std::cout << s.maxSubarraySumCircular(vec1) << std::endl;
    std::cout << s.maxSubarraySumCircular(vec2) << std::endl;
    std::cout << s.maxSubarraySumCircular(vec3) << std::endl;
    std::cout << s.maxSubarraySumCircular(vec4) << std::endl;
    return 0;
}
