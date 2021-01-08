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
		    int w=sc.nextInt();
		    String s=sc.nextLine();
		    int start=0;
		    switch(s){
		        case " mon":start=0;
		        break;
		        case " tues":start=1;
		        break;
		        case " wed":start=2;
		        break;
		        case " thurs":start=3;
		        break;
		        case " fri":start=4;
		        break;
		        case " sat":start=5;
		        break;
		        case " sun":start=6;
		        break;
		    }
		    int d[]=new int[7];
		    int k=1,p=start;
		    while(k<=w){
		        if(p!=0)
		        p=p%7;
		        else
		        p=0;
		        d[p]++;
		        p++;
		        k++;
		    }
		    for(int i=0;i<7;i++){
		        System.out.print(""+d[i]+" ");
		    }
		    System.out.println();
		}
	}
}
