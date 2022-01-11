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
    void solve(TreeNode* root, string& temp, vector<string>& ans){
        temp+=('a'+root->val);
        if(root->left) solve(root->left, temp, ans);
        if(root->right) solve(root->right, temp, ans);
        if(!root->left && !root->right){
            string t = temp;
            reverse(t.begin(), t.end());
            ans.push_back(t);
        }
        temp = temp.substr(0, temp.size()-1);
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        if(root==NULL) return "";
        vector<string> ans;
        string temp = "";
        solve(root, temp, ans);
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};