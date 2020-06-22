
// @Title: 旋转数组 (Rotate Array)
// @Author: user3919vu
// @Date: 2020-06-03 16:40:24
// @Runtime: 8 ms
// @Memory: 9.9 MB

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        std::rotate(nums.begin(), nums.end() - k % nums.size() , nums.end());
    }
};
