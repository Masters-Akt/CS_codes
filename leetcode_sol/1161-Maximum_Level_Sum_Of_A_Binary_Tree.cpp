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
    int maxLevelSum(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int sum = root->val, level = 1;
        while(!q.empty()){
            int s = 0;
            int qs = q.size();
            int temp_level = 0;
            while(qs--){
                auto x = q.front();
                q.pop();
                temp_level = x.second;
                s+=x.first->val;
                if(x.first->left) q.push({x.first->left, x.second+1}); 
                if(x.first->right) q.push({x.first->right, x.second+1}); 
            }
            if(s>sum){
                sum = s;
                level = temp_level;
            }
        }
        return level;
    }
};