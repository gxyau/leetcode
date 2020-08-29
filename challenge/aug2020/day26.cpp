// Day 26, Fizz Buzz
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class SolutionDay26 {
    private:
        string fizz_buzz(int k) {
            string s = "";
            if (k % 3 == 0) s += "Fizz";
            if (k % 5 == 0) s += "Buzz";
            return s.empty() ? std::to_string(k) : s;
        }
    public:
        vector<string> fizzBuzz(int n) {
            vector<string> ans = {};
            for (int i = 1; i <= n; ++i) {
                ans.push_back(fizz_buzz(i));
            }
            return ans;
        }
};

int main() {
    SolutionDay26 sol;
    int n;
    vector<string> vec;
    std::cout << "Please enter an integer: ";
    std::cin  >> n;
    vec = sol.fizzBuzz(n);
    std::cout << "FizzBuzz: ";
    for (string str : vec) std::cout << str << " ";
    std::cout << std::endl;
    // Compile successful
    return 0;
}
