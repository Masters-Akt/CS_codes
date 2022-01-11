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
    void solve(TreeNode* root, vector<int>& store, int& temp){
        temp = temp*2+root->val;
        if(root->left) solve(root->left, store, temp);
        if(root->right) solve(root->right, store, temp);
        if(!root->left && !root->right){
            store.push_back(temp);
        }
        temp/=2;
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        if(root==NULL) return 0;
        int temp = 0;
        vector<int> store;
        solve(root, store, temp);
        int ans = 0;
        for(int x: store) ans+=x;
        return ans;
    }
};