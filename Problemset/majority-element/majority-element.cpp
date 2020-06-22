
// @Title: 多数元素 (Majority Element)
// @Author: user3919vu
// @Date: 2020-06-03 15:10:17
// @Runtime: 16 ms
// @Memory: 8.7 MB

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, flag = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == flag) count++;
            else if (--count == 0) flag = nums[i + 1];
        }
        return flag;
    }
};
