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
    int solve(TreeNode* root, map<int, int>& m){
        if(root==NULL) return 0;
        int s = root->val;
        s+=(solve(root->left, m) + solve(root->right, m));
        m[s]++;
        return s;
    }
    static bool comp(pair<int, int>& a, pair<int, int>& b){
        return a.second>b.second;
    }
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        map<int, int> m;
        vector<pair<int, int>> sum;
        solve(root, m);
        for(auto x: m){
            sum.push_back({x.first, x.second});
        }
        sort(sum.begin(), sum.end(), comp);
        vector<int> ans;
        ans.push_back(sum[0].first);
        for(int i=1;i<sum.size();i++){
            if(sum[i].second==sum[i-1].second) ans.push_back(sum[i].first);
            else break;
        }
        return ans;
    }
};