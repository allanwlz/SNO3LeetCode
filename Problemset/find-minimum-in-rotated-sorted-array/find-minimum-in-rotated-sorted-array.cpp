
// @Title: 寻找旋转排序数组中的最小值 (Find Minimum in Rotated Sorted Array)
// @Author: user3919vu
// @Date: 2020-06-10 16:15:51
// @Runtime: 8 ms
// @Memory: 10.1 MB

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, m;
        while(l < r){
            m = l + ((r - l) >> 1);
            if (nums[r] < nums[m]) l = m + 1;
            else r = m;
        }
        return nums[l];
    }
};
