
// @Title: 二叉树的层次遍历 II (Binary Tree Level Order Traversal II)
// @Author: user3919vu
// @Date: 2020-07-02 11:00:50
// @Runtime: 12 ms
// @Memory: 11.7 MB

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (root == NULL) return {};
        vector<vector<int>> ans;
        vector<int> temp;
        vector<TreeNode *> v1 = {root}, v2;
        while (!v1.empty()){
            for (auto v : v1){
                if (v->left != NULL) v2.emplace_back(v->left);
                if (v->right != NULL) v2.emplace_back(v->right);
                temp.emplace_back(v->val);
            }
            ans.emplace_back(temp);
            temp = {};
            v1 = v2;
            v2 = {};
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
