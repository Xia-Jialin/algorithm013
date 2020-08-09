/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
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
        vector<int> self;
        inorder(root, self);
        return self;
    }

    void inorder(TreeNode* root, vector<int>& self) {
        if (root != NULL) {
            inorder(root->left, self);
            self.push_back(root->val);
            inorder(root->right,self);
        }
    }
};
// @lc code=end

