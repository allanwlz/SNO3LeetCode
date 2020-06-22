
// @Title: 三角形最小路径和 (Triangle)
// @Author: user3919vu
// @Date: 2020-06-10 14:21:21
// @Runtime: 16 ms
// @Memory: 8.2 MB


class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        for (int i = t.size() - 2; i >= 0; --i) 
            for (int j = 0; j < t[i].size(); ++j) 
                t[i][j] += min(t[i + 1][j], t[i + 1][j + 1]);
        return t[0][0];
    }
};

