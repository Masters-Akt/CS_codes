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
		int n=sc.nextInt();
		int q=sc.nextInt();
		int a[]=new int[n];
		int qu[]=new int[q];
		for(int i=0;i<n;i++){
		    a[i]=sc.nextInt();
		}
		int max=a[0],min=a[0];
		for(int i=0;i<n;i++){
		    if(a[i]>max)
		    max=a[i];
		    if(a[i]<min)
		    min=a[i];
		}
		for(int i=0;i<q;i++){
		    qu[i]=sc.nextInt();
		    if(qu[i]<=max&&qu[i]>=min){
		        System.out.println("Yes");
		    }
		    else{
		        System.out.println("No");
		    }
		}
	}
}
