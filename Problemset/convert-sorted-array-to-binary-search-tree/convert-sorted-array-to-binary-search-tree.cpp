
// @Title: 将有序数组转换为二叉搜索树 (Convert Sorted Array to Binary Search Tree)
// @Author: user3919vu
// @Date: 2020-07-02 11:28:37
// @Runtime: 28 ms
// @Memory: 23.1 MB

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buidTree(vector<int>& nums, int left, int right){
        int middle = left + ((right - left) >> 1);
        auto root = new TreeNode(nums[middle]);
        if (middle > left) (root->left = buidTree(nums, left, middle - 1));
        if (middle < right) (root->right = buidTree(nums, middle + 1, right));
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) return NULL;
        return buidTree(nums, 0, nums.size() - 1);
    }
};
