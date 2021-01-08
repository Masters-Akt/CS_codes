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
		Scanner s=new Scanner(System.in);
		int T=s.nextInt();
		while(T-->0)
		{
		    int S,k=0;
		    S=s.nextInt();
		    int a[]=new int[3];
		    a[0]=s.nextInt();
		    a[1]=s.nextInt();
		    a[2]=s.nextInt();
		    if(a[0]+a[1]+a[2]<=S)
		    k=1;
		    else if (a[0]+a[1]<=S||a[1]+a[2]<=S)
		    k=2;
		    else
		    k=3;
		  System.out.println(k);
		   
		}
	}
}
