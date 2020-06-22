
// @Title: 爬楼梯 (Climbing Stairs)
// @Author: user3919vu
// @Date: 2020-04-01 23:43:48
// @Runtime: 0 ms
// @Memory: 6 MB

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;
        int list[n];
        list[0] = 1;
        list[1] = 2;
        for (int i = 2; i < n; ++i) {
            list[i] = list[i - 1] + list[i - 2];
        }
        return list[n - 1];
    }
};
