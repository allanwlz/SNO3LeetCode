
// @Title: 子集 (Subsets)
// @Author: user3919vu
// @Date: 2020-06-08 09:29:16
// @Runtime: 0 ms
// @Memory: 7.2 MB

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        if (nums.empty()) return {};
        vector<vector<int>> ans;
        vector<int> path;
        for(auto i = 0; i < pow(2, nums.size()); i++){
            path.clear();
            for(int j = i, k = 0; k < nums.size(); k++){
                if (j % 2 == 1) path.emplace_back(nums.at(k));
                j >>= 1;
            }
            ans.emplace_back(path);
        }
        return ans;
    }
};
