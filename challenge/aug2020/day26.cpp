// Day 26, Fizz Buzz
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class SolutionDay26 {
    public:
        vector<string> fizzBuzz(int n) {
            return {};
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
