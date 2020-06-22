
// @Title: 两数之和 (Two Sum)
// @Author: user3919vu
// @Date: 2020-06-03 10:26:53
// @Runtime: 12 ms
// @Memory: 8.1 MB

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            if (map.count(target - nums[i]) == 1) return {map[target - nums[i]], i};
            else map[nums[i]] = i;
        } 
        return {};
    }
};


