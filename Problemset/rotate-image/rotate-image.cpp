
// @Title: 旋转图像 (Rotate Image)
// @Author: user3919vu
// @Date: 2020-06-05 09:27:57
// @Runtime: 0 ms
// @Memory: 7.1 MB

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++) for(int j = 0; j < i; j++) swap(matrix[i][j], matrix[j][i]);
        for(auto& m : matrix) reverse(m.begin(), m.end());
    }
};
