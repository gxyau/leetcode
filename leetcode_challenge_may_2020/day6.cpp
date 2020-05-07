#include<iostream>
using std::vector;
using std::cout;
using std::endl;

class SolutionDay6 {
public:
    int majorityElement(vector<int>& nums) {
        int counter = 0;
        int majority;
        // Loop through the vector, one pass
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
            if (counter == 0) {
                majority = *it;
                ++counter;
            } else if (*it == majority) {
                ++counter;
            } else {
                --counter;
            }
        }
        return majority;
    }
};

int main() {
    // To be implemented
    return 0;
}
