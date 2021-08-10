#include <bits/stdc++.h>
using namespace std;
#define int long long

void kumar_ankit()
{
  int n;
  cin >> n;
  int a[n];
  int s = 0, m = INT_MIN, minind=-1;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if(m<a[i]){
      m=a[i];
      minind=i;
    }
  }
  for(int i=0;i<n;i++){
    if(i!=minind) s+=a[i];
  }
  printf("%.9lf\n", (double)s/(double)(n-1) + m);
}

signed main()
{
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  for (int test = 1; test <= t; test++)
  {
    kumar_ankit();
  }
}
