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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        vector<TreeNode*> temp;
        q.push(root);
        int ans = 0;
        while(!q.empty()){
            temp.clear();
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* x = q.front();
                temp.push_back(x);
                q.pop();
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }
        }
        for(int i=0;i<temp.size();i++) ans+=temp[i]->val;
        return ans;
    }
};