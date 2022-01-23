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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s;
        TreeNode* node = root;
        int c = 0; 
        while(true){
            if(node){
                s.push(node);
                node = node->left;
            }else{
                if(s.empty()) break;
                node = s.top();
                s.pop();
                c++; 
                if(c==k) return node->val; 
                node = node->right;
            }
        }
        return -1; 
    }
};