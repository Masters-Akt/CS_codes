//Kumar Ankit
#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.

string convert_to_words(int num){
    if(num==1) return "one";
    if(num==2) return "two";
    if(num==3) return "three";
    if(num==4) return "four";
    if(num==5) return "five";
    if(num==6) return "six";
    if(num==7) return "seven";
    if(num==8) return "eight";
    if(num==9) return "nine";
    if(num==10) return "ten";
    if(num==11) return "eleven";
    if(num==12) return "twelve";
    if(num==13) return "thirteen";
    if(num==14) return "fourteen";
    if(num==15) return "fifteen";
    if(num==16) return "sixteen";
    if(num==17) return "seventeen";
    if(num==18) return "eighteen";
    if(num==19) return "nineteen";
    if(num==20) return "twenty";
    if(num==21) return "twenty one";
    if(num==22) return "twenty two";
    if(num==23) return "twenty three";
    if(num==24) return "twenty four";
    if(num==25) return "twenty five";
    if(num==26) return "twenty six";
    if(num==27) return "twenty seven";
    if(num==28) return "twenty eight";
    return "twenty nine";
}

string timeInWords(int h, int m) {
    string fpart="",spart="",final_time="";
    if(m==0){
        fpart=fpart+convert_to_words(h);
        final_time=final_time+fpart+" o' clock";
    }
    else if(m>0 && m<15){
        fpart=fpart+convert_to_words(h);
        spart=spart+convert_to_words(m);
        if(m!=1)
        final_time=final_time+spart+" minutes past "+fpart;
        else
        final_time=final_time+spart+" minute past "+fpart;
    }
    else if(m==15){
        fpart=fpart+convert_to_words(h);
        final_time=final_time+"quarter past "+fpart;
    }
    else if(m>15 && m<30){
        fpart=fpart+convert_to_words(h);
        spart=spart+convert_to_words(m);
        final_time=final_time+spart+" minutes past "+fpart;
    }
    else if(m==30){
        fpart=fpart+convert_to_words(h);
        final_time=final_time+"half past "+fpart;
    }
    else if(m>30 && m<45){
        if(h==12)
        fpart=fpart+convert_to_words(1);
        else
        fpart=fpart+convert_to_words(h+1);
        spart=spart+convert_to_words(60-m);
        final_time=final_time+spart+" minutes to "+fpart;
    }
    else if(m==45){
        if(h==12)
        fpart=fpart+convert_to_words(1);
        else
        fpart=fpart+convert_to_words(h+1);
        final_time=final_time+"quarter to "+fpart;
    }
    else{
        if(h==12)
        fpart=fpart+convert_to_words(1);
        else
        fpart=fpart+convert_to_words(h+1);
        spart=spart+convert_to_words(60-m);
        final_time=final_time+spart+" minutes to "+fpart;
    }
    return final_time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
