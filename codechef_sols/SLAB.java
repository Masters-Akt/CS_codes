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
		    int n=sc.nextInt();
		    double tax=0.0;
		    if(n>1500000){
		        tax=(n-1500000)*(0.3)+(62500+50000+37500+25000+12500);
		    }
		    else if(n>1250000){
		        tax=(n-1250000)*(0.25)+(50000+37500+25000+12500);
		    }
		    else if(n>1000000){
		        tax=(n-1000000)*(0.2)+(37500+25000+12500);
		    }
		    else if(n>750000){
		        tax=(n-750000)*(0.15)+(25000+12500);
		    }
		    else if(n>500000){
		        tax=(n-500000)*(0.1)+(12500);
		    }
		    else if(n>250000){
		        tax=(n-250000)*(0.05);
		    }
		    else{
		        tax=0;
		    }
		    System.out.println(n-(int)tax);
		}
	}
}
