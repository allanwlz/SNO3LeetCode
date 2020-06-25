
// @Title: 最长回文子串 (Longest Palindromic Substring)
// @Author: user3919vu
// @Date: 2020-06-25 23:20:06
// @Runtime: 8 ms
// @Memory: 6.6 MB

class Solution {
public:
    int maxlen = 0, start;
    void expand(string& s, int i, int j){
        do {
            --i;
            ++j;
        } while(i >= 0 && j < s.size() && s[i] == s[j]);
        if (j - i - 1 > maxlen){
            maxlen = j - i - 1;
            start = i + 1;
        }
    }
    string longestPalindrome(string s) {
        int i = 0, j;
        while (i < s.size()){
            j = i + 1;
            while (j < s.size() && s[j] == s[j - 1]) j++;
            expand(s, i, j - 1);
            i = j;
        }
        return s.substr(start, maxlen);
    }
};
