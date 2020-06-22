
// @Title: 移除元素 (Remove Element)
// @Author: user3919vu
// @Date: 2020-06-03 11:21:35
// @Runtime: 0 ms
// @Memory: 6.6 MB

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j = 0; j != nums.size(); j++) if (nums[j] != val) nums[i++] = nums[j];
        return i;
    }
};
