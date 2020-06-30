
// @Title: 括号生成 (Generate Parentheses)
// @Author: user3919vu
// @Date: 2020-06-27 21:54:20
// @Runtime: 8 ms
// @Memory: 11.7 MB

class Solution {
    int left, right;
    string pos;
    vector<string> ans;
    void dfs(){
        if (left + right == 0) {
            ans.emplace_back(pos);
            return;
        }
        if (left > 0) {
            left--;
            pos += "(";
            dfs();
            pos.pop_back();
            left++;
        }
        if (right > left) {
            right--;
            pos += ")";
            dfs();
            pos.pop_back();
            right++;
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        if (n == 0) return {};
        left = n;
        right = n;
        dfs();
        return ans;
    }
};
