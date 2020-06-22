
// @Title: 三步问题 (Three Steps Problem LCCI)
// @Author: user3919vu
// @Date: 2020-04-06 17:05:32
// @Runtime: 12 ms
// @Memory: 6 MB

class Solution {
public:
    int waysToStep(int n) {
        long list[4];
        list[0] = 1;
        list[1] = 2;
        list[2] = 4;
        for (int i = 3; i < n; ++i) {
            list[3] = (list[0] + list[1] + list[2]) % 1000000007;
            list[0] = list[1];
            list[1] = list[2];
            list[2] = list[3];
        }
        return list[min(3,n-1)];
    }
};
