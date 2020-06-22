
// @Title: x 的平方根 (Sqrt(x))
// @Author: user3919vu
// @Date: 2020-04-06 19:40:59
// @Runtime: 4 ms
// @Memory: 5.8 MB

class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        long lo = 1, hi = (x >> 1) + 1, mi;
        while (lo < hi){
            mi = (lo + hi) >> 1;
            (mi * mi <= x) ? lo = mi + 1 : hi = mi;
        }
        return lo - 1;
    }
};
