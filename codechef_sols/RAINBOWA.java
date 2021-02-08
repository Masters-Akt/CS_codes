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
		    if(a[0]!=1){
		        System.out.println("no");
		    }
		    else{
		        int l=0,h=n-1;
		        while(l<h){
		            if(a[l]!=a[h] || (a[l]>7 || a[h]>7) || (a[l+1]-a[l]>1 || a[l+1]-a[l]<0) || (a[l]<1 || a[h]<1))
		            break;
		        
		        l++;
		        h--;
		    }
		    if(l<h || a[l]!=7){
		        System.out.println("no");
		    }
		    else{
		        System.out.println("yes");
		    }
		    }
		}
	}
}
