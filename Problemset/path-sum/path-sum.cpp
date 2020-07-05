
// @Title: 路径总和 (Path Sum)
// @Author: user3919vu
// @Date: 2020-07-02 16:31:19
// @Runtime: 12 ms
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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) return false;
        if ((sum -= (root->val)) == 0 && root->left == NULL && root->right == NULL) return true;    
        return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
    }
};
