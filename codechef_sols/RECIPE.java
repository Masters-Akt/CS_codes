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
		    int max=0;
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		        if(a[i]>max)
		        max=a[i];
		    }
		    int i=2;
		    while(i<=max){
		        int flag=1;
		        for(int j=0;j<n;j++){
		            if(a[j]%i!=0){
		                flag=0;
		                break;
		            }
		        }
		        if(flag==1){
		            for(int j=0;j<n;j++){
		                a[j]=a[j]/i;
		            }
		            max=max/i;
		            i=2;
		        }
		        else{
		            i++;
		        }
		    }
		    for(int j=0;j<n;j++){
		        System.out.print(""+a[j]+" ");
		    }
		    System.out.println();
		}
	}
}
