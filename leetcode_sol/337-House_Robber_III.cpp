//Recursion - TLE
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
    int func(TreeNode* root){
        if(root==NULL) return 0;
        int pick = root->val;
        if(root->left) pick+=func(root->left->left)+func(root->left->right);
        if(root->right) pick+=func(root->right->left)+func(root->right->right);
        int notPick = func(root->left)+func(root->right);
        return max(pick, notPick);
    }
public:
    int rob(TreeNode* root) {
        return func(root);
    }
};