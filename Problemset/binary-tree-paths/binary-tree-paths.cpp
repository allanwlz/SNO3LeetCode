
// @Title: 二叉树的所有路径 (Binary Tree Paths)
// @Author: user3919vu
// @Date: 2020-07-05 21:31:43
// @Runtime: 4 ms
// @Memory: 14.6 MB

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
    vector<string> ans;
    void dfs(TreeNode* t, string path){
        path = path + "->" + to_string(t->val);
        if ((!t->left) && (!t->right)) ans.emplace_back(path.substr(2));
        if (t->left) dfs(t->left, path);
        if (t->right) dfs(t->right, path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if (!root) return {};
        dfs(root, "");
        return ans;
    }
};
