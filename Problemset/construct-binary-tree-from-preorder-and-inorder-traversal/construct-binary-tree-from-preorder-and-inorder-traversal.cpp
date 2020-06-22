
// @Title: 从前序与中序遍历序列构造二叉树 (Construct Binary Tree from Preorder and Inorder Traversal)
// @Author: user3919vu
// @Date: 2020-06-08 20:59:46
// @Runtime: 16 ms
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
    unordered_map<int, int> map;
    TreeNode* build(vector<int>& preorder, int l1, int r1, vector<int>& inorder, int l2, int r2){
        if (l1 == r1) return NULL; 
        auto top = new TreeNode(preorder[l1]);
        int f = map[preorder[l1]];
        top->left = build(preorder, l1 + 1, f - l2 + l1 + 1, inorder, l2, f);
        top->right = build(preorder, f - l2 + l1 + 1, r1, inorder, f + 1, r2);
        return top;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i != inorder.size(); i++) map.emplace(inorder[i], i);
        return build(preorder, 0, preorder.size(), inorder, 0, inorder.size());
    }
};
