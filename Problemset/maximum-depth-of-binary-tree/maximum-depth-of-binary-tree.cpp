
// @Title: 二叉树的最大深度 (Maximum Depth of Binary Tree)
// @Author: user3919vu
// @Date: 2020-07-01 17:01:52
// @Runtime: 16 ms
// @Memory: 16.9 MB

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
    void dfs(TreeNode* t){
        if (t == NULL) {
            ans = max(depth, ans);
            return;
        }
        depth++;
        dfs(t->left);
        dfs(t->right);
        depth--;
    }
    int depth = 0, ans = -1;
    int maxDepth(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
