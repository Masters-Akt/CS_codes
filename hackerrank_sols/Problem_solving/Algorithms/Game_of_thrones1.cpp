//Kumar Ankit
#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    if(s.length()==0) return "NO";
    long long int a[26] = {};
    for(int i=0;i<s.length();i++){
        long long int asc=s[i];
        asc=asc-97;
        a[asc]++;
        cout<<asc<<"\n";
    }
    long long int odd=0;
    for(int i=0;i<26;i++){
        if(a[i]%2==1){
            odd++;
        }
    }
    if(odd==1) return "YES";
    if(odd==0) return "YES";
    return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
