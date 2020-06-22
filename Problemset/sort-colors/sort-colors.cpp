
// @Title: 颜色分类 (Sort Colors)
// @Author: user3919vu
// @Date: 2020-06-08 08:32:43
// @Runtime: 4 ms
// @Memory: 8.6 MB

class Solution {
public:
    void sortColors(vector<int>& nums) {
        if (nums.empty()) return;
        int i = 0, j = -1, k = nums.size();
        while (i < k){
            if (i == j) i++;
            else if (nums[i] == 0) swap(nums[i], nums[++j]);
            else if (nums[i] == 2) swap(nums[i], nums[--k]);
            else i++;
        }
    }
};
