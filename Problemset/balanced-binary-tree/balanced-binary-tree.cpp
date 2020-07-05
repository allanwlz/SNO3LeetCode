
// @Title: 平衡二叉树 (Balanced Binary Tree)
// @Author: user3919vu
// @Date: 2020-07-02 14:44:59
// @Runtime: 12 ms
// @Memory: 14.9 MB

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
    int height(TreeNode* t){
        if (t == NULL) return 0;
        int i, j;
        if((i = height(t->left)) == -1 || (j = height(t->right)) == -1 || i - j > 1 || j - i > 1) return -1;
        return max(i, j) + 1;
    }
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
