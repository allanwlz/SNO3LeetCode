
// @Title: 移动零 (Move Zeroes)
// @Author: user3919vu
// @Date: 2020-06-03 18:02:49
// @Runtime: 4 ms
// @Memory: 8.9 MB

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() < 2) return;
        int i = 0, j = 0;
        while(j < nums.size()){
            if (nums[j] != 0){
                if (i != j) swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};
