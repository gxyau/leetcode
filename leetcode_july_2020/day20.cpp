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
        return head;
    }
};

int main() {
    // Compile successful
    return 0;
}
