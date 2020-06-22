
// @Title: 最接近的三数之和 (3Sum Closest)
// @Author: user3919vu
// @Date: 2020-06-04 13:13:30
// @Runtime: 24 ms
// @Memory: 10.1 MB

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 100000;
        for(int i = 0; i < nums.size() - 2; i++){
            int b = i + 1, e = nums.size() - 1;
            while(b < e){
                int sum = nums[i] + nums[b] + nums[e];
                if (sum == target) return target;
                if (abs(sum - target) < abs(ans - target)) ans = sum;
                sum > target ? e-- : b++;
            }
        }
        return ans;
    }
};
