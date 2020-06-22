
// @Title: 两个数组的交集 (Intersection of Two Arrays)
// @Author: user3919vu
// @Date: 2020-04-10 16:22:56
// @Runtime: 12 ms
// @Memory: 10.5 MB

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        using namespace std;
        set<int> numset(nums1.begin(), nums1.end());
        vector<int> ans;
        for(auto i : nums2){
            if (numset.erase(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
