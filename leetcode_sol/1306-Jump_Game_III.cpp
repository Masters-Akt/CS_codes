class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int s = q.size();
            while(s--){
                int index = q.front();
                q.pop();
                if(arr[index]==-1) continue;
                if(arr[index]==0) return true;
                if(index+arr[index]<arr.size()) q.push(index+arr[index]);
                if(index-arr[index]>=0) q.push(index-arr[index]);
                arr[index] = -1;
            }
        }
        return false;
    }
};