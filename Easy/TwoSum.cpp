#include "Solution.h"

std::vector<int> Solution::twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i) {
        if (mp.find(nums[i]) != mp.end()) {
            return {i, mp.find(nums[i])->second};
        }
        mp[target - nums[i]] = i;
    }
    return {0};
}

