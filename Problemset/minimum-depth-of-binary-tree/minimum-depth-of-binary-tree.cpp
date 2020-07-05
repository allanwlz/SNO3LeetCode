
// @Title: 二叉树的最小深度 (Minimum Depth of Binary Tree)
// @Author: user3919vu
// @Date: 2020-07-02 15:11:58
// @Runtime: 24 ms
// @Memory: 17.6 MB

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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int i = minDepth(root->left), j = minDepth(root->right);
        if (i == 0) return j + 1;
        if (j == 0) return i + 1;
        return min(i, j) + 1;
    }
};
