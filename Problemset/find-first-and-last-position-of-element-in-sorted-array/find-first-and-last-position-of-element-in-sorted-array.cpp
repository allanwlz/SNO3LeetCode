
// @Title: 在排序数组中查找元素的第一个和最后一个位置 (Find First and Last Position of Element in Sorted Array)
// @Author: user3919vu
// @Date: 2020-06-05 08:56:07
// @Runtime: 8 ms
// @Memory: 8.2 MB

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(!n || target < nums[0] || target > nums[n - 1]) return {-1, -1};
        int l = 0, r = n, m, a, b;
        while(l < r){
            m = (l + r) / 2;
            if (nums[m] < target) l = m + 1;
            else r = m;  
        }
        a = l;
        if (nums[a] != target) return {-1, -1};
        r = n;
        while(l < r){
            m = (l + r) / 2;
            if (nums[m] <= target) l = m + 1;
            else r = m;  
        }
        b = l - 1;
        return {a, b};
    }
};
