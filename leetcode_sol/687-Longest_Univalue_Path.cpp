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
    int solve(TreeNode* root, int v, int& ans){
        if(!root) return 0;
        int left = solve(root->left, root->val, ans);
        int right = solve(root->right, root->val, ans);
        ans = max(ans, left+right);
        if(v==root->val) return 1+max(left, right);
        return 0;
    }
public:
    int longestUnivaluePath(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        solve(root, root->val, ans);
        return ans;
    }
};