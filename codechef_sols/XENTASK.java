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
		    int[] b=new int[n];
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		    }
		    for(int i=0;i<n;i++){
		        b[i]=sc.nextInt();
		    }
		    int s1=0,s2=0;
		    for(int i=0;i<n;i++){
		        if(i%2==0){
		            s1+=a[i];
		            s2+=b[i];
		        }
		        else{
		            s1+=b[i];
		            s2+=a[i];
		        }
		    }
		    if(s1>=s2)
		    System.out.println(s2);
		    else
		    System.out.println(s1);
		}
	}
}
