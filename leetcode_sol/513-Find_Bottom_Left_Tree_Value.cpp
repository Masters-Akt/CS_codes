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
    int findBottomLeftValue(TreeNode* root) {
        int ans = 0, curLevel = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int s = q.size();
            TreeNode* x = q.front().first;
            int level = q.front().second;
            q.pop();
            s--;
            if(level>=curLevel){
                curLevel = level;
                ans = x->val;
            }
            if(x->left) q.push({x->left, level+1});
            if(x->right) q.push({x->right, level+1});
            while(s--){
                x = q.front().first;
                level = q.front().second;
                q.pop();
                if(x->left) q.push({x->left, level+1});
                if(x->right) q.push({x->right, level+1});
            }
        }
        return ans;
    }
};