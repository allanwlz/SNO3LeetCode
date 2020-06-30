
// @Title: 解码方法 (Decode Ways)
// @Author: user3919vu
// @Date: 2020-06-29 13:23:30
// @Runtime: 4 ms
// @Memory: 6.3 MB

class Solution {
public:
    bool isalpha(char i, char j){
        int k = (i - '0') * 10 + j - '0';
        return (k >= 10 && k <= 26); 
    }
    bool isalpha(char i){
        return i > '0';
    }
    int numDecodings(string s) {
        if (s.size() == 1) return isalpha(s[0]) ? 1 : 0;
        int p = 1, q = isalpha(s[0]) ? 1 : 0;
        for(int i = 1, temp; i < s.size(); i++){
            temp = 0;
            if (isalpha(s[i])) temp += q;
            if (isalpha(s[i - 1], s[i])) temp += p;
            p = q;
            q = temp;
        }
        return q;
    }
};
