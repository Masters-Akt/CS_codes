/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int s = q.size();
            vector<int> temp;
            while(s--){
                Node* x = q.front().first;
                int level = q.front().second;
                q.pop();
                temp.push_back(x->val);
                for(int i=0;i<x->children.size();i++){
                    if(x->children[i]) q.push({x->children[i], level+1});
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};