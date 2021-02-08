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
		    int sum=0;
		    for(int i=0;i<n;i++){
		        sum+=(sc.nextInt());
		    }
		    int req=(n*(n+1))/2;
		    if(req==sum)
		    System.out.println("YES");
		    else
		    System.out.println("NO");
		
	}
}
