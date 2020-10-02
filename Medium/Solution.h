#ifndef MEDIUM_SOLUTION_H
#define MEDIUM_SOLUTION_H

struct ListNode;

class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif //MEDIUM_SOLUTION_H
