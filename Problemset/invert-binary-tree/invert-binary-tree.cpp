
// @Title: 翻转二叉树 (Invert Binary Tree)
// @Author: user3919vu
// @Date: 2020-07-02 16:37:38
// @Runtime: 4 ms
// @Memory: 9.2 MB

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
    void invert(TreeNode* t){
        if (!t) return;
        swap(t->left, t->right);
        invert(t->left);
        invert(t->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};
