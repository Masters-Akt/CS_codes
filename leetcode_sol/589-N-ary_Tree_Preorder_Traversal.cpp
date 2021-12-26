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
private:
    void preorder(Node* root, vector<int>& ans){
        if(!root) return;
        ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++) preorder(root->children[i], ans);
    }
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};