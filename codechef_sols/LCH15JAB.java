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
		    int a[]=new int[26];
		    for(int i=0;i<s.length();i++){
		        int temp=(int)(s.charAt(i))-97;
		        a[temp]++;
		    }
		    int max=0,sum=0;
		    for(int i=0;i<26;i++){
		        sum+=a[i];
		        if(a[i]>max)
		        max=a[i];
		    }
		    sum=sum-max;
		    if(sum==max)
		    System.out.println("YES");
		    else
		    System.out.println("NO");
		}
	}
}
