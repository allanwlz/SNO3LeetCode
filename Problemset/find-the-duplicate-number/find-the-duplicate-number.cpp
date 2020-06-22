
// @Title: 寻找重复数 (Find the Duplicate Number)
// @Author: user3919vu
// @Date: 2020-06-16 10:17:41
// @Runtime: 12 ms
// @Memory: 10.8 MB

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
        if(size<2)
            return -1;
        int slow=0, fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);
        int sup=0;
        while(slow!=sup){
            slow=nums[slow];
            sup=nums[sup];
        }
        return slow;
    }
};
