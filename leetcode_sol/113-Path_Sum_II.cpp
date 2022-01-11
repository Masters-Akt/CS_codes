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
    void solve(TreeNode* root, int targetSum, vector<vector<int>>& ans, vector<int>& temp, int& tempSum){
        temp.push_back(root->val);
        tempSum+=root->val;
        if(root->left) solve(root->left, targetSum, ans, temp, tempSum);
        if(root->right) solve(root->right, targetSum, ans, temp, tempSum);
        if(!root->left && !root->right && targetSum==tempSum) ans.push_back(temp);
        tempSum-=root->val;
        temp.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        vector<int> temp;
        int tempSum=0;
        solve(root, targetSum, ans, temp, tempSum);
        return ans;
    }
};