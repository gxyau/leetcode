// Day 17, Distribute Candies to People
#include <vector>
using std::vector;

class Solution {
    public:
        vector<int> distributeCandies(int candies, int num_people) {
            vector<int> distribution(num_people,{0});
            int day = 1;
            while (candies) {
                if (candies >= day) {
                    distribution[(day % num_people)-1] += day;
                    candies -= day;
                } else {
                    distribution[(day % num_people)-1] += candies;
                    candies = 0;
                }
                ++day;
            }
            return distribution;
        }
};

int main() {
    // Compile successful
    return 0;
}
