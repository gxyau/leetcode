// Day 6, Plus One
#include <vector>
using std::vector;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        ++digits[digits.size()-1];
        return digits;
    }
};

int main() {
    // Compile successful
    return 0;
}
