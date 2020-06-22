
// @Title: 从中序与后序遍历序列构造二叉树 (Construct Binary Tree from Inorder and Postorder Traversal)
// @Author: user3919vu
// @Date: 2020-06-08 21:21:38
// @Runtime: 20 ms
// @Memory: 17.7 MB

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
    unordered_map<int, int> map;       
    TreeNode* build(vector<int>& postorder, int l1, int r1, vector<int>& inorder, int l2, int r2){
        if (l1 == r1) return NULL; 
        auto top = new TreeNode(postorder[r1 - 1]);
        int f = map[postorder[r1 - 1]];
        top->left = build(postorder, l1, f - l2 + l1, inorder, l2, f);
        top->right = build(postorder, f - l2 + l1, r1 - 1, inorder, f + 1, r2);
        return top;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i = 0; i != inorder.size(); i++) map.emplace(inorder[i], i);
        return build(postorder, 0, postorder.size(), inorder, 0, inorder.size());
    }
};
