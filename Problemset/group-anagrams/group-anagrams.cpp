
// @Title: 字母异位词分组 (Group Anagrams)
// @Author: user3919vu
// @Date: 2020-06-29 11:05:24
// @Runtime: 64 ms
// @Memory: 15.1 MB

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.empty()) return {{}};
        unordered_map<string, int> umaps;
        vector<vector<string>> ans;
        int cnt = 0;
        for (auto str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            if (umaps.count(temp) == 0) {
                umaps[temp] = cnt++;
                ans.push_back({str});
            } else ans[umaps[temp]].emplace_back(str);
        }
        return ans;
    }
};
