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
		    int[] v=new int[n];
		    for(int i=0;i<n;i++){
		        v[i]=sc.nextInt();
		    }
		    int min=Math.abs(v[0]-v[1]);
		    Arrays.sort(v);
		    for(int i=1;i<n;i++){
		        if(Math.abs(v[i]-v[i-1])<min)
		        min=Math.abs(v[i]-v[i-1]);
		    }
		    System.out.println(min);
		}
	}
}
