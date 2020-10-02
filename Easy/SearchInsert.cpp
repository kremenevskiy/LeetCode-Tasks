#include "Solution.h"

int Solution::searchInsert(std::vector<int> &nums, int target) {
    int right = nums.size();
    int left = 0;
    while (right - left >= 1) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target) {
            left = mid + 1;
            continue;
        }
        if (nums[mid] > target) {
            right = mid;
            continue;
        }
        else {
            return mid;
        }
    }
    return right;
}