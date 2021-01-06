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
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		    }
		    int[] b=new int[n];
		    for(int i=0;i<n;i++){
		        b[i]=sc.nextInt();
		    }
		    int max=0;
		    int[] res=new int[n];
		    for(int i=0;i<n;i++){
		        res[i]=a[i]*20-b[i]*10;
		        if(res[i]<0){
		            res[i]=0;
		        }
		        if(res[i]>max){
		            max=res[i];
		        }
		    }
		    System.out.println(max);
		}
	}
}
