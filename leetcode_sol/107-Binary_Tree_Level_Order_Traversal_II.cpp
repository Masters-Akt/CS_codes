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
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};
        queue<pair<TreeNode*, int>> q;
        vector<vector<int>> ans;
        q.push({root, 0});
        while(!q.empty()){
            int s = q.size();
            vector<int> temp;
            while(s--){
                TreeNode* x = q.front().first;
                int level = q.front().second;
                q.pop();
                temp.push_back(x->val);
                if(x->left) q.push({x->left, level+1});
                if(x->right) q.push({x->right, level+1});
            }
            ans.push_back(temp);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};