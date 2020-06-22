
// @Title: 存在重复元素 II (Contains Duplicate II)
// @Author: user3919vu
// @Date: 2020-06-03 17:28:33
// @Runtime: 48 ms
// @Memory: 15.4 MB

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size() < 2) return false;
        k = min(k + 1, int(nums.size()));
        int i = 0;
        unordered_set<int> set(nums.begin(), nums.begin() + k);
        while(true){
            if (set.size() != k) return true;
            if ((i + k) == nums.size()) return false;
            else {
                set.erase(nums[i]);
                set.emplace(nums[i + k]);
            }
            i++;
        }
    }
};
