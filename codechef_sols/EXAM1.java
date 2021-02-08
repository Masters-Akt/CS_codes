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
		    sc.nextLine();
		    String s1=sc.nextLine();
		    String s2=sc.nextLine();
		    int c=0;
		    for(int i=0;i<n;i++){
		        if(s2.charAt(i)!='N'){
		            if(s2.charAt(i)==s1.charAt(i)){
		                c++;
		            }
		            else{
		                i++;
		            }
		        }
		    }
		    System.out.println(c);
		}
	}
}
