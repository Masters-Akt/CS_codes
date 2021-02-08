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
		    int g=sc.nextInt();
		    while(g-->0){
		        int l=sc.nextInt();
		        int n=sc.nextInt();
		        int q=sc.nextInt();
		        if(n%2==0){
		            System.out.println(n/2);
		        }
		        else{
		            if(l==q){
		                System.out.println(n/2);
		            }
		            else{
		                System.out.println(n/2 + 1);
		            }
		        }
		    }
		}
	}
}
