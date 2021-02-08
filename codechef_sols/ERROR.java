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
		sc.nextLine();
		while(t-->0){
		    String s=sc.nextLine();
		    int flag=0;
		    for(int i=0;i<s.length()-2;i++){
		        
		        
		            if(s.substring(i,i+3).equals("010")||s.substring(i,i+3).equals("101")){
		                flag=1;
		                break;
		            }
		            
		        
		    }
		    if(flag==1)
		    System.out.println("Good");
		    else
		    System.out.println("Bad");
		}
	}
}
