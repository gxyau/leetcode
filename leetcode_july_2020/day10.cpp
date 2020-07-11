// Day 10, Flatten a Multilevel Doubly Linked List
#include <iostream>
#include <vector>
using std::vector;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class SolutionDay10 {
public:
    Node* flatten(Node* head) {
        if (!head) return head;
        std::stack<Node*> s;
        Node* ptr = head;
        while (ptr || !s.empty()) {
            while(!(ptr->child) && ptr->next) ptr = ptr->next;
            if (ptr->child) {
                s.push(ptr->next);
                ptr->next       = ptr->child;
                ptr->child      = nullptr;
                ptr->next->prev = ptr;
            } else {
                if (!s.empty()) {
                    ptr->next     = s.top();
                    s.top()->prev = ptr;
                    s.pop();
                }
            }
            ptr = ptr->next;
        }
        return head;
    }
};
