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
		    int m=sc.nextInt();
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    int a[]=new int[m];
		    int b[]=new int[100];
		    for(int i=0;i<m;i++){
		        a[i]=sc.nextInt();
		        for(int j=(a[i]-(x*y)-1);j<=(a[i]+(x*y)-1);j++){
		            if(j>=0&&j<=99){
		                b[j]++;
		            }
		        }
		    }
		    int c=0;
		    for(int i=0;i<100;i++){
		        if(b[i]==0){
		            c++;
		        }
		    }
		    System.out.println(c);
		}
	}
}
