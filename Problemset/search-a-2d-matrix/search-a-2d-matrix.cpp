
// @Title: 搜索二维矩阵 (Search a 2D Matrix)
// @Author: user3919vu
// @Date: 2020-06-08 02:50:07
// @Runtime: 8 ms
// @Memory: 7.8 MB

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty() || target < matrix[0][0]) return false;
        int m = matrix.size(), n = matrix[0].size();
        int up = 0, down = m, middle;
        while(up < down){
            middle = (up + down) / 2;
            if (matrix[middle][0] <= target) up = middle + 1;
            else down = middle;
        }
        if (matrix[up - 1][0] == target) return true;
        int left = 0, right = n;
        while(left < right){
            middle = (left + right) / 2;
            if (matrix[up - 1][middle] <= target) left = middle + 1;
            else right = middle;
        }
        return matrix[up - 1][left - 1] == target;
    }
};
