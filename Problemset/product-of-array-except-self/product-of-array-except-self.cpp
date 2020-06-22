
// @Title: 除自身以外数组的乘积 (Product of Array Except Self)
// @Author: user3919vu
// @Date: 2020-06-13 05:43:34
// @Runtime: 16 ms
// @Memory: 15.3 MB

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int acc1 = 1, acc2 = 1, n = nums.size() - 1;
        vector<int> ans(n + 1, 1);
        for(auto i = 0; i < n; i++){
            acc1 *= nums[i];
            ans[i + 1] *= acc1;
            acc2 *= nums[n - i];
            ans[n - i - 1] *= acc2;
        }
        return ans;
    }
};
