
// @Title: 合并区间 (Merge Intervals)
// @Author: user3919vu
// @Date: 2020-06-05 13:51:18
// @Runtime: 48 ms
// @Memory: 10.5 MB

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        sort(intervals.begin(), intervals.end(), [](vector<int>& x, vector<int>& y){return x < y;});
        vector<vector<int>> ans;
        for(auto it = intervals.begin(); it != intervals.end(); it++){
            if (ans.empty() || (*it)[0] > ans.back()[1]) ans.emplace_back(*it);
            else ans.back()[1] = max(ans.back()[1], (*it)[1]);
        }
        return ans;
    }
};
