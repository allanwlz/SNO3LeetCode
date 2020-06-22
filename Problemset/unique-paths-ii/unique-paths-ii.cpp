
// @Title: 不同路径 II (Unique Paths II)
// @Author: user3919vu
// @Date: 2020-06-08 02:00:44
// @Runtime: 8 ms
// @Memory: 8.1 MB

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        if (obstacleGrid[m - 1][n - 1] == 1 || obstacleGrid[0][0] == 1) return 0;
        vector<vector<int>> table(m + 1, vector<int>(n + 1, 0));
        table[1][1] = 1;
        for(auto i = 1; i <= m; i++) {
            for(auto j = 1; j <= n; j++) {
                if (!((i == 1 && j == 1) || obstacleGrid[i - 1][j - 1])){
                    table[i][j] =  table[i][j - 1] + table[i - 1][j];
                }
            }
        }
        return table[m][n];
    }
};
