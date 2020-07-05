
// @Title: 二叉树的中序遍历 (Binary Tree Inorder Traversal)
// @Author: user3919vu
// @Date: 2020-07-05 16:37:13
// @Runtime: 4 ms
// @Memory: 7.3 MB

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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk;
        vector<int> ans;
        TreeNode* x = root;
        while(true) {
            if (x) {
                stk.emplace(x);
                x = x->left;
            } else if (!stk.empty()){
                x = stk.top();
                ans.emplace_back(x->val);
                stk.pop();
                x = x->right; 
            } else break;
        }
        return ans;
    }
};
