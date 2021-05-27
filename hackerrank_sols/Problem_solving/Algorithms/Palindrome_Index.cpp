#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int palindromeIndex(string s) {
    bool ch = true;
    int index=-1;
    for(int i=0;i<(int)s.size()/2;i++){
        if(s[i]!=s[(int)s.size()-1-i]){
            ch=false;
            index = i;
            break;
        }
    }
    if(ch) return -1;
    ch = true;
    string snew = "";
    if(index!=0){
        snew+=s.substr(0,index);
    }
    snew+=s.substr(index+1,(int)s.size()-(int)snew.size()-1);
    for(int i=0;i<(int)snew.size()/2;i++){
        if(snew[i]!=snew[(int)snew.size()-1-i]){
            ch = false;
            break;
        }
    }
    if(ch) return index;
    return (int)s.size()-index-1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
