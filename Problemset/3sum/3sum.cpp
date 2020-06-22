
// @Title: 三数之和 (3Sum)
// @Author: user3919vu
// @Date: 2020-06-04 12:43:05
// @Runtime: 92 ms
// @Memory: 20 MB

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> result;
        int sz = nums.size();
        if(sz < 3)
        {
            return result;
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < sz; i++)
        {
            int num = nums[i];
            if(num > 0) break;
            if(i > 0 && num == nums[i-1]) continue;
            int l = i + 1;
            int r = sz - 1;
            while(l < r)
            {
                int num1 = nums[l];
                int num2 = nums[r];
                int tNum = num + num1 + num2;
                if(tNum > 0)
                {
                    r--;
                }
                else if(tNum < 0)
                {
                    l++;
                }
                else
                {
                    result.push_back({num, num1, num2});

                    while(l < r && nums[l] == nums[l + 1]) l++;
                    while(l < r && nums[r] == nums[r - 1]) r--;

                    l++;
                    r--;
                }
            }
        }
        return result;
    }
};
