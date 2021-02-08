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
		int c[]=new int[n],a[]=new int[n];
		int w1=100000,w2=100000,w3=100000;
		for(int i=0;i<n;i++){
		     c[i]=sc.nextInt();
		   
		}
		
		for(int i=0;i<n;i++){
		 a[i]=sc.nextInt();   
		    if(a[i]==1){
		        if(c[i]<w1){
		            w1=c[i];
		        }
		    }
		    else if(a[i]==2){
		        if(c[i]<w2){
		            w2=c[i];
		        }
		    }
		    else{
		        if(c[i]<w3){
		            w3=c[i];
		        }
		    }
		}
		if(w1+w2<=w3){
		    System.out.println(w1+w2);
		}
		else
		System.out.println(w3);
	}
}
