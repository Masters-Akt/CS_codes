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
		    int[] a=new int[100];
		    int c=0;
		    for(int i=0;i<100;i++){
		        a[i]=sc.nextInt();
		        if(a[i]<=30)
		        c++;
		    }
		    if(c>=60)
		    System.out.println("yes");
		    else
		    System.out.println("no");
		}
	}
}
