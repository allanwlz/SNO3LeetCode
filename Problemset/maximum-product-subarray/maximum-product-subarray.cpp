
// @Title: 乘积最大子数组 (Maximum Product Subarray)
// @Author: user3919vu
// @Date: 2020-06-10 14:55:02
// @Runtime: 8 ms
// @Memory: 11.5 MB

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0], temp_max = nums[0], temp_min = nums[0], temp;
        for(auto i = 1; i < nums.size(); i++){
            temp = max(max(nums[i], nums[i] * temp_max), nums[i] * temp_min);
            temp_min = min(min(nums[i], nums[i] * temp_max), nums[i] * temp_min);
            temp_max = temp;
            ans = max(temp_max, ans);
        }
        return ans;
    }
};
