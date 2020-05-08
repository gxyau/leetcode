#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

class Solution {
public:
    float gradient(vector<int> coord1, vector<int> coord2){
        float numerator   = coord2[1] - coord1[1];
        float denominator = coord2[0] - coord1[0];
        return numerator/denominator;
    }
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() == 2) return true; // Single line segment    
            
        float initial_gradient = gradient(coordinates[0], coordinates[1]);
        for(int i = 1; i < coordinates.size() - 1; ++i) {
            float current_gradient = gradient(coordinates[i], coordinates[i+1]);
            if (current_gradient != initial_gradient) return false;
        }
        return true;
    }
};

int main() {
    // TODO: Implement test
    return 0;
}
