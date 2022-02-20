class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> ans(deck.size());
        sort(deck.begin(), deck.end());
        queue<int> q;
        for(int i=0;i<deck.size();i++) q.push(i);
        bool check = true;
        int i = 0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(check) ans[x] = deck[i++];
            else q.push(x);
            check = !check;
        }
        return ans;
    }
};