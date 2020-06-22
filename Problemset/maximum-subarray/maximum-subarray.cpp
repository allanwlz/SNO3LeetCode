
// @Title: 最大子序和 (Maximum Subarray)
// @Author: user3919vu
// @Date: 2020-04-01 23:18:46
// @Runtime: 4 ms
// @Memory: 6.9 MB

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        for (int i = 0, accum = 0; i < nums.size(); i++){
            accum += nums[i];
            if (accum > max) max = accum;
            if (accum < 0) accum = 0; // if accum < 0 then the maximum sum tail of i+1 is i+1 itself
        }
        return max;
    }
};
