
// @Title: 无重复字符的最长子串 (Longest Substring Without Repeating Characters)
// @Author: user3919vu
// @Date: 2020-06-25 17:18:16
// @Runtime: 44 ms
// @Memory: 8.5 MB

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> umap;
        int ans = 0, length = 0, begin = 0;
        for(int i = 0; i < s.size(); i++){
            if (umap.find(s[i]) == umap.end() || umap[s[i]] < begin) {
                length++;
                ans = max(ans, length);
            } else {
                begin = umap[s[i]] + 1;
                length = i - begin + 1;
            }
            umap[s[i]] = i;
        } 
        return ans;
    }
};
