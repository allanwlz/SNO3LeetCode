
// @Title: 不同路径 (Unique Paths)
// @Author: user3919vu
// @Date: 2020-06-08 01:22:34
// @Runtime: 0 ms
// @Memory: 6.5 MB

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> table(m, vector<int>(n, 1));
        for(auto i = 1; i < m; i++) for(auto j = 1; j < n; j++) table[i][j] = table[i - 1][j] + table[i][j - 1];
        return table[m - 1][n - 1];
    }
};
