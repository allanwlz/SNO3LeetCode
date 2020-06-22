
// @Title: 杨辉三角 (Pascal's Triangle)
// @Author: user3919vu
// @Date: 2020-06-03 12:40:35
// @Runtime: 0 ms
// @Memory: 6.8 MB

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0) return {};
        vector<vector<int>> ans;
        vector<int> a{1};
        ans.push_back(a);
        while(--numRows){
            a.push_back(0);
            for(int i = a.size() - 1; i > 0; i--) a[i] += a[i-1];
            ans.push_back(a);
        }
        return ans;
    }
};
