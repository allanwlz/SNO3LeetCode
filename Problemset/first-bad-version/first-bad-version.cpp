
// @Title: 第一个错误的版本 (First Bad Version)
// @Author: user3919vu
// @Date: 2020-04-06 23:09:19
// @Runtime: 0 ms
// @Memory: 6 MB

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long lo = 1, hi = long(n) + 1, mi;
        while(lo < hi){
            mi = (lo + hi) >> 1;
            isBadVersion(mi) ? hi = mi : lo = mi + 1;
        }
        return lo;
    }
};
