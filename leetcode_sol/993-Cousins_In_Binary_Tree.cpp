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
    void solve(TreeNode* node, int depth, int parent, unordered_map<int, pair<int, int>>& m) {
    	if (!node) return;
    	m[node->val] = {depth, parent};
    	solve(node->left, depth + 1, node->val, m);
    	solve(node->right, depth + 1, node->val, m);
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int, pair<int, int>> m;
		solve(root, 0, -1, m);
		return m[x].first == m[y].first && m[x].second != m[y].second;
    }
};