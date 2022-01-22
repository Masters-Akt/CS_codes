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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums, int l = 0, int h = INT_MIN) {
        if(h==INT_MIN) h = nums.size();
        if(l==h) return NULL;
        if(l<0 || h>nums.size() || l>h) return NULL;
        int m_index = max_element(nums.begin()+l, nums.begin()+h)-(nums.begin());
        TreeNode* root = new TreeNode(nums[m_index]);
        root->left = constructMaximumBinaryTree(nums, l, m_index);
        root->right = constructMaximumBinaryTree(nums, m_index+1, h);
        return root;
    }
};