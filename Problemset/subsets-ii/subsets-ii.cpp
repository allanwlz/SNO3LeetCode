
// @Title: 子集 II (Subsets II)
// @Author: user3919vu
// @Date: 2020-06-08 17:45:05
// @Runtime: 0 ms
// @Memory: 7 MB

class Solution {
public:
    void DFS(vector<int>& nums, vector<int>& path, vector<vector<int>>& ans, int index){
        ans.emplace_back(path);
        if (index == nums.size()) return;
        for (auto i = index; i < nums.size(); i++){
            if (i != index && nums[i] == nums[i - 1]) continue;
            path.emplace_back(nums[i]);
            DFS(nums, path, ans, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> path;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        DFS(nums, path, ans, 0);
        return ans;
    }
};
