#include "Solution.h"

int Solution::lengthOfLongestSubstring(std::string s) {
    std::unordered_map<char, int> unMap;
    int size = s.length();
    int len{};

    for(int i{}, j{}; i < size; ++i) {
        auto elem = unMap.find(s[i]);
        if (elem != unMap.end()) {
            j = elem->second > j ? elem->second : j;
        }
        len = i - j + 1 > len ? i - j + 1 : len;
        unMap[s[i]] = i + 1;
    }
    return len;
}
