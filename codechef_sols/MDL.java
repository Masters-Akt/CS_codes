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
		    int a[]=new int[n];
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
		    int minIndex=0,maxIndex=0;
		    for(int i=0;i<n;i++){
		        if(a[i]==max)
		        maxIndex=i;
		        if(a[i]==min)
		        minIndex=i;
		    }
		    if(minIndex>maxIndex){
		        System.out.println(""+max+" "+min);
		    }
		    else{
		        System.out.println(""+min+" "+max);
		    }
		}
	}
}
