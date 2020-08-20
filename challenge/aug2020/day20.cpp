// Day 20, Reorder List
#include<iostream>

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
            ListNode* l = head, tail = head->next, r = head;
        }
};

int main() {
    // Compile successful
    return 0;
}
