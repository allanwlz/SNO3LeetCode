
// @Title: 汇总区间 (Summary Ranges)
// @Author: user3919vu
// @Date: 2020-06-10 23:29:49
// @Runtime: 0 ms
// @Memory: 7.1 MB

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int i = 0, j = 0;
        while(j < nums.size()) {
            if (j == nums.size() - 1 || nums[j + 1] != nums[j] + 1) {
                if (i != j) ans.emplace_back(to_string(nums[i]) + "->" + to_string(nums[j]));
                else ans.emplace_back(to_string(nums[j]));
                i = ++j;
            } else j++;
        }
        return ans;
    }
};
