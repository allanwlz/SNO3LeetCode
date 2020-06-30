
// @Title: 翻转字符串里的单词 (Reverse Words in a String)
// @Author: user3919vu
// @Date: 2020-06-30 10:34:15
// @Runtime: 12 ms
// @Memory: 65.1 MB

class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        string temp, ans;
        while(getline(ss, temp, ' ')) if (!temp.empty()) ans = temp + ' ' + ans;
        return ans.substr(0, ans.size() - 1);
    }
};
