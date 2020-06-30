
// @Title: 字符串相乘 (Multiply Strings)
// @Author: user3919vu
// @Date: 2020-06-28 00:06:32
// @Runtime: 8 ms
// @Memory: 6.5 MB

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        int n1 = num1.size(), n2 = num2.size();
        string ans(n1 + n2, '0');
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int temp = ans[i + j + 1] - '0' + (num1[i] - '0') * (num2[j] - '0');
                ans[i + j + 1] = temp % 10 + '0';
                ans[i + j] += temp / 10;   
            }
        }
        if (ans[0] == '0') return ans.substr(1);
        return ans;
    }
};
