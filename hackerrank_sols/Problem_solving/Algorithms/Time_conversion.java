//Kumar Ankit
import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the timeConversion function below.
     */
    static String timeConversion(String s) {
        /*
         * Write your code here.
         */
         String a="";
         String check=""+s.substring(8,10);
         if(check.equals("AM")){
             int h=Integer.parseInt(""+s.substring(0,2));
             if(h==12)
             h=0;
             String hr="";
             if(h>9){
                hr=hr+h;
             }
             else{
                 hr=hr+"0"+h;
             }
             a=hr+s.substring(2,8);
             return a;
         }else{
             String hour=""+s.substring(0,2);
             int h=Integer.parseInt(hour);
             if(h!=12)
             h=h+12;
             String hr="";
             if(h==24){
                 h=0;
                 hr=hr+"00";
             }
             else{
                 hr=hr+h;
             }
             a=hr+s.substring(2,8);
         }
         return a;
    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scan.nextLine();

        String result = timeConversion(s);

        bw.write(result);
        bw.newLine();

        bw.close();
    }
}
