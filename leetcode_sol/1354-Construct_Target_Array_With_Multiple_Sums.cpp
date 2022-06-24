class Solution {
public:
    bool isPossible(vector<int>& target) {
        long total = 0;
        int n = target.size(), a;
        priority_queue<int> pq(target.begin(), target.end());
        for(int a : target) total+=a;
        while(true){
            a = pq.top();
            pq.pop();
            total-=a;
            if(a==1||total==1) return true;
            if(a<total || total==0 || a%total==0) return false;
            a%=total;
            total+=a;
            pq.push(a);
        }
    }
};