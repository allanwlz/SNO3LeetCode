
// @Title: 最长公共前缀 (Longest Common Prefix)
// @Author: user3919vu
// @Date: 2020-06-19 02:10:00
// @Runtime: 4 ms
// @Memory: 7.4 MB

class Solution {
public:
    string findprefix(string s1, string s2){
        string ans;
        int j = min(s1.size(), s2.size());
        for(int i = 0; i < j; i++){
            if (s1[i] == s2[i]) ans += s1[i];
            else break;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
       if (strs.empty()) return {};
       string ans = strs[0];
       for(int i = 1; i < strs.size(); i++){
           if (ans.empty()) break;
           ans = findprefix(ans, strs[i]);
       }
       return ans;
    }
};
