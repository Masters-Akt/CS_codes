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
		    double b=sc.nextInt();
		    double ls=sc.nextInt();
		    double min=Math.sqrt(ls*ls-b*b);
		    double max=Math.sqrt(ls*ls+b*b);
		    System.out.println(""+min+" "+max);
		}
	}
}
