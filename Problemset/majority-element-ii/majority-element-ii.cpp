
// @Title: 求众数 II (Majority Element II)
// @Author: user3919vu
// @Date: 2020-06-11 09:22:21
// @Runtime: 32 ms
// @Memory: 15 MB

class Solution {
public:
    //摩尔投票法的变换
    //其实也是类似。投票法。找到两个候选人，进行选择
    
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int candidate1=0,candidate2=0,cnt1=0,cnt2=0;
        for(int num = 0; num < nums.size();num++)
        {
            //按如下的顺序保证了两个候选人不会一样
            //给候选人投票
            if(nums[num]==candidate1)
                ++cnt1;
            else if(nums[num]==candidate2)
                ++cnt2;
             //cnt=0表示还没有候选人
            else if(cnt1 ==0)
            {
                cnt1=1;
                candidate1=nums[num];
            }
            else if(cnt2 ==0)
                cnt2=1,candidate2=nums[num];
            //不是候选人则减票
            else 
                --cnt1,--cnt2;
        }
        cnt1=cnt2=0;
        for(int num:nums)
        {
            if(num==candidate1)
                ++cnt1;
            else if(num==candidate2)
                ++cnt2;
        }
        vector<int> ans;
        if(cnt1>n/3)
            ans.push_back(candidate1);
        if(cnt2>n/3)
            ans.push_back(candidate2);
        return ans;
    }
};
