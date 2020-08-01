// Day 20, Remove Linked List Elements
#include <iostream>

// Definition for singly-linked list.
struct ListNode {
     int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class SolutionDay20 {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Discard head if head has the target value
        while (head && head->val == val) head = head->next;
        if (head == nullptr) return nullptr;
        // Now we are sure that head doesn't have target value or is nullptr
        ListNode *cur = head;
        while (cur->next) {
            if (cur->next->val == val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};

int main() {
    // Compile successful
    return 0;
}
