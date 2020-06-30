
// @Title: 简化路径 (Simplify Path)
// @Author: user3919vu
// @Date: 2020-06-29 12:38:09
// @Runtime: 8 ms
// @Memory: 12.9 MB

class Solution {
public:
    string simplifyPath(string path) {
        istringstream ss(path);
        string pth, ans;
        while(getline(ss, pth, '/')){
            if (pth == "" || pth == "." || (pth == ".." && ans.empty())) continue;
            if (pth == "..") {
                while(ans[ans.size() - 1] != '/') ans.pop_back();
                ans.pop_back();
            } else ans = ans + "/" + pth;
        }
        return ans == "" ? "/" : ans;
    }
};
