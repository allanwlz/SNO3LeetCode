
// @Title: 螺旋矩阵 (Spiral Matrix)
// @Author: user3919vu
// @Date: 2020-06-05 10:08:49
// @Runtime: 0 ms
// @Memory: 6.5 MB

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) return {};
        vector<int> ans;
        int l = 0, r = matrix[0].size(), u = 0, d = matrix.size(), x, y;
        while( true ){
            for (int x = l; x < r; x++) ans.push_back(matrix[u][x]);
            if (++u == d) break;
            for (int y = u; y < d; y++) ans.push_back(matrix[y][r - 1]);
            if (l == --r) break;
            for (int x = r - 1; x >= l; x--) ans.push_back(matrix[d - 1][x]);
            if (u == --d) break;
            for (int y = d - 1; y >= u; y--) ans.push_back(matrix[y][l]);
            if (++l == r) break;
        }
        return ans;
    }
};
