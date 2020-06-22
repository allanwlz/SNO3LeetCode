
// @Title: 矩阵置零 (Set Matrix Zeroes)
// @Author: user3919vu
// @Date: 2020-06-07 09:47:52
// @Runtime: 40 ms
// @Memory: 13.5 MB

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty()) return;
        int m = matrix.size(), n = matrix[0].size();
        vector<int> aux = {1, 1};
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if (matrix[i][j] == 0){
                    if (i == 0) aux[0] = 0;
                    else matrix[i][0] = 0;
                    if (j == 0) aux[1] = 0;
                    else matrix[0][j] = 0;
                }
            }
        }     
        for (int i = 1; i < m; i++) if (matrix[i][0] == 0) for(int j = 1; j < n; j++) matrix[i][j] = 0;  
        for (int j = 1; j < n; j++) if (matrix[0][j] == 0) for(int i = 1; i < m; i++) matrix[i][j] = 0;
        if (aux[0] == 0) for(int j = 0; j < n; j++) matrix[0][j] = 0;
        if (aux[1] == 0) for(int i = 0; i < m; i++) matrix[i][0] = 0;
    }
};
