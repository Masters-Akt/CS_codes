//Kumar Ankit
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        int w[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        double sumw=0,sum=0;
        for(int i=0;i<n;i++){
            w[i]=sc.nextInt();
            sum+=(w[i]*a[i]);
            sumw+=w[i];
        }
        double wmean=sum/sumw;
        System.out.printf("%.1f",wmean);
    }
}
