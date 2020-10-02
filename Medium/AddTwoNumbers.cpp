#include "Solution.h"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    auto node = new ListNode(0);
    auto head = node;
    int carry(0);
    while (l1 && l2) {
        node->next = new ListNode(0);
        node = node->next;
        node->val = (l1->val + l2->val + carry) % 10;
        carry = (l1->val + l2->val + carry) / 10;
        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1) {
        node->next = new ListNode(0);
        node = node->next;
        node->val = (l1->val + carry) % 10;
        carry = (l1->val + carry) / 10;
        l1 = l1->next;
    }

    while (l2) {
        node->next = new ListNode(0);
        node = node->next;
        node->val = (l2->val + carry) % 10;
        carry = (l2->val + carry) / 10;
        l2 = l2->next;
    }

    if (carry) {
        node->next = new ListNode();
        node = node->next;
        node->val = carry;
    }
    return head->next;
}