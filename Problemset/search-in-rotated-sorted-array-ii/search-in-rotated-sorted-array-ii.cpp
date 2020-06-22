
// @Title: 搜索旋转排序数组 II (Search in Rotated Sorted Array II)
// @Author: user3919vu
// @Date: 2020-06-08 17:28:55
// @Runtime: 8 ms
// @Memory: 6.5 MB

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (nums.empty()) return false;
        int l = 0, r = nums.size(), m;
        while(l < r){
            m = (l + r) / 2;
            if (nums[m] == target) return true; 
            if (nums[m] > nums[l]){
                if (target >= nums[l] && target < nums[m]) r = m;
                else l = m + 1;
            } else if (nums[m] < nums[r - 1]){ 
                if (target <= nums[r - 1] && target > nums[m]) l = m + 1;
                else r = m; 
            } else {
                if (nums[l] == nums[m]) l++;
                if (nums[r - 1] == nums[m]) r--;
            }
        }
        return false;
    }
};
