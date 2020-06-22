
// @Title: 外观数列 (Count and Say)
// @Author: user3919vu
// @Date: 2020-06-20 23:03:49
// @Runtime: 4 ms
// @Memory: 6.4 MB

class Solution {
public:
    string countAndSay(int n) {
        string temp, ans = "1";
        int i, j;
        while(--n > 0){
            temp = ans;
            ans.clear();
            for (i = 0, j = 0; i < temp.size(); ){
                while(j < temp.size() && temp[j] == temp[i]) j++;
                ans += (to_string(j - i) + temp[i]);
                i = j;
            }
        }
        return ans;
        
    }
};
