//Kumar Ankit
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		    int[] a=new int[n];
		    int sum=0,c=0;
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		        sum+=a[i];
		        if(a[i]==5)
		        c++;
		    }
		    double avg=sum/n;
		    if(avg<4.0||c==0){
		        System.out.println("No");
		    }
		    else{
		        int d=0;
		    for(int i=0;i<n;i++){
		        if(a[i]<=2){
		            d++;
		        }
		    }
		    if(d==0)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		    }
		}
	}
}
