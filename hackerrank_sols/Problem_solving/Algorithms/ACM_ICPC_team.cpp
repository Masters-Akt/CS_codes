//Kumar Ankit
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the acmTeam function below.
vector<int> acmTeam(vector<string> topic) {
    vector<int> ans, index;
    int maxl=0;
    for(int i=0;i<topic.size()-1;i++){
        
        //cout<<i<<endl;
        for(int k=i+1;k<topic.size();k++){
            int l=0;
        for(int j=0;j<topic[i].size();j++){
            //cout<<topic[i][j]<<" "<<topic[k][j]<<endl;
            if(topic[i][j]=='1' || topic[k][j]=='1'){
                l++;
            }
            //cout<<"l="<<l<<endl;
        }
        if(l>maxl){
            maxl=l;
            index.clear();
            index.push_back(i);
        }
        else if(l==maxl){
            index.push_back(i);
        }
        //cout<<"maxl="<<maxl<<endl;
        //cout<<"index size="<<index.size()<<"\n"<<"\n";
    }}
    ans.push_back(maxl);
    ans.push_back(index.size());
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<string> topic(n);

    for (int i = 0; i < n; i++) {
        string topic_item;
        getline(cin, topic_item);

        topic[i] = topic_item;
    }

    vector<int> result = acmTeam(topic);

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

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
