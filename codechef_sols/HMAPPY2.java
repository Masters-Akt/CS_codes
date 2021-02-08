/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static long gcd(long a, long b){
        if(b==0)
        return a;
        else
        return gcd(b,a%b);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    long n=sc.nextLong();
		    long a=sc.nextLong();
		    long b=sc.nextLong();
		    long k=sc.nextLong();
		    long lcm=(a*b)/gcd(a,b);
		    long c=(n/a-n/lcm)+(n/b-n/lcm);
		    
		    if(c>=k)
		    System.out.println("Win");
		    else
		    System.out.println("Lose");
		}
	}
}
