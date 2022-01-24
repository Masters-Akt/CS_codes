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
    int helper(TreeNode*& root){
        if(!root) return 0;
        int l = helper(root->left);
        int r = helper(root->right);
        if(l==0) root->left = NULL;
        if(r==0) root->right = NULL;
        return root->val+l+r;
    }
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(!root) return root;
        helper(root);
        if(!root->left && !root->right && root->val==0) root=NULL;
        return root;
    }
};