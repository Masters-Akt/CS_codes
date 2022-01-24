//havent used property of BST
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
    void solve(TreeNode*& root, int low, int high, int& ans){
        if(!root) return;
        if(root->val>=low && root->val<=high) ans+=root->val;
        solve(root->left, low, high, ans);
        solve(root->right, low, high, ans);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        solve(root, low, high, ans);
        return ans;
    }
};