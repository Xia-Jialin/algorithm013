/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> self;
        preorder(root, self);
        return self;
    }
     void preorder(TreeNode* root, vector<int>& self) {
        if (root == NULL) {
            return;
        }
        self.push_back(root->val);
        preorder(root->left, self);
        preorder(root->right, self);
    }
};
// @lc code=end

