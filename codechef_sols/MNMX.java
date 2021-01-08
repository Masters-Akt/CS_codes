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
		    long n=sc.nextInt();
		    long a[]=new long[(int)n];
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextLong();
		    }
		    long min=a[0];
		    for(int i=0;i<n;i++){
		        if(a[i]<min)
		        min=a[i];
		    }
		    System.out.println(min*(n-1));
		}
	}
}
