#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> curr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        curr[arr[i]-1] = i;
    }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++) cout<<curr[i]<<" ";
    // cout<<endl;
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        // if(curr[i]==i+1){
        //     ans[i] = 0;
        //     arr.pop_back();
        //     curr.pop_back();
        // }else{
            ans[i] = (curr[i]+1)%arr.size();
            rotate(arr.begin(), arr.begin()+ans[i], arr.end());
            curr.pop_back();
            arr.pop_back();
            for(int j=0;j<arr.size();j++){
                curr[arr[j]-1] = j;
            }
        //}
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<curr.size();i++) cout<<curr[i]<<" ";
        // cout<<endl;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

signed main(){
//     #ifndef ONLINE_JUDGE
// 		freopen("input.txt", "r", stdin);
// 		freopen("output.txt", "w", stdout);
// 	#endif
    std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	for(int test=1;test<=t;test++){
	    akt();
	}
}
