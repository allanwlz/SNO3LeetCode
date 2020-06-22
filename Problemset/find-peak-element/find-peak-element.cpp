
// @Title: 寻找峰值 (Find Peak Element)
// @Author: user3919vu
// @Date: 2020-06-10 18:10:03
// @Runtime: 8 ms
// @Memory: 8.7 MB

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, m;
        while(l < r){
            m = l + ((r - l) >> 1);
            if (nums[m] < nums[m + 1]) l = m + 1;
            else r = m;
        }
        return l;
    }
};
