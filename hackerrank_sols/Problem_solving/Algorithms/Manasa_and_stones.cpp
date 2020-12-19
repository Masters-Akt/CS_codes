//Kumar Ankit
#include <bits/stdc++.h>

using namespace std;

// Complete the stones function below.
vector<int> stones(int n, int a, int b) {
    vector<int> ans;
    int start,end;
    if(a<b){
    start=(n-1)*a;
    end = (n-1)*b;}else{
        start=(n-1)*b;
        end=(n-1)*a;
    }
    cout<<"start= "<<start<<" end = "<<end<<endl;
    ans.push_back(start);
    if(a!=b){
    while(start<end){
        if(a>b)
        start=start+ a-b;
        else
        start = start + b-a;
        ans.push_back(start);
    }
    
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}
