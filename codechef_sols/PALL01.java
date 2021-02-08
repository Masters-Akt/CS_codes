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
		    int temp=n;
		    int rev=0;
		    while(temp>0){
		        rev=rev*10+(temp%10);
		        temp/=10;
		    }
		    if(rev==n)
		    System.out.println("wins");
		    else
		    System.out.println("losses");
		}
	}
}
