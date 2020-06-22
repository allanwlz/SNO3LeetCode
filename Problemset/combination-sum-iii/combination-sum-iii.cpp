
// @Title: 组合总和 III (Combination Sum III)
// @Author: user3919vu
// @Date: 2020-06-10 23:14:44
// @Runtime: 0 ms
// @Memory: 6.5 MB

class Solution {
public:
    vector<int> path;
    vector<vector<int>> ans;
    void DFS(int start, int k, int n){
        if (k == 0 && n == 0) ans.emplace_back(path);
        if (k + start > 10) return;
        for (int i = start; i <= 9; i++){
            path.emplace_back(i);
            DFS(i + 1, k - 1, n - i);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        DFS(1, k, n);
        return ans;
    }
};
