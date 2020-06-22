
// @Title: 二进制求和 (Add Binary)
// @Author: user3919vu
// @Date: 2020-06-22 03:11:29
// @Runtime: 8 ms
// @Memory: 7.3 MB

class Solution {
public:
    string addBinary(string a, string b) {
        int i = 0, m = a.size(), n = b.size(), carry = 0;
        string ans;
        while(++i){
            if (i > m && i > n){
                if (carry == 1) ans = '1' + ans;
                break;
            }
            if (i <= m && a[m - i] == '1') carry++;
            if (i <= n && b[n - i] == '1') carry++;
            ans = (carry % 2 == 0 ? '0' : '1') + ans;
            carry >>= 1;
        }
        return ans;
        
    }
};
