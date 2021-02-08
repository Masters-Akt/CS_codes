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
		    int p=sc.nextInt();
		    int c=0;
		    while(p>0){
		    for(int i=2048;i>=1;i/=2){
		      if(i<=p){
		          c++;
		          p=p-i;
		          break;
		      }  
		    }
		    }
		    System.out.println(c);
		}
	}
}
