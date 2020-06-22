
// @Title: 下一个排列 (Next Permutation)
// @Author: user3919vu
// @Date: 2020-06-04 14:39:46
// @Runtime: 0 ms
// @Memory: 12.4 MB

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int e, f;
        for ( e = nums.size() - 1; e > 0; e--) if (nums[e - 1] < nums[e]) break;
        if (e != 0) {
            for ( f = nums.size() - 1; f > 0; f--) if (nums[f] > nums[e - 1]) break; 
            swap(nums[e - 1], nums[f]);
        }
        reverse(nums.begin() + e, nums.end());
    }
};
