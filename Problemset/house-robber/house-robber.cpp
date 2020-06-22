
// @Title: 打家劫舍 (House Robber)
// @Author: user3919vu
// @Date: 2020-04-02 00:46:44
// @Runtime: 0 ms
// @Memory: 7.9 MB

class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if (size == 0)
            return 0;
        else if (size == 1)
            return nums[0];
        int money_list[size];
        money_list[0] = nums[0];
        money_list[1] = max(nums[0], nums[1]);
        for (int i = 2; i < size; ++i) {
            money_list[i] = max(money_list[i - 2] + nums[i], money_list[i - 1]);
        }
        return money_list[size - 1];
    }
};
