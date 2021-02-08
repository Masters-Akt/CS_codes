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
		    String s1=sc.nextLine();
		    String s2=sc.nextLine();
		    int min=0,max=0,ques=0;
		    for(int i=0;i<s1.length();i++){
		        if(s1.charAt(i)!='?'&&s2.charAt(i)!='?'&&s1.charAt(i)!=s2.charAt(i)){
		            min++;
		        }
		        if((s1.charAt(i)=='?'&&s2.charAt(i)!='?')||(s1.charAt(i)!='?'&&s2.charAt(i)=='?')||(s1.charAt(i)=='?'&&s2.charAt(i)=='?')){
		            ques++;
		        }
		    }
		    max=min+ques;
		    System.out.println(""+min+" "+max);
		}
	}
}
