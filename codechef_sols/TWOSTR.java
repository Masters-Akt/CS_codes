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
		    int flag=1;
		    for(int i=0;i<s1.length();i++){
		        if((s1.charAt(i)!='?'&&s2.charAt(i)!='?')&&s1.charAt(i)!=s2.charAt(i)){
		            flag=0;
		            break;
		        }
		        else
		        flag=1;
		    }
		    if(flag==1)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		}
	}
}
