// Day 20, Reorder List
#include <iostream>
#include <stack>
using std::stack;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        void reorderList(ListNode* head) {
            if (!head || !head->next) return; // List of length at most one
            // Put the node pointers into a vector
            stack<ListNode*> stk;
            ListNode *ptr = head, *tmp;
            int count     = 0, n = 0;
            // Put everything into stack
            while (ptr) {
                stk.push(ptr);
                ptr = ptr->next;
                ++count;
            }
            ptr = head; // Return to head
            // Reordering
            while (n++ <= count/2) {
                tmp = stk.top();
                stk.pop();
                tmp->next = ptr->next;
                ptr->next = tmp;
                ptr       = tmp->next;
            }
            ptr->next = nullptr;
        }
};

int main() {
    // Compile successful
    return 0;
}
