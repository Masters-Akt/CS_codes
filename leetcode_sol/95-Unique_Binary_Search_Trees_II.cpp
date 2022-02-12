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
    vector<TreeNode*> solve(int start, int end){
        vector<TreeNode*> ans;
        if(start>end){
            ans.push_back(NULL);
            return ans;
        }
        if(start==end){
            ans.push_back(new TreeNode(start));
            return ans;
        }
        vector<TreeNode*> left;
        vector<TreeNode*> right;
        for(int i=start;i<=end;i++){
            left = solve(start, i-1);
            right = solve(i+1, end);
            for(auto x: left){
                for(auto y: right){
                    TreeNode* root = new TreeNode(i);
                    root->left = x;
                    root->right = y;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        return solve(1, n);
    }
};