
// @Title: 验证回文串 (Valid Palindrome)
// @Author: user3919vu
// @Date: 2020-06-25 01:10:45
// @Runtime: 8 ms
// @Memory: 7.2 MB

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            if (isalnum(s[i]) && isalnum(s[j])){
                if (tolower(s[i++]) == tolower(s[j--])) {}
                else return false;
            } else {
                if (!isalnum(s[i])) i++;
                if (!isalnum(s[j])) j--;
            }
        }
        return true;
    }
};
