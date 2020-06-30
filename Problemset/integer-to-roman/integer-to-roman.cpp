
// @Title: 整数转罗马数字 (Integer to Roman)
// @Author: user3919vu
// @Date: 2020-06-27 19:08:34
// @Runtime: 12 ms
// @Memory: 6.5 MB

class Solution {
public:
    string intToRoman(int num) {
        char* vec[4][10] = {
            {"", "M", "MM", "MMM"},
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        };
        return (string)"" + vec[0][num / 1000] + vec[1][num % 1000 / 100] + vec[2][num % 100 / 10] + vec[3][num % 10];
    }
};
