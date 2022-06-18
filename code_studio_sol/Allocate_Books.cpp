//Accepted
bool check(int n, int m, long long mid, vector<int> time){
    long long req = 0, curr = 1;
    for(int i=0;i<m;i++){
        if(req+time[i]<=mid) req+=time[i];
        else{
            curr++;
            if(curr>n || time[i]>mid) return false;
            req = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    long long start = 0, sum = 0;
    for(int i=0;i<time.size();i++) sum+=time[i];
    long long ans = -1, last = sum;
    while(start<=last){
        long long mid = (start+last)/2;
        if(check(n, m, mid, time)){
            ans = mid;
            last = mid-1;
        }else start = mid+1;
    }
    return ans;
}