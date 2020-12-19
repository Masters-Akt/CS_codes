//Kumar Ankit
#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    int count=0;
    int a[26]={0};
    for(int i=0;i<s1.length();i++){
        a[(int)(s1[i])-97]++;
    }
    for(int i=0;i<s2.length();i++){
        a[(int)(s2[i])-97]--;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0){
            count+=abs(a[i]);
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
