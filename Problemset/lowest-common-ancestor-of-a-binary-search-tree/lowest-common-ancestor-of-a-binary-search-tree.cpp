
// @Title: 二叉搜索树的最近公共祖先 (Lowest Common Ancestor of a Binary Search Tree)
// @Author: user3919vu
// @Date: 2020-07-03 10:24:45
// @Runtime: 52 ms
// @Memory: 23.3 MB

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root == p || root == q) return root;
        auto L = lowestCommonAncestor(root->left, p, q);
        auto R = lowestCommonAncestor(root->right, p, q);
        if (L == NULL) return R;
        if (R == NULL) return L;
        return root;
    }
};
