
// @Title: 罗马数字转整数 (Roman to Integer)
// @Author: user3919vu
// @Date: 2020-06-19 01:54:41
// @Runtime: 24 ms
// @Memory: 9.2 MB

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> luomab = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int result = 0, l = s.size(), i = 0;
        for(int i=0;i<s.length();i++)
        {
            if(luomab[s[i]] < luomab[s[i+1]])
                result -= luomab[s[i]];
            else
            {
                result += luomab[s[i]];
            }
        }
        return result;
    }
};
