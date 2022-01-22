/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* solve(TreeNode*& root, int& prev_value){
        if(root->right) solve(root->right, prev_value);
        prev_value+=root->val;
        root->val = prev_value;
        if(root->left) solve(root->left, prev_value);
        return root;
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        int prev_value = 0;
        solve(root, prev_value);
        return root;
    }
};