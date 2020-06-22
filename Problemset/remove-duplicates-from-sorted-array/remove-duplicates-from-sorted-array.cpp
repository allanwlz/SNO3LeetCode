
// @Title: 删除排序数组中的重复项 (Remove Duplicates from Sorted Array)
// @Author: user3919vu
// @Date: 2020-06-03 10:49:50
// @Runtime: 16 ms
// @Memory: 7.7 MB

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int count = 1;
        for (int a = 0, b = 1; b < nums.size(); b++){
            if (nums[b] != nums[a]){
                a = b;
                nums[count] = nums[b];
                count++;   
            }
        }
        return count;
    }
};
