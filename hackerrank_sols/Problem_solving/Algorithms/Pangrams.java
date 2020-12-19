//Kumar Ankit
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the pangrams function below.
    static String pangrams(String s) {
        int[] c=new int[26];
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='a'||s.charAt(i)=='A')
            c[0]++;
            else if(s.charAt(i)=='b'||s.charAt(i)=='B')
            c[1]++;
            else if(s.charAt(i)=='c'||s.charAt(i)=='C')
            c[2]++;
            else if(s.charAt(i)=='d'||s.charAt(i)=='D')
            c[3]++;
            else if(s.charAt(i)=='e'||s.charAt(i)=='E')
            c[4]++;
            else if(s.charAt(i)=='f'||s.charAt(i)=='F')
            c[5]++;
            else if(s.charAt(i)=='g'||s.charAt(i)=='G')
            c[6]++;
            else if(s.charAt(i)=='h'||s.charAt(i)=='H')
            c[7]++;
            else if(s.charAt(i)=='i'||s.charAt(i)=='I')
            c[8]++;
            else if(s.charAt(i)=='j'||s.charAt(i)=='J')
            c[9]++;
            else if(s.charAt(i)=='k'||s.charAt(i)=='K')
            c[10]++;
            else if(s.charAt(i)=='l'||s.charAt(i)=='L')
            c[11]++;
            else if(s.charAt(i)=='m'||s.charAt(i)=='M')
            c[12]++;
            else if(s.charAt(i)=='n'||s.charAt(i)=='N')
            c[13]++;
            else if(s.charAt(i)=='o'||s.charAt(i)=='O')
            c[14]++;
            else if(s.charAt(i)=='p'||s.charAt(i)=='P')
            c[15]++;
            else if(s.charAt(i)=='q'||s.charAt(i)=='Q')
            c[16]++;
            else if(s.charAt(i)=='r'||s.charAt(i)=='R')
            c[17]++;
            else if(s.charAt(i)=='s'||s.charAt(i)=='S')
            c[18]++;
            else if(s.charAt(i)=='t'||s.charAt(i)=='T')
            c[19]++;
            else if(s.charAt(i)=='u'||s.charAt(i)=='U')
            c[20]++;
            else if(s.charAt(i)=='v'||s.charAt(i)=='V')
            c[21]++;
            else if(s.charAt(i)=='w'||s.charAt(i)=='W')
            c[22]++;
            else if(s.charAt(i)=='x'||s.charAt(i)=='X')
            c[23]++;
            else if(s.charAt(i)=='y'||s.charAt(i)=='Y')
            c[24]++;
            else if(s.charAt(i)=='z'||s.charAt(i)=='Z')
            c[25]++;
        }
        int f=1;
        for(int i=0;i<26;i++){
            if(c[i]==0){
                f=0;
                break;
            }
        }
        if(f==0)
        return "not pangram";
        else
        return "pangram";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String result = pangrams(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
