class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        int ans = 0;
        queue<int> q;
        q.push(start);
        unordered_map<int, bool> m;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                int x = q.front();
                if(x==goal) return ans;
                q.pop();
                if(x<0 || x>1000 || m[x]) continue;
                m[x] = true;
                for(int i=0;i<nums.size();i++){
                    int x1 = x+nums[i];
                    int x2 = x-nums[i];
                    int x3 = x^nums[i];
                    q.push(x1);
                    q.push(x2);
                    q.push(x3);
                }    
            }
            ans++;
        }
        return -1;
    }
};