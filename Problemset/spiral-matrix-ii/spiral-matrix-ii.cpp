
// @Title: 螺旋矩阵 II (Spiral Matrix II)
// @Author: user3919vu
// @Date: 2020-06-05 17:17:11
// @Runtime: 0 ms
// @Memory: 6.7 MB

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if (n == 0) return {};
        vector<vector<int>> ans(n, vector<int> (n));
        int l = 0, r = n, u = 0, d = n, m = 1, x, y;
        while(m <= n * n){
            for (int x = l; x < r; x++) ans[u][x] = m++;
            ++u;
            for (int y = u; y < d; y++) ans[y][r - 1] = m++;
            --r;
            for (int x = r - 1; x >= l; x--) ans[d - 1][x] = m++;
            --d;
            for (int y = d - 1; y >= u; y--) ans[y][l] = m++;
            ++l;
        }
        return ans;
    }
};
