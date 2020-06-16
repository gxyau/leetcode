// Day 16, Validate IP Address
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class SolutionDay16 {
public:
    string validIPAddress(string IP) {
        return "Checkity check";
    }
};

int main() {
    SolutionDay16 sol;
    string which_IP;
    cout << "Please enter an IP address: ";
    cin  >> which_IP;
    cout << "Is the address IPv4 or IPv6: " << sol.validIPAddress(which_IP) << endl;
    return 0;
}
