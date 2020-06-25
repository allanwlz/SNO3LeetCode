
// @Title: 反转字符串中的元音字母 (Reverse Vowels of a String)
// @Author: user3919vu
// @Date: 2020-06-25 15:56:30
// @Runtime: 12 ms
// @Memory: 7.8 MB

class Solution {
public:
    bool isvowel(char c){
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ;
    }
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j) { 
            if (isvowel(s[i]) && isvowel(s[j])) swap(s[i++], s[j--]);
            else{
                if (!isvowel(s[i])) i++;
                if (!isvowel(s[j])) j--;
            }
        }
        return s;
    }
};
