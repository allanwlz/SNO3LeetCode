
// @Title: 删除排序数组中的重复项 II (Remove Duplicates from Sorted Array II)
// @Author: user3919vu
// @Date: 2020-06-08 12:26:02
// @Runtime: 8 ms
// @Memory: 6.6 MB

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return false;
        for(auto iter = nums.begin(); iter != nums.end(); ){
            int k = 1;
            auto it = iter + 1;
            for ( ; it != nums.end(); it++) {
                if (*it != *iter) break;
                k++;
            }
            if (k > 2) iter = nums.erase(iter + 2, it);
            else iter = it;
        }
        return nums.size();
    }
};
