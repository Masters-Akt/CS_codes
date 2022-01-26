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
    void solve(TreeNode* root, unordered_map<int, int>& m, int& ans){
        if(!root) return;
        m[root->val]++;
        if(!root->left && !root->right){
            int odd = 0;
            bool ch = false;
            for(auto x: m){
                if(x.second%2==1) odd++;
                if(odd>1){
                    ch = true;
                    break;
                }
            }
            if(!ch) ans++;
        }
        if(root->left) solve(root->left, m, ans);
        if(root->right) solve(root->right, m, ans);
        m[root->val]--;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        int ans = 0;
        unordered_map<int, int> m;
        solve(root, m, ans);
        return ans;
    }
};