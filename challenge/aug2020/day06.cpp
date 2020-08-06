// Day 6, Find All Duplicates in an Array
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay6 {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
            return {};
        }
};

int main() {
    SolutionDay6 sol;
    vector<int> nums, duplicates;
    // Test case 1
    nums = {};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << "\n";
    duplicates = sol.findDuplicates(nums);
    std::cout << "The duplicates are: ";
    for (int x : duplicates) std::cout << x << " ";
    std::cout << "\n";
    // Test case 2
    nums = {1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << "\n";
    duplicates = sol.findDuplicates(nums);
    std::cout << "The duplicates are: ";
    for (int x : duplicates) std::cout << x << " ";
    std::cout << "\n";
    // Test case 1
    nums = {1,1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << "\n";
    duplicates = sol.findDuplicates(nums);
    std::cout << "The duplicates are: ";
    for (int x : duplicates) std::cout << x << " ";
    std::cout << "\n";
    // Test case 1
    nums = {4,3,2,7,8,2,3,1};
    std::cout << "The vector is: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << "\n";
    duplicates = sol.findDuplicates(nums);
    std::cout << "The duplicates are: ";
    for (int x : duplicates) std::cout << x << " ";
    std::cout << "\n";
    // Compile successful
    return 0;
}
