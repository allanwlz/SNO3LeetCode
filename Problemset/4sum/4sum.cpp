
// @Title: 四数之和 (4Sum)
// @Author: user3919vu
// @Date: 2020-06-04 14:07:12
// @Runtime: 72 ms
// @Memory: 7.3 MB

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) return {};
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int a = 0 ; a < nums.size() - 3; a++){
            if(a > 0 && nums[a] == nums[a - 1]) continue;
            for (int b = a + 1; b < nums.size() - 2; b++){
                if(b > a + 1 && nums[b] == nums[b - 1]) continue;
                int c = b + 1, d = nums.size() - 1;
                while(c < d){
                    int sum = nums[a] + nums[b] + nums[c] + nums[d];
                    if (sum > target) d--;
                    else if (sum < target) c++;
                    else{
                        ans.push_back({nums[a], nums[b], nums[c], nums[d]});
                        if (nums[c] == nums[d]) break;
                        while (nums[c + 1] == nums[c]) c++;
                        c++;
                        while (nums[d - 1] == nums[d]) d--;
                        d--;
                    }
                }
            }
        }
        return ans;
    }
};
