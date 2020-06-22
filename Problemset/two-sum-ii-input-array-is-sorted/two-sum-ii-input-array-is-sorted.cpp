
// @Title: 两数之和 II - 输入有序数组 (Two Sum II - Input array is sorted)
// @Author: user3919vu
// @Date: 2020-04-06 20:01:44
// @Runtime: 4 ms
// @Memory: 9.5 MB

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo = 0, hi = numbers.size() - 1;
        int sum;
        while (true){
            sum = numbers[lo] + numbers[hi];
            if (sum == target) {
                break;
                }
            else if (sum > target) hi--;
            else lo++;
        }
        vector<int> result = {lo + 1, hi + 1};
        return result;
    }
};
