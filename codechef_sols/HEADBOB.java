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
		    int N=sc.nextInt();
		    sc.nextLine();
		    String s=sc.nextLine();
		    int y=0,n=0,i=0;
		    for(int j=0;j<N;j++){
		        if(s.charAt(j)=='Y'){
		        y++;
		        }
		        else if(s.charAt(j)=='N'){
		            n++;
		        }
		       else if(s.charAt(j)=='I'){
		           i++;
		       }
		    }
		    if(i!=0){
		        System.out.println("INDIAN");
		    }
		    else{
		        if(y==0){
		            System.out.println("NOT SURE");
		        }
		        else
		        System.out.println("NOT INDIAN");
		    }
		}
	}
}
