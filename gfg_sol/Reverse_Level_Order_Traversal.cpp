//Problem: https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if(!root) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> temp;
        int s = q.size();
        while(s--){
            Node* x = q.front();
            q.pop();
            temp.push_back(x->data);
            if(x->left) q.push(x->left);
            if(x->right) q.push(x->right);
        }
        temp.insert(temp.end(), ans.begin(), ans.end());
        ans = temp;
    }
    return ans;
}