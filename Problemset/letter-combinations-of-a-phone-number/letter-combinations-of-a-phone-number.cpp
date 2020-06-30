
// @Title: 电话号码的字母组合 (Letter Combinations of a Phone Number)
// @Author: user3919vu
// @Date: 2020-06-27 19:42:36
// @Runtime: 4 ms
// @Memory: 6.6 MB

class Solution {
public:
    string choic;
    vector<string> ans, vec = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string dig;
    void dfs(int i){
        if (i == dig.size()){
            ans.emplace_back(choic);
            return;   
        }
        for(auto sc : vec[dig[i] - '2']){
            choic += sc;
            dfs(i + 1);
            choic.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        dig = digits;
        dfs(0);
        return ans;
    }
};
