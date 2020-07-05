
// @Title: 对称二叉树 (Symmetric Tree)
// @Author: user3919vu
// @Date: 2020-07-01 16:50:12
// @Runtime: 8 ms
// @Memory: 12.3 MB

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
    bool sym(TreeNode* t1, TreeNode* t2){
        if (t1 == NULL && t2 == NULL) return true;
        if (t1 == NULL || t2 == NULL) return false;
        return t1->val == t2->val && sym(t1->left, t2->right) && sym(t1->right, t2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return sym(root->left, root->right);
    }
};
