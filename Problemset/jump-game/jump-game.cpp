
// @Title: 跳跃游戏 (Jump Game)
// @Author: user3919vu
// @Date: 2020-06-05 10:32:42
// @Runtime: 24 ms
// @Memory: 12.8 MB

class Solution {
public:
    bool canJump(vector<int>& nums) {
        for(int i = 0, far = 0; i < nums.size(); i++){
            if (far >= nums.size() - 1) return true;
            if (i > far) return false;
            far = max(far, i + nums[i]);
        }
        return false;
    }
};
