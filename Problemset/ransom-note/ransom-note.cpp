
// @Title: 赎金信 (Ransom Note)
// @Author: user3919vu
// @Date: 2020-06-25 14:12:31
// @Runtime: 36 ms
// @Memory: 8.8 MB

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);
        for (auto mc : magazine) count[mc - 'a']++;
        for (auto rc : ransomNote) if (--count[rc - 'a'] < 0) return false;
        return true;
    }
};
