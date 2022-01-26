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
    void solve(TreeNode* root, vector<int>& ans){
        if(!root) return;
        if(!root->left && !root->right) ans.push_back(root->val);
        if(root->left) solve(root->left, ans);
        if(root->right) solve(root->right, ans);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1;
        vector<int> ans2;
        solve(root1, ans1);
        solve(root2, ans2);
        if(ans1==ans2) return true;
        return false;
    }
};