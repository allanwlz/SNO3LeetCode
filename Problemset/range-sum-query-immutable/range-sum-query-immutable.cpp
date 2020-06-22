
// @Title: 区域和检索 - 数组不可变 (Range Sum Query - Immutable)
// @Author: user3919vu
// @Date: 2020-04-02 10:41:56
// @Runtime: 40 ms
// @Memory: 16.7 MB

class NumArray {
public:
    vector<int> table;
    NumArray(vector<int>& nums) {
        table.push_back(0);
        for (int i = 0, accum = 0; i < nums.size(); ++i) {
            table.push_back((accum += nums[i]));
        }
    }
    int sumRange(int i, int j) {
        return table[j + 1] - table[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
