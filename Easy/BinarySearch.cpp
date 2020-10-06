#include "Solution.h"

int Solution::search(std::vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size();
    int mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (nums[mid] > target)
            right = mid;
        else
            left = mid;
    }
    return nums[left] == target ? left : -1;
}