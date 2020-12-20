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
        Arrays.sort(a);
        double mean=sum/n,median=0;
        int mode=0;
        if(n%2==0){
            median=((double)a[n/2]+(double)a[(n/2)-1])/2;
        }
        else{
            median=a[(n+1)/2];
        }
        int max=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i;j<n;j++){
                if(a[i]==a[j]){
                    c++;
                }
            }
            if(c>max){
            max=c;
            mode=a[i];
            }
        }
        System.out.printf("%.1f\n%.1f\n%d",mean,median,mode);
    }
}
