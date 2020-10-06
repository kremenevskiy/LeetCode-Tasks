#include "Solution.h"

void Solution::merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    int i{}, j{}, k{};
    std::vector<int> nums1_temp(nums1);
    while (i < m && j < n) {
        if (nums1_temp[i] < nums2[j]){
            nums1[k] = nums1_temp[i];
            ++k;
            ++i;
        }
        else {
            nums1[k] = nums2[j];
            ++k;
            ++j;
        }
    }
    while (i < m) {
        nums1[k] = nums1_temp[i];
        ++k;
        ++i;
    }
    while (j < n) {
        nums1[k] = nums2[j];
        ++k;
        ++j;
    }
}