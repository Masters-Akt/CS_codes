//Kumar Ankit
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the minimumNumber function below.
    static int minimumNumber(int n, String password) {
        // Return the minimum number of characters to make the password strong
            int U=0,L=0,D=0,O=0,c=0;
            for(int i=0;i<n;i++){
                if(password.charAt(i)>=65&&password.charAt(i)<=90)
                U++;
                else if(password.charAt(i)>=97&&password.charAt(i)<=122)
                L++;
                else if(password.charAt(i)>=48&&password.charAt(i)<=57)
                D++;
                else if(password.charAt(i)=='!'||password.charAt(i)=='@'||password.charAt(i)=='#'||password.charAt(i)=='$'||password.charAt(i)=='%'||password.charAt(i)=='^'||password.charAt(i)=='&'||password.charAt(i)=='*'||password.charAt(i)=='('||password.charAt(i)==')'||password.charAt(i)=='-'||password.charAt(i)=='+')
                O++;
            }
            if(U==0)
            c++;
            if(L==0)
            c++;
            if(D==0)
            c++;
            if(O==0)
            c++;
            if(n>=6)
            return c;
            else{
                if(c>6-n)
                return c;
                else
                return 6-n;
            }
        
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        String password = scanner.nextLine();

        int answer = minimumNumber(n, password);

        bufferedWriter.write(String.valueOf(answer));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
