
// @Title: 比较版本号 (Compare Version Numbers)
// @Author: user3919vu
// @Date: 2020-07-01 09:59:48
// @Runtime: 0 ms
// @Memory: 6.3 MB

class Solution {
public:
    int compareVersion(string version1, string version2) {
        istringstream s1(version1), s2(version2);
        string i, j;
        bool ei = false, ej = false;
        while(true){
            if (ei && ej) return 0;
            if ((!ei && !getline(s1, i, '.'))) {
                ei = true;
                i = "0";
            }
            if ((!ej && !getline(s2, j, '.'))) {
                ej = true;
                j = "0";
            }
            if (stoi(i) > stoi(j)) return 1;
            if (stoi(i) < stoi(j)) return -1;
        }
    }
};
