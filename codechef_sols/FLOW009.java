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
		    double q=sc.nextDouble();
		    double p=sc.nextDouble();
		    double amt=0.000000;
		    if(q>1000){
		        amt=0.9*q*p;
		    }
		    else{
		        amt=q*p;
		    }
		    System.out.printf("%.6f\n",amt);
		}
	}
}
