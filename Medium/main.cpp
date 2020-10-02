#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    auto node = solution.addTwoNumbers(new ListNode(9, new ListNode(9, new ListNode(9, nullptr))),
            new ListNode(1, nullptr));

    while (node) {
        std::cout << node->val << ' ';
        node = node->next;
    }
    return 0;
}
