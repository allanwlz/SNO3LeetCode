
// @Title: 长度最小的子数组 (Minimum Size Subarray Sum)
// @Author: user3919vu
// @Date: 2020-06-10 22:05:06
// @Runtime: 12 ms
// @Memory: 10.3 MB

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if (nums.empty()) return 0;
        int i = -1, j = -1, sum = 0, ans = 0;
        while(true){
            if (sum < s){
                if(++j == nums.size()) break;
                sum += nums[j];
                if (ans) sum -= nums[++i];
            } else {
                if (!ans) ans = j + 1;
                else ans--;
                sum -= nums[++i];
            }
        }
        return ans;
    }
};
