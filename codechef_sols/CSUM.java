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
		    int k=sc.nextInt();
		    int a[]=new int[n];
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		    }
		    int flag=0;
		    for(int i=0;i<n-1;i++){
		        for(int j=i+1;j<n;j++){
		            if(a[i]+a[j]==k){
		                flag=1;
		                break;
		            }
		        }
		    }
		    if(flag==1)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		}
	}
}
