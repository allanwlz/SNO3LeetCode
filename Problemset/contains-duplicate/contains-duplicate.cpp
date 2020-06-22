
// @Title: 存在重复元素 (Contains Duplicate)
// @Author: user3919vu
// @Date: 2020-06-03 16:58:50
// @Runtime: 72 ms
// @Memory: 19.8 MB

#include <unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        return set.size() != nums.size();
    }
};
