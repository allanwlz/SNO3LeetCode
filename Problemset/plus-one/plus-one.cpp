
// @Title: 加一 (Plus One)
// @Author: user3919vu
// @Date: 2020-06-03 11:36:39
// @Runtime: 0 ms
// @Memory: 6.7 MB

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int e = digits.size() - 1;
        digits[e]++;
        while(digits[e] == 10 && e >= 0){
            digits[e] -= 10;
            if (e == 0) digits.insert(digits.begin(), 1);
            else digits[--e]++;
        }
        return digits;
    }
};
