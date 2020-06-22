
// @Title: 杨辉三角 II (Pascal's Triangle II)
// @Author: user3919vu
// @Date: 2020-06-03 12:45:14
// @Runtime: 0 ms
// @Memory: 6.6 MB

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) return {1};
        vector<int> a{1};
        while(rowIndex--){
            a.push_back(0);
            for(int i = a.size() - 1; i > 0; i--) a[i] += a[i-1];
        }
        return a;
    }
};
