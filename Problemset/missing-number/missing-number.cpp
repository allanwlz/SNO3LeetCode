
// @Title: 缺失数字 (Missing Number)
// @Author: user3919vu
// @Date: 2020-06-03 17:44:05
// @Runtime: 88 ms
// @Memory: 24.5 MB

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans;
        for(int n : nums) mp[n] ++;
        for(int i = 0; i <= nums.size(); i++){
            if(mp[i] == 0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};

