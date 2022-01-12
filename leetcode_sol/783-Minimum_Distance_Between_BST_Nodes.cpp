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
    void solve(TreeNode* root, vector<int>& store){
        if(root==NULL) return;
        solve(root->left, store);
        store.push_back(root->val);
        solve(root->right, store);
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> store;
        int ans = INT_MAX;
        solve(root, store);
        for(int i=1;i<store.size();i++){
            ans = min(ans, store[i]-store[i-1]);
        }
        return ans;
    }
};