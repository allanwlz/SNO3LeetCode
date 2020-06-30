
// @Title: Z 字形变换 (ZigZag Conversion)
// @Author: user3919vu
// @Date: 2020-06-25 23:55:53
// @Runtime: 8 ms
// @Memory: 8.1 MB

class Solution {
public:
    string convert(string s, int numRows) {
        string ans = "";
        if (numRows == 1) return s;
        int inter = 2 * numRows - 2;
        for (int i = 0; i < s.size(); i += inter) ans += s[i]; 
        for (int i = 1, delta; i < numRows - 1; i++) {
            delta = (numRows - i - 1) * 2;
            for (int j = i; j < s.size(); j += inter) {
                ans += s[j];
                if (j + delta < s.size()) ans += s[j + delta];
            }
        }
        for (int i = numRows - 1; i < s.size(); i += inter) ans += s[i]; 
        return ans;
    }
};
