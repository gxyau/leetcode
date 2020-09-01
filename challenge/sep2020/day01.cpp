// Day 1, Largest Time for Given Digits
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::to_string;
using std::vector;

class Solution {
    private:
        bool valid(string& time) {
            if (time[0] > '2') {
                return false;
            } else if (time[0] == '2' && time[1] > '3') {
                return false;
            } else if (time[2] > '5') {
                return false;
            }
            return true;
        }
    public:
        string largestTimeFromDigits(vector<int>& A) {
            sort(A.begin(),A.end());
            string time = "", new_time;
            do {
                new_time = "";
                for (int a : A) new_time += (a + '0');
                if (valid(new_time) && time.compare(new_time)<0) time = new_time;
            } while ( std::next_permutation(A.begin(),A.end()));
            if (time.size()>0) time.insert(time.begin()+2,':');
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
    // Test case 2;
    digits = {1,2,3,4};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Test case 3;
    digits = {3,3,3,3};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Test case 4;
    digits = {1,7,8,9};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Test case 5;
    digits = {2,5,7,9};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Test case 6;
    digits = {2,7,8,9};
    std::cout << "The digits are: ";
    for (auto d : digits) std::cout << d << " ";
    std::cout << std::endl;
    time = sol.largestTimeFromDigits(digits);
    std::cout << "The time is: (24hrs) " << time << std::endl << std::endl;
    // Compile successful
    return 0;
}
