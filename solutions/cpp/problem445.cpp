// Problem 445, Add Two Numbers II
#include<iostream>
using std::cout;
using std::endl;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution
class Solution445 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Stacking the list nodes to access smallest to
        // largest digit.
        stack<int> s1, s2;
        while(l1) {s1.push(l1->val); l1 = l1->next;};
        while(l2) {s2.push(l2->val); l2 = l2->next;};
        
        // Adding the numbers
        ListNode *root = nullptr, *node = nullptr;
        int carry_over = 0;
        while (!s1.empty() || !s2.empty() || carry_over) {
            int current_sum = carry_over;
            // If null then we don't add anything to this digit
            if (!s1.empty()) {
                current_sum += s1.top();
                s1.pop();
            }
            // If null then we don't add anything to this digit
            if (!s2.empty()) {
                current_sum += s2.top();
                s2.pop();
            }
            // Check if it needs carry over
            carry_over = current_sum/10;
            node       = new ListNode(current_sum%10);
            node->next = root;
            swap(node, root);
        }
        return root;
    }
};
