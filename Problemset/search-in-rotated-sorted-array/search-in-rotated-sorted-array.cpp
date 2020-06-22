
// @Title: 搜索旋转排序数组 (Search in Rotated Sorted Array)
// @Author: user3919vu
// @Date: 2020-06-04 18:03:08
// @Runtime: 0 ms
// @Memory: 6.6 MB

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (!n) return -1;
        int l = 0, r = n - 1, m;
        while(l <= r){
            if (l == r) return (target == nums[l] ? l : -1);
            m = (l + r) / 2;
            if (nums[m] == target) return m;
            if (nums[l] <= nums[m]){
                if (target < nums[m] && target >= nums[l]) r = m - 1;
                else l = m + 1;
            } else{
                if (target > nums[m] && target <= nums[r]) l = m + 1;
                else r = m - 1;
            }  
        } 
        return -1;
    }
};
