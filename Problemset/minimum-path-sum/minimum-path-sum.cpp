
// @Title: 最小路径和 (Minimum Path Sum)
// @Author: user3919vu
// @Date: 2020-06-08 02:14:29
// @Runtime: 8 ms
// @Memory: 8.7 MB

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> table(m, vector<int>(n, 0));
        table[0][0] = grid[0][0];
        for(auto i = 0; i < m; i++) {
            for(auto j = 0; j < n; j++) {
                if(i == 0 && j == 0) continue;
                else if (i == 0) table[i][j] = table[i][j - 1] + grid[i][j];
                else if (j == 0) table[i][j] = table[i - 1][j] + grid[i][j];
                else table[i][j] = min(table[i - 1][j], table[i][j - 1]) + grid[i][j];
            }
        }
        return table[m - 1][n - 1];
    }
};
