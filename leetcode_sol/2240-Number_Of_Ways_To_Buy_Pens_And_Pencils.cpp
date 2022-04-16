class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;
        for(int i=0;i<=total;i++){
            if(total-(i*cost1)<0) break;
            ans+=((total-(i*cost1))/cost2)+1;
        }
        if(ans==0) return ans+1;
        return ans;
    }
};