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
        if(root==NULL) return;
        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX;
        vector<int> store;
        solve(root, store);
        for(int i=1;i<store.size();i++){
            ans = min(ans, store[i]-store[i-1]);
        }
        return ans;
    }
};