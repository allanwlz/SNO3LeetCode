
// @Title: 复原IP地址 (Restore IP Addresses)
// @Author: user3919vu
// @Date: 2020-06-30 10:20:55
// @Runtime: 0 ms
// @Memory: 6.8 MB

class Solution {
public:
    string pth;
    vector<string> ans;
    bool isvalid(string s){
        if (s.empty() || s.size() >= 4 || (s != "0" && s[0] == '0')) return false;
        int i = 0;
        for(auto c : s) i = i * 10 + c - '0';
        return i >= 0 && i <= 255;
    }
    void dfs(string& s, int start, int n){
        if (n == 0 && start == s.size()) {
            ans.emplace_back(pth.substr(1));
            return;
        }
        if (s.size() - start > 3 * n || s.size() - start < n) return;
        pth += ".";
        for (int p = 0; p < 3; p++){
            pth += s[start + p];
            if (isvalid(s.substr(start, p + 1))) dfs(s, start + p + 1, n - 1);
        }
        for (int p = 0; p < 4; p++) pth.pop_back(); 
    }
    vector<string> restoreIpAddresses(string s) {
        dfs(s, 0, 4);
        return ans;
    }
};
