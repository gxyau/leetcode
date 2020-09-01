// Day 1, Largest Time for Given Digits
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class Solution {
    public:
        string largestTimeFromDigits(vector<int>& A) {
            string time = "";
            return time;
        }
};

int main() {
    Solution sol;
    string time;
    vector<int> digits;
    // Test case 1;
    digits = {0,0,0,0};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Test case 1;
    digits = {1,1,1,1};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Test case 1;
    digits = {3,3,3,3};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Test case 1;
    digits = {1,2,3,4};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Test case 1;
    digits = {2,5,7,9};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Compile successful
    return 0;
}
