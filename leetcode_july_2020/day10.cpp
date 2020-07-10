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
            if (ptr->child) {
                s.push(ptr->next);
                ptr->next       = ptr->child;
                ptr->child      = nullptr;
                ptr->next->prev = ptr;
            } else {
                if (ptr->next) {
                    ptr = ptr->next;
                } else if (!s.empty()) {
                    ptr->next       = s.top();
                    ptr->next->prev = ptr;
                    s.pop();
                } else {
                    ptr = ptr->next;
                }
            }
        }
        return head;
    }
};
