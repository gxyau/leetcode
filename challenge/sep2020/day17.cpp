// Day 17, Robot Bounded In Circle
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class Solution {
    public:
        bool isRobotBounded(string instructions) {
            return true;
        }
};

int main() {
    Solution sol;
    string instructions, flag;
    // Mini program
    std::cout << "Please enter instructions (no space): ";
    std::cin  >> instructions;
    flag = sol.isRobotBounded(instructions) ? "Y" : "N";
    std::cout << "Is the robot bounded? " << flag << std::endl;
    // Compile successful
    return 0;
}
