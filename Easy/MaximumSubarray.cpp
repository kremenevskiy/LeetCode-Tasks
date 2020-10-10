#include "Solution.h"

int Solution::maxSubArray(std::vector<int> &nums) {
    int size = nums.size();
    int maxSum{nums[0]};
    int sum{nums[0]};
    int j{};

    for(int i = 1; i < size; ++i) {
        if (sum < 0 && nums[i] > 0)
            sum = nums[i];
        else if (nums[i] <= 0 && nums[i] > sum)
            sum = nums[i];
        else
            sum += nums[i];

        if (sum > maxSum) {
            maxSum = sum;
            j = i;
        }
    }
    return maxSum;
}
