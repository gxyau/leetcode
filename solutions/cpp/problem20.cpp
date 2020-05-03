#include<iostream>
#include<stack>
#include<map>
using std::string;
using std::stack;
using std::map;

class Solution20 {
public:
    map<char, char> dict = { {'(',')'}, {'{','}'}, {'[',']'} };
    
    bool isValid(string s) {
        stack<char> stk;
        int index = 0;
        int n = s.length();
        
        while (index < n) {
            char symbol = s[index];
            if (dict.count(symbol)) {
                stk.push(symbol);
            } else {
                char top_stack = stk.top();
                if (symbol != dict[top_stack]) {
                    return false;
                } else {
                    stk.pop();
                }
            }
            ++index;
        }
        
        return stk.empty();
    }
};

int main() {
    Solution20 Sol;
    Sol.isValid("((");
    Sol.isValid("()");
    Sol.isValid("[()]");
    Sol.isValid("[(])");
}
