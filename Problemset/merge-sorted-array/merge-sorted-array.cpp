
// @Title: 合并两个有序数组 (Merge Sorted Array)
// @Author: user3919vu
// @Date: 2020-06-03 12:21:08
// @Runtime: 4 ms
// @Memory: 9 MB

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m + n;
        while(n){
            if (m == 0 || nums1[m - 1] <= nums2[n - 1]) nums1[--i] = nums2[--n];
            else nums1[--i] = nums1[--m];
        }
    }
};

