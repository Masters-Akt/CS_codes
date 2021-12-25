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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int s = q.size();
            double sum = 0.0;
            for(int i=0;i<s;i++){
                TreeNode* x = q.front().first;
                int level = q.front().second;
                q.pop();
                sum+=x->val;
                if(x->left) q.push({x->left, level+1});
                if(x->right) q.push({x->right, level+1});
            }
            ans.push_back(sum/s);
        }
        return ans;
    }
};