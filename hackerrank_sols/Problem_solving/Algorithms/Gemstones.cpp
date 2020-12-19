//Kumar Ankit
#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
int n=arr.size();
for(int i=0;i<arr.size();i++){
    sort(arr[i].begin(), arr[i].end());
}
int a[26]={0};
for(int i=0;i<arr.size();i++){
    a[int(arr[i][0])-97]++;
    for(int j=1;j<arr[i].length();j++){
        if(arr[i][j]!=arr[i][j-1]){
            a[int(arr[i][j])-97]++;
        }
    }
}
int c=0;
for(int i=0;i<26;i++){
    if(a[i]==n) c++;
}
return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
