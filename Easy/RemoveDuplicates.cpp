#include "Solution.h"

int Solution::removeDuplicates(std::vector<int> &nums) {
    if (nums.empty())
        return 0;
    int len = 0;
    for (int j = 1; j < nums.size(); ++j) {
        if (nums[j] != nums[len]) {
            ++len;
            nums[len] = nums[j];
        }
    }
    return len + 1;
}
