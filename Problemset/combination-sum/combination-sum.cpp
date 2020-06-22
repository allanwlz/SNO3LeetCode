
// @Title: 组合总和 (Combination Sum)
// @Author: user3919vu
// @Date: 2020-06-08 00:56:13
// @Runtime: 4 ms
// @Memory: 7.8 MB

class Solution {
private:
    vector<int> candidates;
    int target;
    vector<vector<int>> ans;
    vector<int> path;
public:
    void DFS(int start, int t){
        if (t == target) {
            ans.emplace_back(path); 
            return;
        }
        for (int i = start; i < candidates.size(); i++){
            int temp_t = t + candidates[i];
            if (temp_t > target) break;
            path.push_back(candidates[i]);
            DFS(i, temp_t);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        this->candidates = candidates;
        this->target = target;
        DFS(0, 0);
        return ans;
    }
};
