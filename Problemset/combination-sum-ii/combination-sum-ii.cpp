
// @Title: 组合总和 II (Combination Sum II)
// @Author: user3919vu
// @Date: 2020-06-08 00:12:10
// @Runtime: 4 ms
// @Memory: 7.4 MB

class Solution {
private:
    vector<int> candidates;
    int target;
    vector<int> path;
    vector<vector<int>> ans;
public:
    void DFS(int index, int t){
        if (t == target) {
            ans.emplace_back(path);
            return;
        }
        for(auto i = index; i < candidates.size(); i++){  
            if(t + candidates[i] > target) break;
            if(i > index && candidates[i] == candidates[i - 1]) continue;
            path.emplace_back(candidates[i]);
            DFS(i + 1, t + candidates[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        this->target = target;
        sort(candidates.begin(), candidates.end());
        this->candidates = candidates;
        DFS(0, 0);
        return ans;
    }
};
