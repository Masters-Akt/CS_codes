//Kumar Ankit
#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    vector<string> ans;
    vector<int> st;
    for(int i=0;i<s.length();i++){
        int count=1,j=i+1;
        while(s[i]==s[j]){
            count++;
            j++;
        }
        while(count>0){
            st.push_back((int(s[i])-96)*count);
            count--;
        }
        i=j-1;
    }
    for(int i=0;i<queries.size();i++){
        bool ch=false;
        for(int j=0;j<st.size();j++){
            if(queries[i]==st[j]){
                ans.push_back("Yes");
                ch=true;
                break;
            }
        }
        if(ch==false){
            ans.push_back("No");
        }
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
