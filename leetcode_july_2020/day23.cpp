// Day 23, Single Number III
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay23 {
    public:
        vector<int> singleNumber(vector<int>& nums) {
            int num1 = 0, num2 = 0, XOR = 0, LSB = 0;
            // Get XOR of num1 and num2
            for (int x : nums) {
                XOR ^= x;
            }
            std::cout << "XOR: " << XOR << std::endl;
            // Get LSB, exactly one of the two numbers will have this bit
            while (!(XOR & (1 << LSB))) ++LSB;
            std::cout << "LSB: " << LSB << std::endl;
            // Get first number, and then second number via xor-ing XOR
            for (int x : nums) {
                if (x & (1 << LSB)) num1 ^= x;
            }
            num2 = XOR ^ num1;
            return {num1, num2};
        }
};

int main() {
    SolutionDay23 sol;
    vector<int> nums, ans;
    // Test case 1
    nums = {1,2};
    ans  = sol.singleNumber(nums);
    std::cout << "The single numbers are: " << std::endl;
    for (int x : ans) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 2
    nums = {1,2,1,3,2,5};
    ans  = sol.singleNumber(nums);
    std::cout << "The single numbers are: " << std::endl;
    for (int x : ans) std::cout << x << " ";
    std::cout << std::endl;
    // Test case 3
    nums = {1193730082,587035181,-814709193,1676831308,-511259610,284593787,-2058511940,1970250135,-814709193,-1435587299,1308886332,-1435587299,1676831308,1403943960,-421534159,-528369977,-2058511940,1636287980,-1874234027,197290672,1976318504,-511259610,1308886332,336663447,1636287980,197290672,1970250135,1976318504,959128864,284593787,-528369977,-1874234027,587035181,-421534159,-786223891,933046536,959112204,336663447,933046536,959112204,1193730082,-786223891};
    ans  = sol.singleNumber(nums);
    std::cout << "The single numbers are: " << std::endl;
    for (int x : ans) std::cout << x << " ";
    std::cout << std::endl;
    // Compile successful
    return 0;
}
