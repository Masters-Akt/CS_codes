//Kumar Ankit
#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long start=1,end=3,p=3;
    while(!(t>=start && t<=end)){
        start=end+1;
        p=p*2;
        end=end+p;
    }
    return p-(t-start);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
