
// @Title: 搜索插入位置 (Search Insert Position)
// @Author: user3919vu
// @Date: 2020-04-06 17:56:15
// @Runtime: 4 ms
// @Memory: 6.6 MB

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int lo = 0, hi = size, mi;
        while (lo < hi){
            mi = (lo + hi) >> 1;
            (nums[mi] < target) ? lo = mi + 1 : hi = mi;
        }
    return lo;
    }
};
