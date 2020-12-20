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
        double sum=0;
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
            sum+=a[i];
        }
        double mean=sum/n,sumdev=0;
        for(int i=0;i<n;i++){
            sumdev+=((a[i]-mean)*(a[i]-mean));
        }
        double sigma=Math.sqrt(sumdev/n);
        System.out.printf("%.1f",sigma);
    }
}
