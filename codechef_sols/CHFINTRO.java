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
		int n=sc.nextInt();
		int r=sc.nextInt();
		int[] R=new int[n];
		for(int i=0;i<n;i++){
		    R[i]=sc.nextInt();
		    if(R[i]>=r)
		    System.out.println("Good boi");
		    else
		    System.out.println("Bad boi");
		}
	}
}
