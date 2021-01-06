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
		    int[] d=new int[30];
		    int c=0,f=0;
		    for(int i=0;i<30;i++){
		        d[i]=sc.nextInt();
		    }
		    for(int i=0;i<30;i++){
		        if(d[i]==1)
		        c++;
		        else if(d[i]==0){
		            c=0;
		        }
		        if(c>5){
		            f++;
		        }
		    }
		    if(f==0)
		    System.out.println("#allcodersarefun");
		    else
		    System.out.println("#coderlifematters");
		}
	}
}
