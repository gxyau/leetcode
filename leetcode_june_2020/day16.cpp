// Day 16, Validate IP Address
#include<iostream>
#include<string>
#include<regex>
using std::cin;
using std::cout;
using std::endl;
using std::regex;
using std::string;

class SolutionDay16 {
public:
    string validIPAddress(string& IP) {
        int posn = IP.find_first_of(".:");
        if (posn == string::npos) return "Neither";
        if (IP[posn] == '.') {
            IP.push_back('.');
            if (isValidIPV4(IP)) return "IPv4";
        }
        else {
            IP.push_back(':');
            if (isValidIPV6(IP)) return "IPv6";
        }
        return "Neither";
    }

    bool isValidIPV4(const string& IP) {
        static regex expr("^(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\.){4}$");
        return regex_match(IP, expr);
    }

    bool isValidIPV6(const string& IP) {
        static regex expr("^(([0-9a-fA-F]{1,4}):){8}$");
        return regex_match(IP, expr);
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
