
// @Title: 最后一个单词的长度 (Length of Last Word)
// @Author: user3919vu
// @Date: 2020-06-21 09:55:32
// @Runtime: 4 ms
// @Memory: 7.1 MB

class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream  ss(s);
        string res;
        while(ss>>res){}
        return res.length();
    }
};
