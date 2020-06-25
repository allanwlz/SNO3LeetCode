
// @Title: 字符串中的第一个唯一字符 (First Unique Character in a String)
// @Author: user3919vu
// @Date: 2020-06-25 14:44:10
// @Runtime: 180 ms
// @Memory: 10.9 MB

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        for (auto c : s){
            if (map.find(c) == map.end()) map.emplace(c, 1);
            else map[c] ++;
        }
        for (int i = 0; i < s.size(); i++) if (map[s[i]] == 1) return i;
        return -1;
    }
};
