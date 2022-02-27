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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int size = q.size();
            int mmin = q.front().second, first, last;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front().first;
                int curr_index = q.front().second-mmin;
                q.pop();
                if(i==0) first = curr_index;
                if(i==size-1) last = curr_index;
                if(node->left) q.push({node->left, curr_index*2+1});
                if(node->right) q.push({node->right, curr_index*2+2});
            }
            ans = max(ans, last-first+1);
        }
        return ans;
    }
};

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
    int widthOfBinaryTree(TreeNode* root) {
        long result=1;
	    queue<pair<TreeNode*,long>> q;
	    q.push({root,0});
	    while(!q.empty()){
		    int s=q.size();
		    long current=0;
		    for (int i=0; i<s; i++){
			    pair<TreeNode*,long> p=q.front();
			    q.pop();
			    if(i==0) current=p.second;
			    else result=max(result,p.second-current+1);
			    if(p.first->left) q.push({p.first->left,p.second*2-current});
			    if(p.first->right) q.push({p.first->right,p.second*2-current+1});
		    }
	    }
	    return result;
    }
};