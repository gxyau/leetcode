// Day 2, Delete Node in a Linked List
#include<iostream>
#include<vector>
using std::vector;

class SolutionDay2 {
public:
    void deleteNode(ListNode* node) {
        if (node->next == nullptr) {
            node->next = nullptr;
        } else {
            ListNode *tmp = node->next;
            node->val = tmp->val;
            node->next = tmp->next;
            tmp = nullptr;
            delete tmp;
        }
    }
};
