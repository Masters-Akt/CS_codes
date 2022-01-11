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
    void solve(TreeNode* root, vector<vector<int>>& temp, vector<int>& t){
        t.push_back(root->val);
        if(root->left) solve(root->left, temp, t);
        if(root->right) solve(root->right, temp, t);
        if(!root->left && !root->right) temp.push_back(t);
        t.pop_back();
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==NULL) return ans;
        vector<vector<int>> temp;
        vector<int> t;
        solve(root, temp, t);
        for(auto x: temp){
            string tem = "";
            for(int i=0;i<x.size();i++){
                if(i!=0) tem+="->";
                tem+=to_string(x[i]);
            }
            ans.push_back(tem);
        }
        return ans;
    }
};