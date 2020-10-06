#include "Solution.h"

ListNode* Solution::mergeTwoLists(ListNode *l1, ListNode *l2) {

    if (!l1) {
        return l2;
    }
    if (!l2) {
        return l1;
    }

    if (l1->val < l2->val) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }else {
        l2->next = mergeTwoLists(l1, l2->next);
    }

//     Other Way
/*
    ListNode * res = new ListNode(0, nullptr);
    ListNode * head = res;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            res->next = new ListNode(l1->val);
            res = res->next;
            l1 = l1->next;
        }
        else {
            res->next = new ListNode(l2->val);
            res = res->next;
            l2 = l2->next;
        }
    }

    while (l1) {
        res->next = new ListNode(l1->val);
        res = res->next;
        l1 = l1->next;
    }

    while (l2) {
        res->next = new ListNode(l2->val);
        res = res->next;
        l2 = l2->next;
    }
    return head->next;
*/
}