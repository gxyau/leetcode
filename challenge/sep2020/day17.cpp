// Day 17, Robot Bounded In Circle
#include <iostream>
#include <string>
using std::string;

class Solution {
    private:
        // Initial position and initial direction
        std::pair<int, int> position = {0,0}, direction = {0,1};
        // Rotate to the left
        void rotate_left() {
            int x = -direction.second, y = direction.first;
            direction = {x,y};
            return;
        }
        // Rotate to the right, inverse of rotate_left
        void rotate_right() {
            int x = direction.second, y = -direction.first;
            direction = {x,y};
            return;
        }
    public:
        bool isRobotBounded(string instructions) {
            string::iterator it = instructions.begin();
            const std::pair<int, int> init_posn = {0,0}, init_dir = {0,1};
            while (it != instructions.end()) {
                if (*it == 'G') {
                    position.first  += direction.first;
                    position.second += direction.second;
                    std::cout << "New position: " << position.first << ", " << position.second << std::endl;
                } else if (*it == 'L') {
                    rotate_left();
                } else {
                    rotate_right();
                }
                ++it;
            }
            if ( position != init_posn && direction == init_dir) return false;
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
