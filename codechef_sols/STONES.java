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
		    String j=sc.nextLine();
		    String s=sc.nextLine();
		    int c=0;
		    for(int i=0;i<s.length();i++){
		        for(int k=0;k<j.length();k++){
		            if(s.charAt(i)==j.charAt(k)){
		                c++;
		                break;
		            }
		        }
		    }
		    System.out.println(c);
		}
	}
}
