//Kumar Ankit
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the appendAndDelete function below.
    static String appendAndDelete(String s, String t, int k) {
        int count=0;
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2){
            count+=(Math.abs(l1-l2));
        }
        if(l1<=l2){
            for(int i=0;i<l1;i++){
                if(s.charAt(i)!=t.charAt(i)){
                    count+=(2*(l1-i));
                    break;
                }
            }
        }
        else{
            for(int i=0;i<l2;i++){
                if(s.charAt(i)!=t.charAt(i)){
                    count+=(2*(l2-i));
                    break;
                }
            }
        }

        if((count<=k && (k-count)%2==0)||(l1+l2<=k))
        return "Yes";
        else
        return "No";

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String t = scanner.nextLine();

        int k = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        String result = appendAndDelete(s, t, k);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
